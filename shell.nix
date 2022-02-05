{ avr ? true }:
let
  pkgs = import <nixpkgs> {};
in

with pkgs;
let
  avrlibc = pkgsCross.avr.libcCross;

  avr_incflags = [
    "-isystem ${avrlibc}/avr/include"
    "-B${avrlibc}/avr25/tiny-stack/"
    "-L${avrlibc}/avr25/tiny-stack/"
  ];
in
mkShell {
  name = "avr-stuff";

  buildInputs = [ git ]
    ++ [
      pkgsCross.avr.buildPackages.binutils
      pkgsCross.avr.buildPackages.gcc8
      avrlibc
      avrdude
    ];

  AVR_LIBC_PATH = "${avrlibc}";
  AVR_CFLAGS = avr_incflags;
  AVR_ASFLAGS = avr_incflags;
  AVR_CPATH = "${avrlibc}/avr/include";
  shellHook = ''
    cat <<EOF

      AVR_LIBC_PATH = $AVR_LIBC_PATH

      AVR_CPATH   = $AVR_CPATH
      AVR_CFLAGS  = $AVR_CFLAGS
      AVR_ASFLAGS = $AVR_ASFLAGS

    EOF
  '';
}
