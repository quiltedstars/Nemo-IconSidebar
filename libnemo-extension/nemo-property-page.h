/*
 *  nemo-property-page.h - Property pages exported by 
 *                             NemoPropertyProvider objects.
 *
 *  Copyright (C) 2003 Novell, Inc.
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Library General Public
 *  License as published by the Free Software Foundation; either
 *  version 2 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Library General Public License for more details.
 *
 *  You should have received a copy of the GNU Library General Public
 *  License along with this library; if not, write to the Free
 *  Software Foundation, Inc., 51 Franklin Street, Suite 500, MA 02110-1335, USA.
 * 
 *  Author:  Dave Camp <dave@ximian.com>
 *
 */

#ifndef NEMO_PROPERTY_PAGE_H
#define NEMO_PROPERTY_PAGE_H

#include <glib-object.h>
#include <gtk/gtk.h>
#include "nemo-extension-types.h"

G_BEGIN_DECLS

#define NEMO_TYPE_PROPERTY_PAGE            nemo_property_page_get_type()

G_DECLARE_FINAL_TYPE (NemoPropertyPage, nemo_property_page, NEMO, PROPERTY_PAGE, GObject)

NemoPropertyPage *nemo_property_page_new       (const char           *name,
                                                GtkWidget            *label,
                                                GtkWidget            *page);

/* NemoPropertyPage has the following properties:
 *   name (string)        - the identifier for the property page
 *   label (widget)       - the user-visible label of the property page
 *   page (widget)        - the property page to display
 */

G_END_DECLS

#endif
