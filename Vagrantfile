# -*- mode: ruby -*-
# vi: set ft=ruby :


Vagrant.configure("2") do |config|

  config.vm.box = "hashicorp/bionic64"
  config.vm.network "private_network", ip: "192.168.33.11"
  config.vm.hostname = "C.ced69.net"
  config.vm.synced_folder "data/", "/home/vagrant/Exo"

  config.vm.provider :virtualbox do |vb|
    vb.customize ["modifyvm", :id, "--memory", "4096"]
    vb.customize ["modifyvm", :id, "--cpus", "2"]
  end


 config.vm.provision "file", source: "~/.ssh/id_rsa.pub", destination: "~/.ssh/me.pub"
 config.vm.provision "shell", inline: <<-SHELL
 cat /home/vagrant/.ssh/me.pub >> /home/vagrant/.ssh/authorized_keys
 SHELL

   config.vm.provision "shell", path: "bootstrap.sh"
   config.vm.post_up_message = "La vm est prete"
end 
