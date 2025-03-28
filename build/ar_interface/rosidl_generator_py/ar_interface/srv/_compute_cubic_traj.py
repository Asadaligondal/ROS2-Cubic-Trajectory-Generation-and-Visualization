# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ar_interface:srv/ComputeCubicTraj.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ComputeCubicTraj_Request(type):
    """Metaclass of message 'ComputeCubicTraj_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ar_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ar_interface.srv.ComputeCubicTraj_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__compute_cubic_traj__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__compute_cubic_traj__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__compute_cubic_traj__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__compute_cubic_traj__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__compute_cubic_traj__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ComputeCubicTraj_Request(metaclass=Metaclass_ComputeCubicTraj_Request):
    """Message class 'ComputeCubicTraj_Request'."""

    __slots__ = [
        '_p0',
        '_pf',
        '_v0',
        '_vf',
        '_t0',
        '_tf',
    ]

    _fields_and_field_types = {
        'p0': 'double',
        'pf': 'double',
        'v0': 'double',
        'vf': 'double',
        't0': 'double',
        'tf': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.p0 = kwargs.get('p0', float())
        self.pf = kwargs.get('pf', float())
        self.v0 = kwargs.get('v0', float())
        self.vf = kwargs.get('vf', float())
        self.t0 = kwargs.get('t0', float())
        self.tf = kwargs.get('tf', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.p0 != other.p0:
            return False
        if self.pf != other.pf:
            return False
        if self.v0 != other.v0:
            return False
        if self.vf != other.vf:
            return False
        if self.t0 != other.t0:
            return False
        if self.tf != other.tf:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def p0(self):
        """Message field 'p0'."""
        return self._p0

    @p0.setter
    def p0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p0' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'p0' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._p0 = value

    @builtins.property
    def pf(self):
        """Message field 'pf'."""
        return self._pf

    @pf.setter
    def pf(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pf' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pf' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pf = value

    @builtins.property
    def v0(self):
        """Message field 'v0'."""
        return self._v0

    @v0.setter
    def v0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'v0' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'v0' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._v0 = value

    @builtins.property
    def vf(self):
        """Message field 'vf'."""
        return self._vf

    @vf.setter
    def vf(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vf' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vf' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vf = value

    @builtins.property
    def t0(self):
        """Message field 't0'."""
        return self._t0

    @t0.setter
    def t0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't0' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 't0' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._t0 = value

    @builtins.property
    def tf(self):
        """Message field 'tf'."""
        return self._tf

    @tf.setter
    def tf(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tf' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'tf' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._tf = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_ComputeCubicTraj_Response(type):
    """Metaclass of message 'ComputeCubicTraj_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ar_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ar_interface.srv.ComputeCubicTraj_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__compute_cubic_traj__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__compute_cubic_traj__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__compute_cubic_traj__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__compute_cubic_traj__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__compute_cubic_traj__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ComputeCubicTraj_Response(metaclass=Metaclass_ComputeCubicTraj_Response):
    """Message class 'ComputeCubicTraj_Response'."""

    __slots__ = [
        '_a0',
        '_a1',
        '_a2',
        '_a3',
    ]

    _fields_and_field_types = {
        'a0': 'double',
        'a1': 'double',
        'a2': 'double',
        'a3': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.a0 = kwargs.get('a0', float())
        self.a1 = kwargs.get('a1', float())
        self.a2 = kwargs.get('a2', float())
        self.a3 = kwargs.get('a3', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.a0 != other.a0:
            return False
        if self.a1 != other.a1:
            return False
        if self.a2 != other.a2:
            return False
        if self.a3 != other.a3:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def a0(self):
        """Message field 'a0'."""
        return self._a0

    @a0.setter
    def a0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'a0' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'a0' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._a0 = value

    @builtins.property
    def a1(self):
        """Message field 'a1'."""
        return self._a1

    @a1.setter
    def a1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'a1' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'a1' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._a1 = value

    @builtins.property
    def a2(self):
        """Message field 'a2'."""
        return self._a2

    @a2.setter
    def a2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'a2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'a2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._a2 = value

    @builtins.property
    def a3(self):
        """Message field 'a3'."""
        return self._a3

    @a3.setter
    def a3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'a3' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'a3' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._a3 = value


class Metaclass_ComputeCubicTraj(type):
    """Metaclass of service 'ComputeCubicTraj'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ar_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ar_interface.srv.ComputeCubicTraj')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__compute_cubic_traj

            from ar_interface.srv import _compute_cubic_traj
            if _compute_cubic_traj.Metaclass_ComputeCubicTraj_Request._TYPE_SUPPORT is None:
                _compute_cubic_traj.Metaclass_ComputeCubicTraj_Request.__import_type_support__()
            if _compute_cubic_traj.Metaclass_ComputeCubicTraj_Response._TYPE_SUPPORT is None:
                _compute_cubic_traj.Metaclass_ComputeCubicTraj_Response.__import_type_support__()


class ComputeCubicTraj(metaclass=Metaclass_ComputeCubicTraj):
    from ar_interface.srv._compute_cubic_traj import ComputeCubicTraj_Request as Request
    from ar_interface.srv._compute_cubic_traj import ComputeCubicTraj_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
