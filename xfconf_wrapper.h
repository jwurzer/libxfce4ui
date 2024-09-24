#ifndef XFCONF_WRAPPER_H
#define XFCONF_WRAPPER_H

#include <glib.h>

G_BEGIN_DECLS

// from xfconf-channel.h
#define XFCONF_TYPE_CHANNEL             (xfconf_channel_get_type())
#define XFCONF_CHANNEL(obj)             (G_TYPE_CHECK_INSTANCE_CAST((obj), XFCONF_TYPE_CHANNEL, XfconfChannel))
#define XFCONF_IS_CHANNEL(obj)          (G_TYPE_CHECK_INSTANCE_TYPE((obj), XFCONF_TYPE_CHANNEL))

typedef struct _XfconfChannel XfconfChannel;
static GType xfconf_channel_get_type(void) G_GNUC_CONST;
static XfconfChannel *xfconf_channel_get(const gchar *channel_name);
static XfconfChannel *xfconf_channel_new(const gchar *channel_name) G_GNUC_WARN_UNUSED_RESULT;
static gboolean xfconf_channel_get_bool(XfconfChannel *channel,
                                 const gchar *property,
                                 gboolean default_value);
static gchar **xfconf_channel_get_string_list(XfconfChannel *channel,
                                       const gchar *property) G_GNUC_WARN_UNUSED_RESULT;
static gboolean xfconf_channel_set_string_list(XfconfChannel *channel,
                                        const gchar *property,
                                        const gchar * const *values);
static gchar *xfconf_channel_get_string(XfconfChannel *channel,
                                 const gchar *property,
                                 const gchar *default_value) G_GNUC_WARN_UNUSED_RESULT;
static gboolean xfconf_channel_set_string(XfconfChannel *channel,
                                   const gchar *property,
                                   const gchar *value);
static gboolean xfconf_channel_has_property(XfconfChannel *channel,
                                     const gchar *property);
static void xfconf_channel_reset_property(XfconfChannel *channel,
                                   const gchar *property_base,
                                   gboolean recursive);
static GHashTable *xfconf_channel_get_properties(XfconfChannel *channel,
                                          const gchar *property_base) G_GNUC_WARN_UNUSED_RESULT;
static gboolean xfconf_channel_set_property(XfconfChannel *channel,
                                     const gchar *property,
                                     const GValue *value);
static gboolean xfconf_channel_set_bool(XfconfChannel *channel,
                                 const gchar *property,
                                 gboolean value);

// from xfconf-binding.h
static gulong xfconf_g_property_bind(XfconfChannel *channel,
                              const gchar *xfconf_property,
                              GType xfconf_property_type,
                              gpointer object,
                              const gchar *object_property);

// from xfconf.h

static gboolean xfconf_init(GError **error);
static void xfconf_shutdown(void);

G_END_DECLS

// dummy implementations

static gboolean xfconf_init(GError **error)
{
	g_warning("TODO: xfconf_init()");
	return FALSE;
}

static void xfconf_shutdown(void)
{
	g_warning("TODO: xfconf_shutdown()");
}

static GType xfconf_channel_get_type(void)
{
	g_warning("TODO: xfconf_channel_get_type(void)");
	return 0; // TODO
}

static XfconfChannel *xfconf_channel_get(const gchar *channel_name)
{
	g_warning("TODO: xfconf_channel_get(const gchar *channel_name), channel_name: \"%s\"", channel_name);
	return NULL;
}

static XfconfChannel *xfconf_channel_new(const gchar *channel_name)
{
	g_warning("TODO: xfconf_channel_new(const gchar *channel_name), channel_name: \"%s\"", channel_name);
	return NULL;
}

static gboolean xfconf_channel_get_bool(XfconfChannel *channel,
                                 const gchar *property,
                                 gboolean default_value)
{
	g_warning("TODO: xfconf_channel_get_bool()");
	return FALSE;
}

static gchar **xfconf_channel_get_string_list(XfconfChannel *channel,
                                       const gchar *property)
{
	g_warning("TODO: xfconf_channel_get_string_list()");
	return NULL;
}

static gboolean xfconf_channel_set_string_list(XfconfChannel *channel,
                                        const gchar *property,
                                        const gchar * const *values)
{
	g_warning("TODO: xfconf_channel_set_string_list()");
	return FALSE;
}

static gchar *xfconf_channel_get_string(XfconfChannel *channel,
                                 const gchar *property,
                                 const gchar *default_value)
{
	g_warning("TODO: xfconf_channel_get_string()");
	return NULL;
}

static gboolean xfconf_channel_set_string(XfconfChannel *channel,
                                   const gchar *property,
                                   const gchar *value)
{
	g_warning("TODO: xfconf_channel_set_string()");
	return FALSE;
}

static gboolean xfconf_channel_has_property(XfconfChannel *channel,
                                     const gchar *property)
{
	g_warning("TODO: xfconf_channel_has_property()");
	return FALSE;
}

static void xfconf_channel_reset_property(XfconfChannel *channel,
                                   const gchar *property_base,
                                   gboolean recursive)
{
	g_warning("TODO: xfconf_channel_reset_property()");
}

static GHashTable *xfconf_channel_get_properties(XfconfChannel *channel,
                                          const gchar *property_base)
{
	g_warning("TODO: xfconf_channel_get_properties()");
	return NULL;
}

static gboolean xfconf_channel_set_property(XfconfChannel *channel,
                                     const gchar *property,
                                     const GValue *value)
{
	g_warning("TODO: xfconf_channel_set_property()");
	return FALSE;
}

static gboolean xfconf_channel_set_bool(XfconfChannel *channel,
                                 const gchar *property,
                                 gboolean value)
{
	g_warning("TODO: xfconf_channel_set_bool()");
	return FALSE;
}

static gulong xfconf_g_property_bind(XfconfChannel *channel,
                              const gchar *xfconf_property,
                              GType xfconf_property_type,
                              gpointer object,
                              const gchar *object_property)
{
	g_warning("TODO: xfconf_g_property_bind(...)");
	return 0;
}

#endif

