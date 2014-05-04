; Panopoly DI2D WYSIWYG Makefile

api = 2
core = 7.x

; The WYSIWYG Module Family

projects[wysiwyg][version] = 2.x-dev
projects[wysiwyg][subdir] = contrib
projects[wysiwyg][download][type] = git
projects[wysiwyg][download][revision] = e4a4d9d
projects[wysiwyg][download][branch] = 7.x-2.x
projects[wysiwyg][patch][1489096] = http://drupal.org/files/wysiwyg-table-format-1489096-7.patch
projects[wysiwyg][patch][1786732] = http://drupal.org/files/wysiwyg-arbitrary_image_paths_markitup-1786732-3.patch
projects[wysiwyg][patch][1338956] = http://drupal.org/files/wysiwyg-html5-required-1338956-11.patch
projects[wysiwyg][patch][1757684] = http://drupal.org/files/wysiwyg-ajax-error-1757684-13.patch

projects[wysiwyg_filter][version] = 1.6-rc2
projects[wysiwyg_filter][subdir] = contrib

; The WYSIWYG Helpers

projects[linkit][version] = 2.6
projects[linkit][subdir] = contrib

projects[image_resize_filter][version] = 1.14
projects[image_resize_filter][subdir] = contrib

projects[caption_filter][version] = 1.x-dev
projects[caption_filter][subdir] = contrib
projects[caption_filter][download][type] = git
projects[caption_filter][download][revision] = b8097ee
projects[caption_filter][download][branch] = 7.x-1.x

; Include our Editors

libraries[ckeditor][download][type] = get
libraries[ckeditor][download][url] = http://download.cksource.com/CKEditor%20for%20Drupal/edit/ckeditor_4.3.2_edit.zip

libraries[markitup][download][type] = get
libraries[markitup][download][url] = https://github.com/markitup/1.x/tarball/master
libraries[markitup][patch][1715642] = http://drupal.org/files/1715642-adding-html-set-markitup-editor.patch
