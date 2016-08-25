;;; gitconfig-colors --- Add color support for gitconfig to rainbow-mode

;; Author: Noah Peart <noah.v.peart@gmail.com>
;; URL: https://github.com/nverno/gitconfig-colors
;; Package-Requires: 
;; Copyright (C) 2016, Noah Peart, all rights reserved.
;; Created: 24 August 2016

;; This file is not part of GNU Emacs.
;;
;; This program is free software; you can redistribute it and/or
;; modify it under the terms of the GNU General Public License as
;; published by the Free Software Foundation; either version 3, or
;; (at your option) any later version.
;;
;; This program is distributed in the hope that it will be useful,
;; but WITHOUT ANY WARRANTY; without even the implied warranty of
;; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
;; General Public License for more details.
;;
;; You should have received a copy of the GNU General Public License
;; along with this program; see the file COPYING.  If not, write to
;; the Free Software Foundation, Inc., 51 Franklin Street, Fifth
;; Floor, Boston, MA 02110-1301, USA.

;;; Commentary:

;;; Description:

;;  Colorize gitconfig with buffers.

;;; Code:

(defgroup gitconfig-colors nil
  "Colorize gitconfig keywords."
  :group 'convenience
  :prefix "gitconfig-colors-")

;; colors: normal, black, red, green, yellow, blue, magenta, cyan, white
;; attr: bold, dim, ul, blink, reverse

(defvar gitconfig-colors
  `((,(regexp-opt '("black" "red" "green" "yellow" "blue" "magenta" "cyan" "white"))
     (0 ))))


(provide 'gitconfig-colors)

;;; gitconfig-colors.el ends here
