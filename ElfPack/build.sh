#!/bin/bash
set -x
set -e

IAR="/opt/IAR2/common/bin/iarbuild.exe"
MODEL=$1

wine $IAR ElfPack.ewp -make $MODEL
wine elf2vkpex.exe -e"$MODEL/Exe/ElfPack.elf" -f"../ff/$MODEL.raw" -v
mv ./out.vkp "$MODEL/Exe/ElfPack.vkp"
