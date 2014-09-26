core = 7.x
api = 2

defaults[projects][subdir] = contrib

; Core project
projects[drupal][version] = 7.31

; Administration
projects[] = admin_menu
projects[] = admin_views
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

; Dependencies
projects[] = auto_entitylabel
projects[ctools_field][type] = module
projects[ctools_field][download][type] = git
projects[ctools_field][download][branch] = 7.x-1.x
projects[] = eck
projects[] = entity
projects[] = entityreference
projects[] = features
projects[field_split][type] = module
projects[field_split][download][type] = git
projects[field_split][download][branch] = 7.x-1.x
projects[inline_entity_form][version] = 1.x-dev
projects[inline_entity_form][patch][] = https://www.drupal.org/files/issues/inline_entity_form-add_callback_field_type-2324901-2.patch
projects[inline_entity_form_preview][type] = module
projects[inline_entity_form_preview][download][type] = git
projects[inline_entity_form_preview][download][branch] = 7.x-1.x
projects[] = strongarm
projects[view_mode_selector][type] = module
projects[view_mode_selector][download][type] = git
projects[view_mode_selector][download][branch] = 7.x-1.x
projects[] = views_bulk_operations
