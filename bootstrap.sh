#!/usr/bin/env bash

pwd

apt-get update

sudo apt-get -y install build-essential

sudo apt-get install -y manpages-dev

gcc --version

echo "Fin de configuration"