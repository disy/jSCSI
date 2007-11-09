/* Generated by dbus-binding-tool; do not edit! */

#include <glib/gtypes.h>
#include <glib/gerror.h>
#include <dbus/dbus-glib.h>

G_BEGIN_DECLS

#ifndef DBUS_GLIB_CLIENT_WRAPPERS_org_jscsi_sg_SGDataTransfer
#define DBUS_GLIB_CLIENT_WRAPPERS_org_jscsi_sg_SGDataTransfer

static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
org_jscsi_sg_SGDataTransfer_service_response (DBusGProxy *proxy, const char * IN_initiatorPort, const char * IN_targetPort, const gint64 IN_lun, const GArray* IN_senseData, const gint IN_status, const gint IN_serviceResponse, GError **error)

{
  return dbus_g_proxy_call (proxy, "serviceResponse", error, G_TYPE_STRING, IN_initiatorPort, G_TYPE_STRING, IN_targetPort, G_TYPE_INT64, IN_lun, dbus_g_type_get_collection ("GArray", G_TYPE_UCHAR), IN_senseData, G_TYPE_INT, IN_status, G_TYPE_INT, IN_serviceResponse, G_TYPE_INVALID, G_TYPE_INVALID);
}

typedef void (*org_jscsi_sg_SGDataTransfer_service_response_reply) (DBusGProxy *proxy, GError *error, gpointer userdata);

static void
org_jscsi_sg_SGDataTransfer_service_response_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INVALID);
  (*(org_jscsi_sg_SGDataTransfer_service_response_reply)data->cb) (proxy, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
org_jscsi_sg_SGDataTransfer_service_response_async (DBusGProxy *proxy, const char * IN_initiatorPort, const char * IN_targetPort, const gint64 IN_lun, const GArray* IN_senseData, const gint IN_status, const gint IN_serviceResponse, org_jscsi_sg_SGDataTransfer_service_response_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_new (DBusGAsyncData, 1);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "serviceResponse", org_jscsi_sg_SGDataTransfer_service_response_async_callback, stuff, g_free, G_TYPE_STRING, IN_initiatorPort, G_TYPE_STRING, IN_targetPort, G_TYPE_INT64, IN_lun, dbus_g_type_get_collection ("GArray", G_TYPE_UCHAR), IN_senseData, G_TYPE_INT, IN_status, G_TYPE_INT, IN_serviceResponse, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
org_jscsi_sg_SGDataTransfer_send_data_in (DBusGProxy *proxy, const char * IN_initiatorPort, const char * IN_targetPort, const gint64 IN_lun, const GArray* IN_input, gboolean* OUT_arg4, GError **error)

{
  return dbus_g_proxy_call (proxy, "sendDataIn", error, G_TYPE_STRING, IN_initiatorPort, G_TYPE_STRING, IN_targetPort, G_TYPE_INT64, IN_lun, dbus_g_type_get_collection ("GArray", G_TYPE_UCHAR), IN_input, G_TYPE_INVALID, G_TYPE_BOOLEAN, OUT_arg4, G_TYPE_INVALID);
}

typedef void (*org_jscsi_sg_SGDataTransfer_send_data_in_reply) (DBusGProxy *proxy, gboolean OUT_arg4, GError *error, gpointer userdata);

static void
org_jscsi_sg_SGDataTransfer_send_data_in_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  gboolean OUT_arg4;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_BOOLEAN, &OUT_arg4, G_TYPE_INVALID);
  (*(org_jscsi_sg_SGDataTransfer_send_data_in_reply)data->cb) (proxy, OUT_arg4, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
org_jscsi_sg_SGDataTransfer_send_data_in_async (DBusGProxy *proxy, const char * IN_initiatorPort, const char * IN_targetPort, const gint64 IN_lun, const GArray* IN_input, org_jscsi_sg_SGDataTransfer_send_data_in_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_new (DBusGAsyncData, 1);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "sendDataIn", org_jscsi_sg_SGDataTransfer_send_data_in_async_callback, stuff, g_free, G_TYPE_STRING, IN_initiatorPort, G_TYPE_STRING, IN_targetPort, G_TYPE_INT64, IN_lun, dbus_g_type_get_collection ("GArray", G_TYPE_UCHAR), IN_input, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
org_jscsi_sg_SGDataTransfer_receive_data_out (DBusGProxy *proxy, const char * IN_initiatorPort, const char * IN_targetPort, const gint64 IN_lun, GArray** OUT_arg3, GError **error)

{
  return dbus_g_proxy_call (proxy, "receiveDataOut", error, G_TYPE_STRING, IN_initiatorPort, G_TYPE_STRING, IN_targetPort, G_TYPE_INT64, IN_lun, G_TYPE_INVALID, dbus_g_type_get_collection ("GArray", G_TYPE_UCHAR), OUT_arg3, G_TYPE_INVALID);
}

typedef void (*org_jscsi_sg_SGDataTransfer_receive_data_out_reply) (DBusGProxy *proxy, GArray *OUT_arg3, GError *error, gpointer userdata);

static void
org_jscsi_sg_SGDataTransfer_receive_data_out_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  GArray* OUT_arg3;
  dbus_g_proxy_end_call (proxy, call, &error, dbus_g_type_get_collection ("GArray", G_TYPE_UCHAR), &OUT_arg3, G_TYPE_INVALID);
  (*(org_jscsi_sg_SGDataTransfer_receive_data_out_reply)data->cb) (proxy, OUT_arg3, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
org_jscsi_sg_SGDataTransfer_receive_data_out_async (DBusGProxy *proxy, const char * IN_initiatorPort, const char * IN_targetPort, const gint64 IN_lun, org_jscsi_sg_SGDataTransfer_receive_data_out_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_new (DBusGAsyncData, 1);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "receiveDataOut", org_jscsi_sg_SGDataTransfer_receive_data_out_async_callback, stuff, g_free, G_TYPE_STRING, IN_initiatorPort, G_TYPE_STRING, IN_targetPort, G_TYPE_INT64, IN_lun, G_TYPE_INVALID);
}
#endif /* defined DBUS_GLIB_CLIENT_WRAPPERS_org_jscsi_sg_SGDataTransfer */

G_END_DECLS
