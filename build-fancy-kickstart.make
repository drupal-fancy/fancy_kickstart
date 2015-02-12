core = 8.x
api = 2

includes[] = https://raw.githubusercontent.com/drupal-fancy/fancy_kickstart/8.x-1.x/drupal-org-core.make

; Installation profile
projects[fancy_kickstart][type] = profile
projects[fancy_kickstart][download][type] = git
projects[fancy_kickstart][download][url] = http://git.drupal.org/project/fancy_kickstart.git
projects[fancy_kickstart][download][branch] = 8.x-1.x
