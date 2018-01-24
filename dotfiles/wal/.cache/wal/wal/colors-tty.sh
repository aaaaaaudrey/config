#!/bin/sh
if [ "${TERM:-none}" = "linux" ]; then
    printf "%b" "\\e]P031272b"
    printf "%b" "\\e]P1959CA0"
    printf "%b" "\\e]P295A8B4"
    printf "%b" "\\e]P3C0A9BD"
    printf "%b" "\\e]P4A8B9C6"
    printf "%b" "\\e]P5B8C7D4"
    printf "%b" "\\e]P6BED0E1"
    printf "%b" "\\e]P7dee3e9"
    printf "%b" "\\e]P89b9ea3"
    printf "%b" "\\e]P9959CA0"
    printf "%b" "\\e]PA95A8B4"
    printf "%b" "\\e]PBC0A9BD"
    printf "%b" "\\e]PCA8B9C6"
    printf "%b" "\\e]PDB8C7D4"
    printf "%b" "\\e]PEBED0E1"
    printf "%b" "\\e]PFdee3e9"

    # Fix artifacting.
    clear
fi
