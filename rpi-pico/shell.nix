{ pkgs ? import <nixpkgs> {} }:

pkgs.mkShell rec {

  buildInputs = with pkgs; [
    gcc-arm-embedded
    cmake
    python3
  ];

  shellHook = ''
  export PICO_SDK_PATH="$PWD/extern/pico-sdk/"
  '';

}
