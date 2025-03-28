// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ar_interface:msg/CubicTrajParams.idl
// generated code does not contain a copyright notice
#include "ar_interface/msg/detail/cubic_traj_params__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ar_interface__msg__CubicTrajParams__init(ar_interface__msg__CubicTrajParams * msg)
{
  if (!msg) {
    return false;
  }
  // p0
  // pf
  // v0
  // vf
  // t0
  // tf
  return true;
}

void
ar_interface__msg__CubicTrajParams__fini(ar_interface__msg__CubicTrajParams * msg)
{
  if (!msg) {
    return;
  }
  // p0
  // pf
  // v0
  // vf
  // t0
  // tf
}

bool
ar_interface__msg__CubicTrajParams__are_equal(const ar_interface__msg__CubicTrajParams * lhs, const ar_interface__msg__CubicTrajParams * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // p0
  if (lhs->p0 != rhs->p0) {
    return false;
  }
  // pf
  if (lhs->pf != rhs->pf) {
    return false;
  }
  // v0
  if (lhs->v0 != rhs->v0) {
    return false;
  }
  // vf
  if (lhs->vf != rhs->vf) {
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
ar_interface__msg__CubicTrajParams__copy(
  const ar_interface__msg__CubicTrajParams * input,
  ar_interface__msg__CubicTrajParams * output)
{
  if (!input || !output) {
    return false;
  }
  // p0
  output->p0 = input->p0;
  // pf
  output->pf = input->pf;
  // v0
  output->v0 = input->v0;
  // vf
  output->vf = input->vf;
  // t0
  output->t0 = input->t0;
  // tf
  output->tf = input->tf;
  return true;
}

ar_interface__msg__CubicTrajParams *
ar_interface__msg__CubicTrajParams__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ar_interface__msg__CubicTrajParams * msg = (ar_interface__msg__CubicTrajParams *)allocator.allocate(sizeof(ar_interface__msg__CubicTrajParams), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ar_interface__msg__CubicTrajParams));
  bool success = ar_interface__msg__CubicTrajParams__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ar_interface__msg__CubicTrajParams__destroy(ar_interface__msg__CubicTrajParams * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ar_interface__msg__CubicTrajParams__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ar_interface__msg__CubicTrajParams__Sequence__init(ar_interface__msg__CubicTrajParams__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ar_interface__msg__CubicTrajParams * data = NULL;

  if (size) {
    data = (ar_interface__msg__CubicTrajParams *)allocator.zero_allocate(size, sizeof(ar_interface__msg__CubicTrajParams), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ar_interface__msg__CubicTrajParams__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ar_interface__msg__CubicTrajParams__fini(&data[i - 1]);
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
ar_interface__msg__CubicTrajParams__Sequence__fini(ar_interface__msg__CubicTrajParams__Sequence * array)
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
      ar_interface__msg__CubicTrajParams__fini(&array->data[i]);
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

ar_interface__msg__CubicTrajParams__Sequence *
ar_interface__msg__CubicTrajParams__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ar_interface__msg__CubicTrajParams__Sequence * array = (ar_interface__msg__CubicTrajParams__Sequence *)allocator.allocate(sizeof(ar_interface__msg__CubicTrajParams__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ar_interface__msg__CubicTrajParams__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ar_interface__msg__CubicTrajParams__Sequence__destroy(ar_interface__msg__CubicTrajParams__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ar_interface__msg__CubicTrajParams__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ar_interface__msg__CubicTrajParams__Sequence__are_equal(const ar_interface__msg__CubicTrajParams__Sequence * lhs, const ar_interface__msg__CubicTrajParams__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ar_interface__msg__CubicTrajParams__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ar_interface__msg__CubicTrajParams__Sequence__copy(
  const ar_interface__msg__CubicTrajParams__Sequence * input,
  ar_interface__msg__CubicTrajParams__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ar_interface__msg__CubicTrajParams);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ar_interface__msg__CubicTrajParams * data =
      (ar_interface__msg__CubicTrajParams *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ar_interface__msg__CubicTrajParams__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ar_interface__msg__CubicTrajParams__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ar_interface__msg__CubicTrajParams__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
