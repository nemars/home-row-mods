# Home Row Mods

This repo contains information about setting up home row mods for your system.

It is meant as a guide to help go along with the video by [Dreams of Code](https://youtube.com/@dreamsofcode)

This repo is organized by the different approaches you can take to setting up home row mods.

## Changes from Video

Some linux users will encounter issues by just using the `tap-hold` behavior by itself.

This has been resolved with #7 which is the [recommended workaround from the kanata documentation](https://github.com/jtroo/kanata/blob/main/docs/config.adoc#tap-hold).

## General information

Whilst Home Row Mods are a simple concept, there's a lot of variables and configuration that you can
apply to them.

For an in depth guide on home row mods, I recommend reading the following resource. 

[https://precondition.github.io/home-row-mods](https://precondition.github.io/home-row-mods)

In my case, I only have a simple configuration, which works well for my purposes, but might not for you.

## QMK

For an example on how to set up Home Row Mods with QMK, I recommend checking out the [QMK](./qmk) directory

For a real world example, you can check out my [Adm42 config]()

## ZMK

For an example on how to set up Home Row Mods with ZMK, I recommend checking out the [ZMK](./qmk) directory

For a real world example, you can check out my [Glove80 config](https://github.com/elliottminns/glove80-zmk-config).

## Oryx

If you have a keyboard from ZSA, then you can either use QMK, or their own proprietary configurator, Oyrx (as well as Keymapp)

In my case, I have a configuration for both the ZSA Moonlander and the ZSA Voyager, which you can find below

### Voyager

You can find my Voyager configuration [here](https://configure.zsa.io/voyager/layouts/Q5rEz/KE6Vl/0). 

### Moonlander

You can find my Moonlander configuration [here](https://configure.zsa.io/moonlander/layouts/E56O6/yJ5nB/0).

## Kanata

For my laptops, I make use of Kanata, which is a software keyboard remapper. This works well for keyboards where the firmware
can't be customized.

### MacOS

You can find the kanata configuration I use for macOS inside the [macOS directory](./kanata/macos)

This includes a service file for launchctl so you can easily use it yourself.

### Linux (systemd)

You can find an example kanata configuration for linux to use with systemd in the [linux directory](./kanata/linux)

I don't use this configuration in my laptops due to using nixOS.

### NixOS

You can find an example kanata configuration for NixOS in my [dotfiles repo](https://github.com/elliottminns/dotfiles/blob/a204380f1b256ad726980fe8694106ef486594e6/nix/configuration.nix#L310-L346).
