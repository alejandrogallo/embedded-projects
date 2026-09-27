{ pkgs ? import <nixpkgs> { } }:

let pico-sdk = pkgs.pico-sdk.override { withSubmodules = true; };

in pkgs.mkShell rec {

  buildInputs = with pkgs; [ gcc-arm-embedded cmake python3 picotool arduino-cli ];

  shellHook = ''
    # export PICO_SDK_PATH="$PWD/extern/pico-sdk/"
    export PICO_SDK_PATH="${pico-sdk}/lib/pico-sdk"
  '';

}
