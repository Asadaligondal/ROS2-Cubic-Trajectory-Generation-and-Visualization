// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ar_interface:msg/CubicTrajParams.idl
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
#include "ar_interface/msg/detail/cubic_traj_params__struct.h"
#include "ar_interface/msg/detail/cubic_traj_params__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ar_interface__msg__cubic_traj_params__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("ar_interface.msg._cubic_traj_params.CubicTrajParams", full_classname_dest, 51) == 0);
  }
  ar_interface__msg__CubicTrajParams * ros_message = _ros_message;
  {  // p0
    PyObject * field = PyObject_GetAttrString(_pymsg, "p0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->p0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pf
    PyObject * field = PyObject_GetAttrString(_pymsg, "pf");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pf = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // v0
    PyObject * field = PyObject_GetAttrString(_pymsg, "v0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->v0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vf
    PyObject * field = PyObject_GetAttrString(_pymsg, "vf");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vf = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // t0
    PyObject * field = PyObject_GetAttrString(_pymsg, "t0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->t0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tf
    PyObject * field = PyObject_GetAttrString(_pymsg, "tf");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tf = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ar_interface__msg__cubic_traj_params__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CubicTrajParams */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ar_interface.msg._cubic_traj_params");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CubicTrajParams");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ar_interface__msg__CubicTrajParams * ros_message = (ar_interface__msg__CubicTrajParams *)raw_ros_message;
  {  // p0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->p0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pf
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pf);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // v0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->v0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "v0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vf
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vf);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // t0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->t0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "t0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tf
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tf);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
