// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ar_interface:msg/CubicTrajCoeffs.idl
// generated code does not contain a copyright notice
#include "ar_interface/msg/detail/cubic_traj_coeffs__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ar_interface__msg__CubicTrajCoeffs__init(ar_interface__msg__CubicTrajCoeffs * msg)
{
  if (!msg) {
    return false;
  }
  // a0
  // a1
  // a2
  // a3
  // t0
  // tf
  return true;
}

void
ar_interface__msg__CubicTrajCoeffs__fini(ar_interface__msg__CubicTrajCoeffs * msg)
{
  if (!msg) {
    return;
  }
  // a0
  // a1
  // a2
  // a3
  // t0
  // tf
}

bool
ar_interface__msg__CubicTrajCoeffs__are_equal(const ar_interface__msg__CubicTrajCoeffs * lhs, const ar_interface__msg__CubicTrajCoeffs * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // a0
  if (lhs->a0 != rhs->a0) {
    return false;
  }
  // a1
  if (lhs->a1 != rhs->a1) {
    return false;
  }
  // a2
  if (lhs->a2 != rhs->a2) {
    return false;
  }
  // a3
  if (lhs->a3 != rhs->a3) {
    return false;
  }
  // t0
  if (lhs->t0 != rhs->t0) {
    return false;
  }
  // tf
  if (lhs->tf != rhs->tf) {
    return false;
  }
  return true;
}

bool
ar_interface__msg__CubicTrajCoeffs__copy(
  const ar_interface__msg__CubicTrajCoeffs * input,
  ar_interface__msg__CubicTrajCoeffs * output)
{
  if (!input || !output) {
    return false;
  }
  // a0
  output->a0 = input->a0;
  // a1
  output->a1 = input->a1;
  // a2
  output->a2 = input->a2;
  // a3
  output->a3 = input->a3;
  // t0
  output->t0 = input->t0;
  // tf
  output->tf = input->tf;
  return true;
}

ar_interface__msg__CubicTrajCoeffs *
ar_interface__msg__CubicTrajCoeffs__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ar_interface__msg__CubicTrajCoeffs * msg = (ar_interface__msg__CubicTrajCoeffs *)allocator.allocate(sizeof(ar_interface__msg__CubicTrajCoeffs), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ar_interface__msg__CubicTrajCoeffs));
  bool success = ar_interface__msg__CubicTrajCoeffs__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ar_interface__msg__CubicTrajCoeffs__destroy(ar_interface__msg__CubicTrajCoeffs * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ar_interface__msg__CubicTrajCoeffs__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ar_interface__msg__CubicTrajCoeffs__Sequence__init(ar_interface__msg__CubicTrajCoeffs__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ar_interface__msg__CubicTrajCoeffs * data = NULL;

  if (size) {
    data = (ar_interface__msg__CubicTrajCoeffs *)allocator.zero_allocate(size, sizeof(ar_interface__msg__CubicTrajCoeffs), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ar_interface__msg__CubicTrajCoeffs__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ar_interface__msg__CubicTrajCoeffs__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ar_interface__msg__CubicTrajCoeffs__Sequence__fini(ar_interface__msg__CubicTrajCoeffs__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ar_interface__msg__CubicTrajCoeffs__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ar_interface__msg__CubicTrajCoeffs__Sequence *
ar_interface__msg__CubicTrajCoeffs__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ar_interface__msg__CubicTrajCoeffs__Sequence * array = (ar_interface__msg__CubicTrajCoeffs__Sequence *)allocator.allocate(sizeof(ar_interface__msg__CubicTrajCoeffs__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ar_interface__msg__CubicTrajCoeffs__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ar_interface__msg__CubicTrajCoeffs__Sequence__destroy(ar_interface__msg__CubicTrajCoeffs__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ar_interface__msg__CubicTrajCoeffs__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ar_interface__msg__CubicTrajCoeffs__Sequence__are_equal(const ar_interface__msg__CubicTrajCoeffs__Sequence * lhs, const ar_interface__msg__CubicTrajCoeffs__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ar_interface__msg__CubicTrajCoeffs__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ar_interface__msg__CubicTrajCoeffs__Sequence__copy(
  const ar_interface__msg__CubicTrajCoeffs__Sequence * input,
  ar_interface__msg__CubicTrajCoeffs__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ar_interface__msg__CubicTrajCoeffs);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ar_interface__msg__CubicTrajCoeffs * data =
      (ar_interface__msg__CubicTrajCoeffs *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ar_interface__msg__CubicTrajCoeffs__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ar_interface__msg__CubicTrajCoeffs__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ar_interface__msg__CubicTrajCoeffs__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
