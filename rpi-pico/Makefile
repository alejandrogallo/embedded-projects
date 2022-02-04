PICO_SDK_GIT = https://github.com/raspberrypi/pico-sdk
PICO_FOLDER ?= extern/pico-sdk


pico-sdk: $(PICO_FOLDER)
$(PICO_FOLDER):
	mkdir -p ${@D}
	git clone --depth 1 --recursive --shallow-submodules $(PICO_SDK_GIT) $@

clean:
	rm -rf build

clean-all: clean
	rm -rf $(PICO_FOLDER)

.PHONY: pico-sdk clean
