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

tags TAGS: $(PICO_FOLDER)
	ctags $(PICO_FOLDER)/src $(PICO_FOLDER)/lib/tinyusb/src
	ctags -e $(PICO_FOLDER)/src $(PICO_FOLDER)/lib/tinyusb/src

flash:
	./flash.sh

.PHONY: pico-sdk clean flash
