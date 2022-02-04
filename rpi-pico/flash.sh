device=/dev/disk/by-label/RPI-RP2
folder=""


udisksctl mount --block-device $device

select flash_file in `find build -name '*.uf2'`; do

  folder=$(
    udisksctl info --block-device $device |
    grep MountPoints                      |
    awk '{print $2}'
  )

  set -x
  cp $flash_file $folder/
  set +x

  break
done

udisksctl unmount --block-device $device
