#ifndef XFCONF_WRAPPER_H
#define XFCONF_WRAPPER_H

#include <glib.h>

G_BEGIN_DECLS

// from xfconf-channel.h
typedef struct _XfconfChannel XfconfChannel;
XfconfChannel *xfconf_channel_get(const gchar *channel_name);

// from xfconf-binding.h
gulong xfconf_g_property_bind(XfconfChannel *channel,
                              const gchar *xfconf_property,
                              GType xfconf_property_type,
                              gpointer object,
                              const gchar *object_property);

// from xfconf.h

gboolean xfconf_init(GError **error);
void xfconf_shutdown(void);

G_END_DECLS

// dummy implementations

gboolean xfconf_init(GError **error)
{
	g_warning("TODO: xfconf_init()");
	return FALSE;
}

void xfconf_shutdown(void)
{
	g_warning("TODO: xfconf_shutdown()");
}

XfconfChannel *xfconf_channel_get(const gchar *channel_name)
{
	g_warning("TODO: xfconf_channel_get(const gchar *channel_name), channel_name: \"%s\"", channel_name);
	return NULL;
}

gulong xfconf_g_property_bind(XfconfChannel *channel,
                              const gchar *xfconf_property,
                              GType xfconf_property_type,
                              gpointer object,
                              const gchar *object_property)
{
	g_warning("TODO: xfconf_g_property_bind(...)");
	return 0;
}

#endif

