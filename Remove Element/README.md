# 🧠 What I Learned
- Using `vector<int>::iterator` to traverse and modify a vector.
- Accessing vector elements via iterators with `*it`.
- Removing elements from a vector using `vector::erase()`.
- Handling **iterator invalidation** after `erase()` by adjusting the iterator (`it--`).
- Understanding how modifying a container inside a loop affects iteration and indexing.
- Conditional removal of elements inside a loop.
- Returning the updated vector size with `nums.size()`.
- Difference between index-based iteration and iterator-based iteration.
- Awareness of performance implications when using `erase()` on vectors.

# 🎯 Description
- Given an array of integers `nums` and an integer `val`, remove all instances of `val` **in-place** and return the new length of the array.
- Do this **without allocating extra space** for another array.
- The order of elements can be changed.  
