{ pkgs? import <nixpkgs> {} }:
pkgs.mkShell {
  #pkgs.config.allowUnsupportedSystem = true;
  buildInputs = with pkgs; [
    avrdude
    pkgsCross.avr.buildPackages.binutils
    pkgsCross.avr.buildPackages.gcc
  ];
  avrlibc = pkgs.pkgsCross.avr.avrlibc;
}
