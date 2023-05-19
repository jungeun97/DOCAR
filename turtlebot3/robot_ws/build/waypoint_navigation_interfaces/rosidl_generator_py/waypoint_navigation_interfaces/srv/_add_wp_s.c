// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from waypoint_navigation_interfaces:srv/AddWp.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "waypoint_navigation_interfaces/srv/detail/add_wp__struct.h"
#include "waypoint_navigation_interfaces/srv/detail/add_wp__functions.h"

bool waypoint_navigation_interfaces__msg__wp__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * waypoint_navigation_interfaces__msg__wp__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool waypoint_navigation_interfaces__srv__add_wp__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[57];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("waypoint_navigation_interfaces.srv._add_wp.AddWp_Request", full_classname_dest, 56) == 0);
  }
  waypoint_navigation_interfaces__srv__AddWp_Request * ros_message = _ros_message;
  {  // wp
    PyObject * field = PyObject_GetAttrString(_pymsg, "wp");
    if (!field) {
      return false;
    }
    if (!waypoint_navigation_interfaces__msg__wp__convert_from_py(field, &ros_message->wp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * waypoint_navigation_interfaces__srv__add_wp__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AddWp_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("waypoint_navigation_interfaces.srv._add_wp");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AddWp_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  waypoint_navigation_interfaces__srv__AddWp_Request * ros_message = (waypoint_navigation_interfaces__srv__AddWp_Request *)raw_ros_message;
  {  // wp
    PyObject * field = NULL;
    field = waypoint_navigation_interfaces__msg__wp__convert_to_py(&ros_message->wp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "wp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "waypoint_navigation_interfaces/srv/detail/add_wp__struct.h"
// already included above
// #include "waypoint_navigation_interfaces/srv/detail/add_wp__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool waypoint_navigation_interfaces__srv__add_wp__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("waypoint_navigation_interfaces.srv._add_wp.AddWp_Response", full_classname_dest, 57) == 0);
  }
  waypoint_navigation_interfaces__srv__AddWp_Response * ros_message = _ros_message;
  {  // overwrite
    PyObject * field = PyObject_GetAttrString(_pymsg, "overwrite");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->overwrite = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * waypoint_navigation_interfaces__srv__add_wp__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AddWp_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("waypoint_navigation_interfaces.srv._add_wp");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AddWp_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  waypoint_navigation_interfaces__srv__AddWp_Response * ros_message = (waypoint_navigation_interfaces__srv__AddWp_Response *)raw_ros_message;
  {  // overwrite
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->overwrite ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "overwrite", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
