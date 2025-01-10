MIRRORS += "\
    git://anonscm.debian.org/.*   git://anonscm.debian.org/git/PATH;protocol=https \n \
    git://git.gnome.org/.*        git://git.gnome.org/browse/PATH;protocol=https \n \
    git://git.savannah.gnu.org/.* git://git.savannah.gnu.org/git/PATH;protocol=https \n \
    git://git.yoctoproject.org/.* git://git.yoctoproject.org/git/PATH;protocol=https \n \
    git://.*/.*                   git://HOST/PATH;protocol=https \n \
    git://source.codeaurora.org/external/imx/ git://github.com/nxp-imx/ \n \
    https://source.codeaurora.org/external/imx/ https://github.com/nxp-imx/ \n \
    http://source.codeaurora.org/external/imx/ http://github.com/nxp-imx/ \n \
    gitsm://source.codeaurora.org/external/imx/ gitsm://github.com/nxp-imx/ \n \
"

# Force nobranch to fix renamed default branches
INHERIT += "srcuri-force-nobranch"

SRCURI_FORCE_NOBRANCH_LIST ??= " \
    vulkan-loader git://github.com/KhronosGroup/Vulkan-Loader \n \
    glslang git://github.com/KhronosGroup/glslang \n \
    tesseract-lang git://github.com/tesseract-ocr/tessdata \n \
"
