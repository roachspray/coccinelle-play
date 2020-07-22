// For pr240545
//
// This does not do things like nv_malloc, but perhaps that should
// be a separate change since it is a wrapper macro rather than direct
// change.
// 
// (c) Andrew R. Reiter <areiter@veracode.com>

@@
// This handles where alloc and if() are on not combined
type T;
identifier buf;
expression E4, E5;
@@
(
    buf = \(mallocarray\|malloc\|reallocf\|realloc\)(..., M_WAITOK);
|
    buf = \(mallocarray\|malloc\|reallocf\|realloc\)(..., M_WAITOK | E4);
|
    buf = \(mallocarray\|malloc\|reallocf\|realloc\)(..., E4 | M_WAITOK | E5);
|
    buf = \(mallocarray\|malloc\|reallocf\|realloc\)(..., E4 | M_WAITOK);
|
    buf = (T)\(mallocarray\|malloc\|reallocf\|realloc\)(..., M_WAITOK);
|
    buf = (T)\(mallocarray\|malloc\|reallocf\|realloc\)(..., M_WAITOK | E4);
|
    buf = (T)\(mallocarray\|malloc\|reallocf\|realloc\)(..., E4 | M_WAITOK | E5);
|
    buf = (T)\(mallocarray\|malloc\|reallocf\|realloc\)(..., E4 | M_WAITOK);
)
// Handle gaps, unless there is re-use with NOWAIT .. pointed out by Conrad
// Meyer (cmeyer@).
// Concern: are there other cases I am missing? Patch review should be able 
// to check this.
... when != buf = \(mallocarray\|malloc\|reallocf\|realloc\)(..., M_NOWAIT)
    when != buf = \(mallocarray\|malloc\|reallocf\|realloc\)(..., M_NOWAIT | E4)
    when != buf = \(mallocarray\|malloc\|reallocf\|realloc\)(..., E4 | M_NOWAIT);
    when != buf = \(mallocarray\|malloc\|reallocf\|realloc\)(..., E4 | M_NOWAIT | E5)
    when != buf = (T)\(mallocarray\|malloc\|reallocf\|realloc\)(..., M_NOWAIT)
    when != buf = (T)\(mallocarray\|malloc\|reallocf\|realloc\)(..., M_NOWAIT | E4)
    when != buf = (T)\(mallocarray\|malloc\|reallocf\|realloc\)(..., E4 | M_NOWAIT)
    when != buf = (T)\(mallocarray\|malloc\|reallocf\|realloc\)(..., E4 | M_NOWAIT | E5)
(
-    if (buf == NULL) {
-...
-    }
|
-    if (buf == NULL) {
-...
-} else {
...
-}
|
-    if (!buf) {
-...
-    }
|
-   if (!buf) {
-...
-} else {
...
-}
|
-   if (buf) {
...
- }
|
-     if (buf) {
	...
-     } else {
-        ...
-     }
|
-    if (buf != NULL) {
...
-    }
|
-    if (buf != NULL) {
...
-} else {
-...
-}
|
-    if (buf == (T)NULL) {
-...
-} else {
...
-}
|
-    if (buf == (T)NULL) {
-...
-    }
|
-    if (buf != (T)NULL) {
...
-} else {
-...
-}
|
-    if (buf != (T)NULL) {
...
-    }
)



@@
type T;
identifier buf;
identifier flag;
expression E1, E2, E3, E4, E5;
@@

(
-    if ((buf = malloc(E1, E2, M_WAITOK)) == NULL) {
-...
-    }
+    buf = malloc(E1, E2, M_WAITOK);
|
-    if ((buf = malloc(E1, E2, E4 | M_WAITOK)) == NULL) {
-...
-    }
+    buf = malloc(E1, E2, E4 | M_WAITOK);
|
-    if ((buf = malloc(E1, E2,  M_WAITOK | E4)) == NULL) {
-...
-    }
+    buf = malloc(E1, E2,  M_WAITOK | E4);
|
-    if ((buf = malloc(E1, E2,  E4 | M_WAITOK | E5)) == NULL) {
-...
-    }
+    buf = malloc(E1, E2,  E4 | M_WAITOK | E5);
|
-    if ((buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK)) == NULL) {
-...
-    }
+    buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK);
|
-    if ((buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK | E4)) == NULL) {
-...
-    }
+    buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK | E4);
|
-    if ((buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK | E5)) == NULL) {
-...
-    }
+    buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK | E5);
|
-    if ((buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK)) == NULL) {
-...
-    }
+    buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK);
|
// != cases
+    buf = malloc(E1, E2, E3 | M_WAITOK);
-    if ((buf = malloc(E1, E2, E3 | M_WAITOK)) != NULL) {
...
-    }
|
+    buf = malloc(E1, E2,  M_WAITOK | E3);
-    if ((buf = malloc(E1, E2,  M_WAITOK | E3)) != NULL) {
...
-    }
|
+    buf = malloc(E1, E2,  E3 | M_WAITOK | E4);
-    if ((buf = malloc(E1, E2,  E3 | M_WAITOK | E4)) != NULL) {
...
-    }
|
+    buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK);
-    if ((buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK)) != NULL) {
...
-    }
|
+    buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK | E4);
-    if ((buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK | E4)) != NULL) {
...
-    }
|
+    buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK | E5);
-    if ((buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK | E5)) != NULL) {
...
-    }
|
+    buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK);
-    if ((buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK)) != NULL) {
...
-    }
|
+    buf = malloc(E1, E2, E3 | M_WAITOK);
-    if ((buf = malloc(E1, E2, E3 | M_WAITOK)) != NULL) {
...
-    } else  {
-...
-}
|
+    buf = malloc(E1, E2, M_WAITOK | E3);
-    if ((buf = malloc(E1, E2,  M_WAITOK | E3)) != NULL) {
...
-    } else  {
-...
-}
|
+    buf = malloc(E1, E2,  E3 | M_WAITOK | E4);
-    if ((buf = malloc(E1, E2,  E3 | M_WAITOK | E4)) != NULL) {
...
-    } else  {
-...
-}
|
+    buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK);
-    if ((buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK)) != NULL) {
...
-    } else  {
-...
-}
|
+    buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK | E4);
-    if ((buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK | E4)) != NULL) {
...
-    } else  {
-...
-}
|
+    buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK | E5);
-    if ((buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK | E5)) != NULL) {
...
-    } else  {
-...
-}
|
+    buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK);
-    if ((buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK)) != NULL) {
...
-    } else  {
-...
-}
|
-    if ((buf = malloc(E1, E2, M_WAITOK)) == NULL) {
-...
-    } else {
+    buf = malloc(E1, E2, M_WAITOK);
...
-}
|
-    if ((buf = malloc(E1, E2, E3 | M_WAITOK)) == NULL) {
-...
-    } else {
+    buf = malloc(E1, E2, E3 | M_WAITOK);
...
-}
|
-    if ((buf = malloc(E1, E2,  M_WAITOK | E3)) == NULL) {
-...
-    } else {
+    buf = malloc(E1, E2,  M_WAITOK | E3);
...
-}
|
-    if ((buf = malloc(E1, E2,  E3 | M_WAITOK | E4)) == NULL) {
-...
-    } else {
+    buf = malloc(E1, E2,  E3 | M_WAITOK | E4);
...
-}
|
-    if ((buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK)) == NULL) {
-...
-    } else {
+    buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK);
...
-}
|
-    if ((buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK | E4)) == NULL) {
-...
-    } else {
+    buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK | E4);
...
-}
|
-    if ((buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK | E5)) == NULL) {
-...
-    } else {
+    buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK | E5);
...
-}
|
-    if ((buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK)) == NULL) {
-...
-    } else {
+    buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK);
...
-}
|
-    if ((buf = (T)malloc(E1, E2, M_WAITOK)) == NULL) {
-...
-    }
+    buf = (T)malloc(E1, E2, M_WAITOK);
|
-    if ((buf = (T)malloc(E1, E2, E3 | M_WAITOK)) == NULL) {
-...
-    }
+    buf = (T)malloc(E1, E2, E3 | M_WAITOK);
|
-    if ((buf = (T)malloc(E1, E2,  M_WAITOK | E3)) == NULL) {
-...
-    }
+    buf = (T)malloc(E1, E2,  M_WAITOK | E3);
|
-    if ((buf = (T)malloc(E1, E2,  E3 | M_WAITOK | E4)) == NULL) {
-...
-    }
+    buf = (T)malloc(E1, E2,  E3 | M_WAITOK | E4);
|
-    if ((buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK)) == NULL) {
-...
-    }
+    buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK);
|
-    if ((buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK | E4)) == NULL) {
-...
-    }
+    buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK | E4);
|
-    if ((buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK | E5)) == NULL) {
-...
-    }
+    buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK | E5);
|
-    if ((buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK)) == NULL) {
-...
-    }
+    buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK);
|
+    buf = (T)malloc(E1, E2, E3 | M_WAITOK);
-    if ((buf = (T)malloc(E1, E2, E3 | M_WAITOK)) != NULL) {
...
-    }
|
+    buf = (T)malloc(E1, E2,  M_WAITOK | E3);
-    if ((buf = (T)malloc(E1, E2,  M_WAITOK | E3)) != NULL) {
...
-    }
|
+    buf = (T)malloc(E1, E2,  E3 | M_WAITOK | E4);
-    if ((buf = (T)malloc(E1, E2,  E3 | M_WAITOK | E4)) != NULL) {
...
-    }
|
+    buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK);
-    if ((buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK)) != NULL) {
...
-    }
|
+    buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK | E4);
-    if ((buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK | E4)) != NULL) {
...
-    }
|
+    buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK | E5);
-    if ((buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK | E5)) != NULL) {
...
-    }
|
+    buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK);
-    if ((buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK)) != NULL) {
...
-    }
|
+    buf = (T)malloc(E1, E2, M_WAITOK);
-    if ((buf = (T)malloc(E1, E2, M_WAITOK)) != NULL) {
...
-    } else  {
-...
-}
|
+    buf = (T)malloc(E1, E2, E3 | M_WAITOK);
-    if ((buf = (T)malloc(E1, E2, E3 | M_WAITOK)) != NULL) {
...
-    } else  {
-...
-}
|
+    buf = (T)malloc(E1, E2,  M_WAITOK | E3);
-    if ((buf = (T)malloc(E1, E2,  M_WAITOK | E3)) != NULL) {
...
-    } else  {
-...
-}
|
+    buf = (T)malloc(E1, E2,  E3 | M_WAITOK | E4);
-    if ((buf = (T)malloc(E1, E2,  E3 | M_WAITOK | E4)) != NULL) {
...
-    } else  {
-...
-}
|
+    buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK);
-    if ((buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK)) != NULL) {
...
-    } else  {
-...
-}
|
+    buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK | E4);
-    if ((buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK | E4)) != NULL) {
...
-    } else  {
-...
-}
|
+    buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK | E5);
-    if ((buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK | E5)) != NULL) {
...
-    } else  {
-...
-}
|
+    buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK);
-    if ((buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK)) != NULL) {
...
-    } else  {
-...
-}
|
-    if ((buf = (T)malloc(E1, E2, M_WAITOK)) == NULL) {
-...
-    } else {
+    buf = (T)malloc(E1, E2, M_WAITOK);
...
-}
|
-    if ((buf = (T)malloc(E1, E2, E3 | M_WAITOK)) == NULL) {
-...
-    } else {
+    buf = (T)malloc(E1, E2, E3 | M_WAITOK);
...
-}
|
-    if ((buf = (T)malloc(E1, E2,  M_WAITOK | E3)) == NULL) {
-...
-    } else {
+    buf = (T)malloc(E1, E2,  M_WAITOK | E3);
...
-}
|
-    if ((buf = (T)malloc(E1, E2,  E3 | M_WAITOK | E4)) == NULL) {
-...
-    } else {
+    buf = (T)malloc(E1, E2,  E3 | M_WAITOK | E4);
...
-}
|
-    if ((buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK)) == NULL) {
-...
-    } else {
+    buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK);
...
-}
|
-    if ((buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK | E4)) == NULL) {
-...
-    } else {
+    buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK | E4);
...
-}
|
-    if ((buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK | E5)) == NULL) {
-...
-    } else {
+    buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK | E5);
...
-}
|
-    if ((buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK)) == NULL) {
-...
-    } else {
+    buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK);
...
-}
|
-    if ((buf = (T)malloc(E1, E2, M_WAITOK)) == (T)NULL) {
-...
-    }
+    buf = (T)malloc(E1, E2, M_WAITOK);
|
-    if ((buf = (T)malloc(E1, E2, E3 | M_WAITOK)) == (T)NULL) {
-...
-    }
+    buf = (T)malloc(E1, E2, E3 | M_WAITOK);
|
-    if ((buf = (T)malloc(E1, E2,  M_WAITOK | E3)) == (T)NULL) {
-...
-    }
+    buf = (T)malloc(E1, E2,  M_WAITOK | E3);
|
-    if ((buf = (T)malloc(E1, E2,  E3 | M_WAITOK | E4)) == (T)NULL) {
-...
-    }
+    buf = (T)malloc(E1, E2,  E3 | M_WAITOK | E4);
|
-    if ((buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK)) == (T)NULL) {
-...
-    }
+    buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK);
|
-    if ((buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK | E4)) == (T)NULL) {
-...
-    }
+    buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK | E4);
|
-    if ((buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK | E5)) == (T)NULL) {
-...
-    }
+    buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK | E5);
|
-    if ((buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK)) == (T)NULL) {
-...
-    }
+    buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK);
|
+    buf = (T)malloc(E1, E2, M_WAITOK);
-    if ((buf = (T)malloc(E1, E2, M_WAITOK)) != (T)NULL) {
...
-    }
|
+    buf = (T)malloc(E1, E2, E3 | M_WAITOK);
-    if ((buf = (T)malloc(E1, E2, E3 | M_WAITOK)) != (T)NULL) {
...
-    }
|
+    buf = (T)malloc(E1, E2,  M_WAITOK | E3);
-    if ((buf = (T)malloc(E1, E2,  M_WAITOK | E3)) != (T)NULL) {
...
-    }
|
+    buf = (T)malloc(E1, E2,  E3 | M_WAITOK | E4);
-    if ((buf = (T)malloc(E1, E2,  E3 | M_WAITOK | E4)) != (T)NULL) {
...
-    }
|
+    buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK);
-    if ((buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK)) != (T)NULL) {
...
-    }
|
+    buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK | E4);
-    if ((buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK | E4)) != (T)NULL) {
...
-    }
|
+    buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK | E5);
-    if ((buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK | E5)) != (T)NULL) {
...
-    }
|
+    buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK);
-    if ((buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK)) != (T)NULL) {
...
-    }
|
+    buf = (T)malloc(E1, E2, M_WAITOK);
-    if ((buf = (T)malloc(E1, E2, M_WAITOK)) != (T)NULL) {
...
-    } else  {
-...
-}
|
+    buf = (T)malloc(E1, E2, E3 | M_WAITOK);
-    if ((buf = (T)malloc(E1, E2, E3 | M_WAITOK)) != (T)NULL) {
...
-    } else  {
-...
-}
|
+    buf = (T)malloc(E1, E2,  M_WAITOK | E3);
-    if ((buf = (T)malloc(E1, E2,  M_WAITOK | E3)) != (T)NULL) {
...
-    } else  {
-...
-}
|
+    buf = (T)malloc(E1, E2,  E3 | M_WAITOK | E4);
-    if ((buf = (T)malloc(E1, E2,  E3 | M_WAITOK | E4)) != (T)NULL) {
...
-    } else  {
-...
-}
|
+    buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK);
-    if ((buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK)) != (T)NULL) {
...
-    } else  {
-...
-}
|
+    buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK | E4);
-    if ((buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK | E4)) != (T)NULL) {
...
-    } else  {
-...
-}
|
+    buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK | E5);
-    if ((buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK | E5)) != (T)NULL) {
...
-    } else  {
-...
-}
|
+    buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK);
-    if ((buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK)) != (T)NULL) {
...
-    } else  {
-...
-}
|
-    if ((buf = (T)malloc(E1, E2, M_WAITOK)) == (T)NULL) {
-...
-    } else {
+    buf = (T)malloc(E1, E2, M_WAITOK);
...
-}
|
-    if ((buf = (T)malloc(E1, E2, E3 | M_WAITOK)) == (T)NULL) {
-...
-    } else {
+    buf = (T)malloc(E1, E2, E3 | M_WAITOK);
...
-}
|
-    if ((buf = (T)malloc(E1, E2,  M_WAITOK | E3)) == (T)NULL) {
-...
-    } else {
+    buf = (T)malloc(E1, E2,  M_WAITOK | E3);
...
-}
|
-    if ((buf = (T)malloc(E1, E2,  E3 | M_WAITOK | E4)) == (T)NULL) {
-...
-    } else {
+    buf = (T)malloc(E1, E2,  E3 | M_WAITOK | E4);
...
-}
|
-    if ((buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK)) == (T)NULL) {
-...
-    } else {
+    buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK);
...
-}
|
-    if ((buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK | E4)) == (T)NULL) {
-...
-    } else {
+    buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK | E4);
...
-}
|
-    if ((buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK | E5)) == (T)NULL) {
-...
-    } else {
+    buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK | E5);
...
-}
|
-    if ((buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK)) == (T)NULL) {
-...
-    } else {
+    buf = (T)\(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK);
...
-}
|
-    if ((buf = malloc(E1, E2, M_WAITOK)) == (T)NULL) {
-...
-    }
+    buf = malloc(E1, E2, M_WAITOK);
|
-    if ((buf = malloc(E1, E2, E3 | M_WAITOK)) == (T)NULL) {
-...
-    }
+    buf = malloc(E1, E2, E3 | M_WAITOK);
|
-    if ((buf = malloc(E1, E2,  M_WAITOK | E3)) == (T)NULL) {
-...
-    }
+    buf = malloc(E1, E2,  M_WAITOK | E3);
|
-    if ((buf = malloc(E1, E2,  E3 | M_WAITOK | E4)) == (T)NULL) {
-...
-    }
+    buf = malloc(E1, E2,  E3 | M_WAITOK | E4);
|
-    if ((buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK)) == (T)NULL) {
-...
-    }
+    buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK);
|
-    if ((buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK | E4)) == (T)NULL) {
-...
-    }
+    buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK | E4);
|
-    if ((buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK | E5)) == (T)NULL) {
-...
-    }
+    buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK | E5);
|
-    if ((buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK)) == (T)NULL) {
-...
-    }
+    buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK);
|
+    buf = malloc(E1, E2, M_WAITOK);
-    if ((buf = malloc(E1, E2, M_WAITOK)) != (T)NULL) {
...
-    }
|
+    buf = malloc(E1, E2, E3 | M_WAITOK);
-    if ((buf = malloc(E1, E2, E3 | M_WAITOK)) != (T)NULL) {
...
-    }
|
+    buf = malloc(E1, E2,  M_WAITOK | E3);
-    if ((buf = malloc(E1, E2,  M_WAITOK | E3)) != (T)NULL) {
...
-    }
|
+    buf = malloc(E1, E2,  E3 | M_WAITOK | E4);
-    if ((buf = malloc(E1, E2,  E3 | M_WAITOK | E4)) != (T)NULL) {
...
-    }
|
+    buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK);
-    if ((buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK)) != (T)NULL) {
...
-    }
|
+    buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK | E4);
-    if ((buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK | E4)) != (T)NULL) {
...
-    }
|
+    buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK | E5);
-    if ((buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK | E5)) != (T)NULL) {
...
-    }
|
+    buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK);
-    if ((buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK)) != (T)NULL) {
...
-    }
|
+    buf = malloc(E1, E2, M_WAITOK);
-    if ((buf = malloc(E1, E2, M_WAITOK)) != (T)NULL) {
...
-    } else  {
-...
-}
|
+    buf = malloc(E1, E2, E3 | M_WAITOK);
-    if ((buf = malloc(E1, E2, E3 | M_WAITOK)) != (T)NULL) {
...
-    } else  {
-...
-}
|
+    buf = malloc(E1, E2,  M_WAITOK | E3);
-    if ((buf = malloc(E1, E2,  M_WAITOK | E3)) != (T)NULL) {
...
-    } else  {
-...
-}
|
+    buf = malloc(E1, E2,  E3 | M_WAITOK | E4);
-    if ((buf = malloc(E1, E2,  E3 | M_WAITOK | E4)) != (T)NULL) {
...
-    } else  {
-...
-}
|
+    buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK);
-    if ((buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK)) != (T)NULL) {
...
-    } else  {
-...
-}
|
+    buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK | E4);
-    if ((buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK | E4)) != (T)NULL) {
...
-    } else  {
-...
-}
|
+    buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK | E5);
-    if ((buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK | E5)) != (T)NULL) {
...
-    } else  {
-...
-}
|
+    buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK);
-    if ((buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK)) != (T)NULL) {
...
-    } else  {
-...
-}
|
-    if ((buf = malloc(E1, E2, M_WAITOK)) == (T)NULL) {
-...
-    } else {
+    buf = malloc(E1, E2, M_WAITOK);
...
-}
|
-    if ((buf = malloc(E1, E2, E3 | M_WAITOK)) == (T)NULL) {
-...
-    } else {
+    buf = malloc(E1, E2, E3 | M_WAITOK);
...
-}
|
-    if ((buf = malloc(E1, E2,  M_WAITOK | E3)) == (T)NULL) {
-...
-    } else {
+    buf = malloc(E1, E2,  M_WAITOK | E3);
...
-}
|
-    if ((buf = malloc(E1, E2,  E3 | M_WAITOK | E4)) == (T)NULL) {
-...
-    } else {
+    buf = malloc(E1, E2,  E3 | M_WAITOK | E4);
...
-}
|
-    if ((buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK)) == (T)NULL) {
-...
-    } else {
+    buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK);
...
-}
|
-    if ((buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK | E4)) == (T)NULL) {
-...
-    } else {
+    buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK | E4);
...
-}
|
-    if ((buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK | E5)) == (T)NULL) {
-...
-    } else {
+    buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, E4 | M_WAITOK | E5);
...
-}
|
-    if ((buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK)) == (T)NULL) {
-...
-    } else {
+    buf = \(mallocarray\|reallocf\|realloc\)(E1, E2, E3, M_WAITOK);
...
-}
)
