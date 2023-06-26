struct kmem {
  struct spinlock lock;
  int use_lock;
  struct run *freelist;

  uint refcounts[PHYSTOP / PGSIZE]; // number of references to a frame (for CoW)
};

extern struct kmem kmem;
