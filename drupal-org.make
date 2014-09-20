core = 7.x
api = 2

; Administration
projects[] = admin_menu
projects[] = backup_migrate
projects[] = coffee
projects[] = module_filter

; Content
projects[] = ds
projects[] = ctools
projects[] = views

; Content authoring
projects[] = pathologic

; Development
projects[] = devel
projects[] = search_krumo

; SEO
projects[] = globalredirect
projects[] = metatag
projects[] = pathauto
projects[] = token

; Other
projects[] = transliteration
projects[] = final_polish

; Theme
projects[] = responsive_bartik
projects[] = shiny

; Fancy kickstart core
projects[inline_entity_form][type] = module
projects[inline_entity_form][download][type] = git
projects[inline_entity_form][download][url] = http://git.drupal.org/project/inline_entity_form.git
projects[inline_entity_form][download][branch] = "7.x-1.x"
projects[inline_entity_form][patch][] = "https://www.drupal.org/files/issues/inline_entity_form-add_callback_field_type-2324901-2.patch"

projects[inline_entity_form_preview][type] = module
projects[inline_entity_form_preview][download][type] = git
projects[inline_entity_form_preview][download][url] = http://git.drupal.org/project/inline_entity_form_preview.git
projects[inline_entity_form_preview][download][branch] = "7.x-1.x"