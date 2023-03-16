/*
 *  nemo-name-and-desc-provider.h - Interface for Nemo extensions that 
 *  returns the extension's proper name and description for the plugin
 *  manager only - it is not necessary for extension functionality.
 *
 */

#ifndef NEMO_NAME_AND_DESC_PROVIDER_H
#define NEMO_NAME_AND_DESC_PROVIDER_H

#include <glib-object.h>
#include "nemo-extension-types.h"

G_BEGIN_DECLS

#define NEMO_TYPE_NAME_AND_DESC_PROVIDER (nemo_name_and_desc_provider_get_type ())

G_DECLARE_INTERFACE (NemoNameAndDescProvider, nemo_name_and_desc_provider,
                     NEMO, NAME_AND_DESC_PROVIDER,
                     GObject)

typedef NemoNameAndDescProviderInterface NemoNameAndDescProviderIface;

struct _NemoNameAndDescProviderInterface {
    GTypeInterface g_iface;

    GList *(*get_name_and_desc) (NemoNameAndDescProvider *provider);
};

/* Interface Functions */
GList *nemo_name_and_desc_provider_get_name_and_desc (NemoNameAndDescProvider *provider);

G_END_DECLS

#endif
