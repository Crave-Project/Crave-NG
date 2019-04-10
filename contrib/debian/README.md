
Debian
====================
This directory contains files used to package craved/crave-qt
for Debian-based Linux systems. If you compile craved/crave-qt yourself, there are some useful files here.

## crave: URI support ##


crave-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install crave-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your craveqt binary to `/usr/bin`
and the `../../share/pixmaps/crave128.png` to `/usr/share/pixmaps`

crave-qt.protocol (KDE)

