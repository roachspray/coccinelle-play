@@
// This is the rule header; metavariables must be declared here
type T;
identifier buf;
identifier flag;
expression E1, E2, E3, E4, E5;
@@
(
    buf = malloc(E1, E2, M_WAITOK)
|
    buf = mallocarray(E1, E2, E3, M_WAITOK)
|
    buf = realloc(E1, E2, E3, M_WAITOK)
|
    buf = reallocf(E1, E2, E3, M_WAITOK)
|
    buf = malloc(E1, E2, M_WAITOK | E4)
|
    buf = mallocarray(E1, E2, E3, M_WAITOK | E4)
|
    buf = realloc(E1, E2, E3, M_WAITOK | E4)
|
    buf = reallocf(E1, E2, E3, M_WAITOK | E4)
|
    buf = malloc(E1, E2, E4 | M_WAITOK)
|
    buf = mallocarray(E1, E2, E3, E4 | M_WAITOK)
|
    buf = realloc(E1, E2, E3, E4 | M_WAITOK)
|
    buf = reallocf(E1, E2, E3, E4 | M_WAITOK)
|
    buf = malloc(E1, E2, E4 | M_WAITOK | E5)
|
    buf = mallocarray(E1, E2, E3, E4 | M_WAITOK | E5)
|
    buf = realloc(E1, E2, E3, E4 | M_WAITOK | E5)
|
    buf = reallocf(E1, E2, E3, E4 | M_WAITOK | E5)
//|
//    T buf = malloc(E1, E2, M_WAITOK)
//|
//    T buf = mallocarray(E1, E2, E3, M_WAITOK)
//|
//    T buf = realloc(E1, E2, E3, M_WAITOK)
//|
//    T buf = reallocf(E1, E2, E3, M_WAITOK)
//|
//    T buf = malloc(E1, E2, flag | M_WAITOK)
//|
//    T buf = mallocarray(E1, E2, E3, flag | M_WAITOK)
//|
//    T buf = realloc(E1, E2, E3, flag | M_WAITOK)
//|
//    T buf = reallocf(E1, E2, E3, flag | M_WAITOK)
)
...
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
)

@@
// This is the rule header; metavariables must be declared here
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
-    if ((buf = malloc(E1, E2, E3 | M_WAITOK)) == NULL) {
-...
-    }
+    buf = malloc(E1, E2, E3 | M_WAITOK);
|
-    if ((buf = malloc(E1, E2,  M_WAITOK | E3)) == NULL) {
-...
-    }
+    buf = malloc(E1, E2,  M_WAITOK | E3);
|
-    if ((buf = malloc(E1, E2,  E3 | M_WAITOK | E4)) == NULL) {
-...
-    }
+    buf = malloc(E1, E2,  E3 | M_WAITOK | E4);
|
-    if ((buf = mallocarray(E1, E2, E3, E4 | M_WAITOK)) == NULL) {
-...
-    }
+    buf = mallocarray(E1, E2, E3, E4 | M_WAITOK);
|
-    if ((buf = mallocarray(E1, E2, E3, M_WAITOK | E4)) == NULL) {
-...
-    }
+    buf = mallocarray(E1, E2, E3, M_WAITOK | E4);
|
-    if ((buf = mallocarray(E1, E2, E3, E4 | M_WAITOK | E5)) == NULL) {
-...
-    }
+    buf = mallocarray(E1, E2, E3, E4 | M_WAITOK | E5);
|
-    if ((buf = mallocarray(E1, E2, E3, M_WAITOK)) == NULL) {
-...
-    }
+    buf = mallocarray(E1, E2, E3, M_WAITOK);
|
-    if ((buf = realloc(E1, E2, E3, M_WAITOK)) == NULL) {
-...
-    }
+    buf = realloc(E1, E2, E3, M_WAITOK);
|
-    if ((buf = realloc(E1, E2, E3, E4 | M_WAITOK | E5)) == NULL) {
-...
-    }
+    buf = realloc(E1, E2, E3, E4 | M_WAITOK | E5);
|
-    if ((buf = realloc(E1, E2, E3, M_WAITOK | E4)) == NULL) {
-...
-    }
+    buf = realloc(E1, E2, E3, M_WAITOK | E4);
|
-    if ((buf = realloc(E1, E2, E3, E4 | M_WAITOK)) == NULL) {
-...
-    }
+    buf = realloc(E1, E2, E3, E4 | M_WAITOK);
|
-   if ((buf = reallocf(E1, E2, E3, M_WAITOK)) == NULL) {
-...
-   }
+   buf = reallocf(E1, E2, E3, M_WAITOK);
|
-   if ((buf = reallocf(E1, E2, E3, EM_WAITOK)) == NULL) {
-...
-   }
+   buf = reallocf(E1, E2, E3, E4 | M_WAITOK | E5);
|
-   if ((buf = reallocf(E1, E2, E3, M_WAITOK | E4)) == NULL) {
-...
-   }
+   buf = reallocf(E1, E2, E3, M_WAITOK | E4);
|
-   if ((buf = reallocf(E1, E2, E3, E4 | M_WAITOK)) == NULL) {
-...
-   }
+   buf = reallocf(E1, E2, E3, E4 | M_WAITOK);
)

@@
// This is the rule header; metavariables must be declared here
type T;
identifier buf;
identifier flag;
expression E1, E2, E3, E4, E5;
@@

(
+    buf = malloc(E1, E2, M_WAITOK);
-    if ((buf = malloc(E1, E2, M_WAITOK)) != NULL) {
...
-    }
|
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
+    buf = mallocarray(E1, E2, E3, E4 | M_WAITOK);
-    if ((buf = mallocarray(E1, E2, E3, E4 | M_WAITOK)) != NULL) {
...
-    }
|
+    buf = mallocarray(E1, E2, E3, M_WAITOK | E4);
-    if ((buf = mallocarray(E1, E2, E3, M_WAITOK | E4)) != NULL) {
...
-    }
|
+    buf = mallocarray(E1, E2, E3, E4 | M_WAITOK | E5);
-    if ((buf = mallocarray(E1, E2, E3, E4 | M_WAITOK | E5)) != NULL) {
...
-    }
|
+    buf = mallocarray(E1, E2, E3, M_WAITOK);
-    if ((buf = mallocarray(E1, E2, E3, M_WAITOK)) != NULL) {
...
-    }
|
+    buf = realloc(E1, E2, E3, M_WAITOK);
-    if ((buf = realloc(E1, E2, E3, M_WAITOK)) != NULL) {
...
-    }
|
+    buf = realloc(E1, E2, E3, E4 | M_WAITOK | E5);
-    if ((buf = realloc(E1, E2, E3, E4 | M_WAITOK | E5)) != NULL) {
...
-    }
|
+    buf = realloc(E1, E2, E3, M_WAITOK | E4);
-    if ((buf = realloc(E1, E2, E3, M_WAITOK | E4)) != NULL) {
...
-    }
|
+    buf = realloc(E1, E2, E3, E4 | M_WAITOK);
-    if ((buf = realloc(E1, E2, E3, E4 | M_WAITOK)) != NULL) {
...
-    }
|
+   buf = reallocf(E1, E2, E3, M_WAITOK);
-   if ((buf = reallocf(E1, E2, E3, M_WAITOK)) != NULL) {
...
-   }
|
+   buf = reallocf(E1, E2, E3, E4 | M_WAITOK | E5);
-   if ((buf = reallocf(E1, E2, E3, EM_WAITOK)) != NULL) {
...
-   }
|
+   buf = reallocf(E1, E2, E3, M_WAITOK | E4);
-   if ((buf = reallocf(E1, E2, E3, M_WAITOK | E4)) != NULL) {
...
-   }
|
+   buf = reallocf(E1, E2, E3, E4 | M_WAITOK);
-   if ((buf = reallocf(E1, E2, E3, E4 | M_WAITOK)) != NULL) {
...
-   }
)

@@
// This is the rule header; metavariables must be declared here
type T;
identifier buf;
identifier flag;
expression E1, E2, E3, E4, E5;
@@

(
+    buf = malloc(E1, E2, M_WAITOK);
-    if ((buf = malloc(E1, E2, M_WAITOK)) != NULL) {
...
-    } else  {
-...
-}
|
+    buf = malloc(E1, E2, E3 | M_WAITOK);
-    if ((buf = malloc(E1, E2, E3 | M_WAITOK)) != NULL) {
...
-    } else  {
-...
-}
|
+    buf = malloc(E1, E2,  M_WAITOK | E3);
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
+    buf = mallocarray(E1, E2, E3, E4 | M_WAITOK);
-    if ((buf = mallocarray(E1, E2, E3, E4 | M_WAITOK)) != NULL) {
...
-    } else  {
-...
-}
|
+    buf = mallocarray(E1, E2, E3, M_WAITOK | E4);
-    if ((buf = mallocarray(E1, E2, E3, M_WAITOK | E4)) != NULL) {
...
-    } else  {
-...
-}
|
+    buf = mallocarray(E1, E2, E3, E4 | M_WAITOK | E5);
-    if ((buf = mallocarray(E1, E2, E3, E4 | M_WAITOK | E5)) != NULL) {
...
-    } else  {
-...
-}
|
+    buf = mallocarray(E1, E2, E3, M_WAITOK);
-    if ((buf = mallocarray(E1, E2, E3, M_WAITOK)) != NULL) {
...
-    } else  {
-...
-}
|
+    buf = realloc(E1, E2, E3, M_WAITOK);
-    if ((buf = realloc(E1, E2, E3, M_WAITOK)) != NULL) {
...
-    } else  {
-...
-}
|
+    buf = realloc(E1, E2, E3, E4 | M_WAITOK | E5);
-    if ((buf = realloc(E1, E2, E3, E4 | M_WAITOK | E5)) != NULL) {
...
-    } else  {
-...
-}
|
+    buf = realloc(E1, E2, E3, M_WAITOK | E4);
-    if ((buf = realloc(E1, E2, E3, M_WAITOK | E4)) != NULL) {
...
-    } else  {
-...
-}
|
+    buf = realloc(E1, E2, E3, E4 | M_WAITOK);
-    if ((buf = realloc(E1, E2, E3, E4 | M_WAITOK)) != NULL) {
...
-    } else  {
-...
-}
|
+   buf = reallocf(E1, E2, E3, M_WAITOK);
-   if ((buf = reallocf(E1, E2, E3, M_WAITOK)) != NULL) {
...
-    } else  {
-...
-}
|
+   buf = reallocf(E1, E2, E3, E4 | M_WAITOK | E5);
-   if ((buf = reallocf(E1, E2, E3, EM_WAITOK)) != NULL) {
...
-    } else  {
-...
-}
|
+   buf = reallocf(E1, E2, E3, M_WAITOK | E4);
-   if ((buf = reallocf(E1, E2, E3, M_WAITOK | E4)) != NULL) {
...
-    } else  {
-...
-}
|
+   buf = reallocf(E1, E2, E3, E4 | M_WAITOK);
-   if ((buf = reallocf(E1, E2, E3, E4 | M_WAITOK)) != NULL) {
...
-    } else  {
-...
-}
)

@@
// This is the rule header; metavariables must be declared here
type T;
identifier buf;
identifier flag;
expression E1, E2, E3, E4, E5;
@@

(
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
-    if ((buf = mallocarray(E1, E2, E3, E4 | M_WAITOK)) == NULL) {
-...
-    } else {
+    buf = mallocarray(E1, E2, E3, E4 | M_WAITOK);
...
-}
|
-    if ((buf = mallocarray(E1, E2, E3, M_WAITOK | E4)) == NULL) {
-...
-    } else {
+    buf = mallocarray(E1, E2, E3, M_WAITOK | E4);
...
-}
|
-    if ((buf = mallocarray(E1, E2, E3, E4 | M_WAITOK | E5)) == NULL) {
-...
-    } else {
+    buf = mallocarray(E1, E2, E3, E4 | M_WAITOK | E5);
...
-}
|
-    if ((buf = mallocarray(E1, E2, E3, M_WAITOK)) == NULL) {
-...
-    } else {
+    buf = mallocarray(E1, E2, E3, M_WAITOK);
...
-}
|
-    if ((buf = realloc(E1, E2, E3, M_WAITOK)) == NULL) {
-...
-    } else {
+    buf = realloc(E1, E2, E3, M_WAITOK);
...
-}
|
-    if ((buf = realloc(E1, E2, E3, E4 | M_WAITOK | E5)) == NULL) {
-...
-    } else {
+    buf = realloc(E1, E2, E3, E4 | M_WAITOK | E5);
...
-}
|
-    if ((buf = realloc(E1, E2, E3, M_WAITOK | E4)) == NULL) {
-...
-    } else {
+    buf = realloc(E1, E2, E3, M_WAITOK | E4);
...
-}
|
-    if ((buf = realloc(E1, E2, E3, E4 | M_WAITOK)) == NULL) {
-...
-    } else {
+    buf = realloc(E1, E2, E3, E4 | M_WAITOK);
...
-}
|
-   if ((buf = reallocf(E1, E2, E3, M_WAITOK)) == NULL) {
-...
-   } else {
+   buf = reallocf(E1, E2, E3, M_WAITOK);
...
-}
|
-   if ((buf = reallocf(E1, E2, E3, EM_WAITOK)) == NULL) {
-...
-   } else {
+   buf = reallocf(E1, E2, E3, E4 | M_WAITOK | E5);
...
-}
|
-   if ((buf = reallocf(E1, E2, E3, M_WAITOK | E4)) == NULL) {
-...
-   } else {
+   buf = reallocf(E1, E2, E3, M_WAITOK | E4);
...
-}
|
-   if ((buf = reallocf(E1, E2, E3, E4 | M_WAITOK)) == NULL) {
-...
-   } else {
+   buf = reallocf(E1, E2, E3, E4 | M_WAITOK);
...
-}
)


@@
// This is the rule header; metavariables must be declared here
type T;
identifier buf;
identifier flag;
expression E1, E2, E3, E4, E5;
@@
(
    buf = (T)malloc(E1, E2, M_WAITOK)
|
    buf = (T)mallocarray(E1, E2, E3, M_WAITOK)
|
    buf = (T)realloc(E1, E2, E3, M_WAITOK)
|
    buf = (T)reallocf(E1, E2, E3, M_WAITOK)
|
    buf = (T)malloc(E1, E2, M_WAITOK | E4)
|
    buf = (T)mallocarray(E1, E2, E3, M_WAITOK | E4)
|
    buf = (T)realloc(E1, E2, E3, M_WAITOK | E4)
|
    buf = (T)(T)reallocf(E1, E2, E3, M_WAITOK | E4)
|
    buf = (T)malloc(E1, E2, E4 | M_WAITOK)
|
    buf = (T)mallocarray(E1, E2, E3, E4 | M_WAITOK)
|
    buf = (T)(T)realloc(E1, E2, E3, E4 | M_WAITOK)
|
    buf = (T)(T)reallocf(E1, E2, E3, E4 | M_WAITOK)
|
    buf = (T)malloc(E1, E2, E4 | M_WAITOK | E5)
|
    buf = (T)mallocarray(E1, E2, E3, E4 | M_WAITOK | E5)
|
    buf = (T)realloc(E1, E2, E3, E4 | M_WAITOK | E5)
|
    buf = (T)reallocf(E1, E2, E3, E4 | M_WAITOK | E5)
//|
//    T buf = (T)malloc(E1, E2, M_WAITOK)
//|
//    T buf = (T)mallocarray(E1, E2, E3, M_WAITOK)
//|
//    T buf = (T)realloc(E1, E2, E3, M_WAITOK)
//|
//    T buf = (T)reallocf(E1, E2, E3, M_WAITOK)
//|
//    T buf = (T)malloc(E1, E2, flag | M_WAITOK)
//|
//    T buf = (T)mallocarray(E1, E2, E3, flag | M_WAITOK)
//|
//    T buf = (T)realloc(E1, E2, E3, flag | M_WAITOK)
//|
//    T buf = (T)reallocf(E1, E2, E3, flag | M_WAITOK)
)
...
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
)

@@
// This is the rule header; metavariables must be declared here
type T;
identifier buf;
identifier flag;
expression E1, E2, E3, E4, E5;
@@

(
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
-    if ((buf = (T)mallocarray(E1, E2, E3, E4 | M_WAITOK)) == NULL) {
-...
-    }
+    buf = (T)mallocarray(E1, E2, E3, E4 | M_WAITOK);
|
-    if ((buf = (T)mallocarray(E1, E2, E3, M_WAITOK | E4)) == NULL) {
-...
-    }
+    buf = (T)mallocarray(E1, E2, E3, M_WAITOK | E4);
|
-    if ((buf = (T)mallocarray(E1, E2, E3, E4 | M_WAITOK | E5)) == NULL) {
-...
-    }
+    buf = (T)mallocarray(E1, E2, E3, E4 | M_WAITOK | E5);
|
-    if ((buf = (T)mallocarray(E1, E2, E3, M_WAITOK)) == NULL) {
-...
-    }
+    buf = (T)mallocarray(E1, E2, E3, M_WAITOK);
|
-    if ((buf = (T)realloc(E1, E2, E3, M_WAITOK)) == NULL) {
-...
-    }
+    buf = (T)realloc(E1, E2, E3, M_WAITOK);
|
-    if ((buf = (T)realloc(E1, E2, E3, E4 | M_WAITOK | E5)) == NULL) {
-...
-    }
+    buf = (T)realloc(E1, E2, E3, E4 | M_WAITOK | E5);
|
-    if ((buf = (T)realloc(E1, E2, E3, M_WAITOK | E4)) == NULL) {
-...
-    }
+    buf = (T)realloc(E1, E2, E3, M_WAITOK | E4);
|
-    if ((buf = (T)realloc(E1, E2, E3, E4 | M_WAITOK)) == NULL) {
-...
-    }
+    buf = (T)realloc(E1, E2, E3, E4 | M_WAITOK);
|
-   if ((buf = (T)reallocf(E1, E2, E3, M_WAITOK)) == NULL) {
-...
-   }
+   buf = (T)reallocf(E1, E2, E3, M_WAITOK);
|
-   if ((buf = (T)reallocf(E1, E2, E3, EM_WAITOK)) == NULL) {
-...
-   }
+   buf = (T)reallocf(E1, E2, E3, E4 | M_WAITOK | E5);
|
-   if ((buf = (T)reallocf(E1, E2, E3, M_WAITOK | E4)) == NULL) {
-...
-   }
+   buf = (T)reallocf(E1, E2, E3, M_WAITOK | E4);
|
-   if ((buf = (T)reallocf(E1, E2, E3, E4 | M_WAITOK)) == NULL) {
-...
-   }
+   buf = (T)reallocf(E1, E2, E3, E4 | M_WAITOK);
)

@@
// This is the rule header; metavariables must be declared here
type T;
identifier buf;
identifier flag;
expression E1, E2, E3, E4, E5;
@@

(
+    buf = (T)malloc(E1, E2, M_WAITOK);
-    if ((buf = (T)malloc(E1, E2, M_WAITOK)) != NULL) {
...
-    }
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
+    buf = (T)mallocarray(E1, E2, E3, E4 | M_WAITOK);
-    if ((buf = (T)mallocarray(E1, E2, E3, E4 | M_WAITOK)) != NULL) {
...
-    }
|
+    buf = (T)mallocarray(E1, E2, E3, M_WAITOK | E4);
-    if ((buf = (T)mallocarray(E1, E2, E3, M_WAITOK | E4)) != NULL) {
...
-    }
|
+    buf = (T)mallocarray(E1, E2, E3, E4 | M_WAITOK | E5);
-    if ((buf = (T)mallocarray(E1, E2, E3, E4 | M_WAITOK | E5)) != NULL) {
...
-    }
|
+    buf = (T)mallocarray(E1, E2, E3, M_WAITOK);
-    if ((buf = (T)mallocarray(E1, E2, E3, M_WAITOK)) != NULL) {
...
-    }
|
+    buf = (T)realloc(E1, E2, E3, M_WAITOK);
-    if ((buf = (T)realloc(E1, E2, E3, M_WAITOK)) != NULL) {
...
-    }
|
+    buf = (T)realloc(E1, E2, E3, E4 | M_WAITOK | E5);
-    if ((buf = (T)realloc(E1, E2, E3, E4 | M_WAITOK | E5)) != NULL) {
...
-    }
|
+    buf = (T)realloc(E1, E2, E3, M_WAITOK | E4);
-    if ((buf = (T)realloc(E1, E2, E3, M_WAITOK | E4)) != NULL) {
...
-    }
|
+    buf = (T)realloc(E1, E2, E3, E4 | M_WAITOK);
-    if ((buf = (T)realloc(E1, E2, E3, E4 | M_WAITOK)) != NULL) {
...
-    }
|
+   buf = (T)reallocf(E1, E2, E3, M_WAITOK);
-   if ((buf = (T)reallocf(E1, E2, E3, M_WAITOK)) != NULL) {
...
-   }
|
+   buf = (T)reallocf(E1, E2, E3, E4 | M_WAITOK | E5);
-   if ((buf = (T)reallocf(E1, E2, E3, EM_WAITOK)) != NULL) {
...
-   }
|
+   buf = (T)reallocf(E1, E2, E3, M_WAITOK | E4);
-   if ((buf = (T)reallocf(E1, E2, E3, M_WAITOK | E4)) != NULL) {
...
-   }
|
+   buf = (T)reallocf(E1, E2, E3, E4 | M_WAITOK);
-   if ((buf = (T)reallocf(E1, E2, E3, E4 | M_WAITOK)) != NULL) {
...
-   }
)

@@
// This is the rule header; metavariables must be declared here
type T;
identifier buf;
identifier flag;
expression E1, E2, E3, E4, E5;
@@

(
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
+    buf = (T)mallocarray(E1, E2, E3, E4 | M_WAITOK);
-    if ((buf = (T)mallocarray(E1, E2, E3, E4 | M_WAITOK)) != NULL) {
...
-    } else  {
-...
-}
|
+    buf = (T)mallocarray(E1, E2, E3, M_WAITOK | E4);
-    if ((buf = (T)mallocarray(E1, E2, E3, M_WAITOK | E4)) != NULL) {
...
-    } else  {
-...
-}
|
+    buf = (T)mallocarray(E1, E2, E3, E4 | M_WAITOK | E5);
-    if ((buf = (T)mallocarray(E1, E2, E3, E4 | M_WAITOK | E5)) != NULL) {
...
-    } else  {
-...
-}
|
+    buf = (T)mallocarray(E1, E2, E3, M_WAITOK);
-    if ((buf = (T)mallocarray(E1, E2, E3, M_WAITOK)) != NULL) {
...
-    } else  {
-...
-}
|
+    buf = (T)realloc(E1, E2, E3, M_WAITOK);
-    if ((buf = (T)realloc(E1, E2, E3, M_WAITOK)) != NULL) {
...
-    } else  {
-...
-}
|
+    buf = (T)realloc(E1, E2, E3, E4 | M_WAITOK | E5);
-    if ((buf = (T)realloc(E1, E2, E3, E4 | M_WAITOK | E5)) != NULL) {
...
-    } else  {
-...
-}
|
+    buf = (T)realloc(E1, E2, E3, M_WAITOK | E4);
-    if ((buf = (T)realloc(E1, E2, E3, M_WAITOK | E4)) != NULL) {
...
-    } else  {
-...
-}
|
+    buf = (T)realloc(E1, E2, E3, E4 | M_WAITOK);
-    if ((buf = (T)realloc(E1, E2, E3, E4 | M_WAITOK)) != NULL) {
...
-    } else  {
-...
-}
|
+   buf = (T)reallocf(E1, E2, E3, M_WAITOK);
-   if ((buf = (T)reallocf(E1, E2, E3, M_WAITOK)) != NULL) {
...
-    } else  {
-...
-}
|
+   buf = (T)reallocf(E1, E2, E3, E4 | M_WAITOK | E5);
-   if ((buf = (T)reallocf(E1, E2, E3, EM_WAITOK)) != NULL) {
...
-    } else  {
-...
-}
|
+   buf = (T)reallocf(E1, E2, E3, M_WAITOK | E4);
-   if ((buf = (T)reallocf(E1, E2, E3, M_WAITOK | E4)) != NULL) {
...
-    } else  {
-...
-}
|
+   buf = (T)reallocf(E1, E2, E3, E4 | M_WAITOK);
-   if ((buf = (T)reallocf(E1, E2, E3, E4 | M_WAITOK)) != NULL) {
...
-    } else  {
-...
-}
)

@@
// This is the rule header; metavariables must be declared here
type T;
identifier buf;
identifier flag;
expression E1, E2, E3, E4, E5;
@@

(
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
-    if ((buf = (T)mallocarray(E1, E2, E3, E4 | M_WAITOK)) == NULL) {
-...
-    } else {
+    buf = (T)mallocarray(E1, E2, E3, E4 | M_WAITOK);
...
-}
|
-    if ((buf = (T)mallocarray(E1, E2, E3, M_WAITOK | E4)) == NULL) {
-...
-    } else {
+    buf = (T)mallocarray(E1, E2, E3, M_WAITOK | E4);
...
-}
|
-    if ((buf = (T)mallocarray(E1, E2, E3, E4 | M_WAITOK | E5)) == NULL) {
-...
-    } else {
+    buf = (T)mallocarray(E1, E2, E3, E4 | M_WAITOK | E5);
...
-}
|
-    if ((buf = (T)mallocarray(E1, E2, E3, M_WAITOK)) == NULL) {
-...
-    } else {
+    buf = (T)mallocarray(E1, E2, E3, M_WAITOK);
...
-}
|
-    if ((buf = (T)realloc(E1, E2, E3, M_WAITOK)) == NULL) {
-...
-    } else {
+    buf = (T)realloc(E1, E2, E3, M_WAITOK);
...
-}
|
-    if ((buf = (T)realloc(E1, E2, E3, E4 | M_WAITOK | E5)) == NULL) {
-...
-    } else {
+    buf = (T)realloc(E1, E2, E3, E4 | M_WAITOK | E5);
...
-}
|
-    if ((buf = (T)realloc(E1, E2, E3, M_WAITOK | E4)) == NULL) {
-...
-    } else {
+    buf = (T)realloc(E1, E2, E3, M_WAITOK | E4);
...
-}
|
-    if ((buf = (T)realloc(E1, E2, E3, E4 | M_WAITOK)) == NULL) {
-...
-    } else {
+    buf = (T)realloc(E1, E2, E3, E4 | M_WAITOK);
...
-}
|
-   if ((buf = (T)reallocf(E1, E2, E3, M_WAITOK)) == NULL) {
-...
-   } else {
+   buf = (T)reallocf(E1, E2, E3, M_WAITOK);
...
-}
|
-   if ((buf = (T)reallocf(E1, E2, E3, EM_WAITOK)) == NULL) {
-...
-   } else {
+   buf = (T)reallocf(E1, E2, E3, E4 | M_WAITOK | E5);
...
-}
|
-   if ((buf = (T)reallocf(E1, E2, E3, M_WAITOK | E4)) == NULL) {
-...
-   } else {
+   buf = (T)reallocf(E1, E2, E3, M_WAITOK | E4);
...
-}
|
-   if ((buf = (T)reallocf(E1, E2, E3, E4 | M_WAITOK)) == NULL) {
-...
-   } else {
+   buf = (T)reallocf(E1, E2, E3, E4 | M_WAITOK);
...
-}
)


@@
// This is the rule header; metavariables must be declared here
type T;
identifier buf;
identifier flag;
expression E1, E2, E3, E4, E5;
@@
(
    buf = (T)malloc(E1, E2, M_WAITOK)
|
    buf = (T)mallocarray(E1, E2, E3, M_WAITOK)
|
    buf = (T)realloc(E1, E2, E3, M_WAITOK)
|
    buf = (T)reallocf(E1, E2, E3, M_WAITOK)
|
    buf = (T)malloc(E1, E2, M_WAITOK | E4)
|
    buf = (T)mallocarray(E1, E2, E3, M_WAITOK | E4)
|
    buf = (T)realloc(E1, E2, E3, M_WAITOK | E4)
|
    buf = (T)reallocf(E1, E2, E3, M_WAITOK | E4)
|
    buf = (T)malloc(E1, E2, E4 | M_WAITOK)
|
    buf = (T)mallocarray(E1, E2, E3, E4 | M_WAITOK)
|
    buf = (T)realloc(E1, E2, E3, E4 | M_WAITOK)
|
    buf = (T)reallocf(E1, E2, E3, E4 | M_WAITOK)
|
    buf = (T)malloc(E1, E2, E4 | M_WAITOK | E5)
|
    buf = (T)mallocarray(E1, E2, E3, E4 | M_WAITOK | E5)
|
    buf = (T)realloc(E1, E2, E3, E4 | M_WAITOK | E5)
|
    buf = (T)reallocf(E1, E2, E3, E4 | M_WAITOK | E5)
//|
//    T buf = (T)malloc(E1, E2, M_WAITOK)
//|
//    T buf = (T)mallocarray(E1, E2, E3, M_WAITOK)
//|
//    T buf = (T)realloc(E1, E2, E3, M_WAITOK)
//|
//    T buf = (T)reallocf(E1, E2, E3, M_WAITOK)
//|
//    T buf = (T)malloc(E1, E2, flag | M_WAITOK)
//|
//    T buf = (T)mallocarray(E1, E2, E3, flag | M_WAITOK)
//|
//    T buf = (T)realloc(E1, E2, E3, flag | M_WAITOK)
//|
//    T buf = (T)reallocf(E1, E2, E3, flag | M_WAITOK)
)
...
(
-    if (buf == (T)NULL) {
-...
-    }
|
-    if (buf == (T)NULL) {
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
-    if (buf != (T)NULL) {
...
-    }
|
-    if (buf != (T)NULL) {
...
-} else {
-...
-}
)

@@
// This is the rule header; metavariables must be declared here
type T;
identifier buf;
identifier flag;
expression E1, E2, E3, E4, E5;
@@

(
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
-    if ((buf = (T)mallocarray(E1, E2, E3, E4 | M_WAITOK)) == (T)NULL) {
-...
-    }
+    buf = (T)mallocarray(E1, E2, E3, E4 | M_WAITOK);
|
-    if ((buf = (T)mallocarray(E1, E2, E3, M_WAITOK | E4)) == (T)NULL) {
-...
-    }
+    buf = (T)mallocarray(E1, E2, E3, M_WAITOK | E4);
|
-    if ((buf = (T)mallocarray(E1, E2, E3, E4 | M_WAITOK | E5)) == (T)NULL) {
-...
-    }
+    buf = (T)mallocarray(E1, E2, E3, E4 | M_WAITOK | E5);
|
-    if ((buf = (T)mallocarray(E1, E2, E3, M_WAITOK)) == (T)NULL) {
-...
-    }
+    buf = (T)mallocarray(E1, E2, E3, M_WAITOK);
|
-    if ((buf = (T)realloc(E1, E2, E3, M_WAITOK)) == (T)NULL) {
-...
-    }
+    buf = (T)realloc(E1, E2, E3, M_WAITOK);
|
-    if ((buf = (T)realloc(E1, E2, E3, E4 | M_WAITOK | E5)) == (T)NULL) {
-...
-    }
+    buf = (T)realloc(E1, E2, E3, E4 | M_WAITOK | E5);
|
-    if ((buf = (T)realloc(E1, E2, E3, M_WAITOK | E4)) == (T)NULL) {
-...
-    }
+    buf = (T)realloc(E1, E2, E3, M_WAITOK | E4);
|
-    if ((buf = (T)realloc(E1, E2, E3, E4 | M_WAITOK)) == (T)NULL) {
-...
-    }
+    buf = (T)realloc(E1, E2, E3, E4 | M_WAITOK);
|
-   if ((buf = (T)reallocf(E1, E2, E3, M_WAITOK)) == (T)NULL) {
-...
-   }
+   buf = (T)reallocf(E1, E2, E3, M_WAITOK);
|
-   if ((buf = (T)reallocf(E1, E2, E3, EM_WAITOK)) == (T)NULL) {
-...
-   }
+   buf = (T)reallocf(E1, E2, E3, E4 | M_WAITOK | E5);
|
-   if ((buf = (T)reallocf(E1, E2, E3, M_WAITOK | E4)) == (T)NULL) {
-...
-   }
+   buf = (T)reallocf(E1, E2, E3, M_WAITOK | E4);
|
-   if ((buf = (T)reallocf(E1, E2, E3, E4 | M_WAITOK)) == (T)NULL) {
-...
-   }
+   buf = (T)reallocf(E1, E2, E3, E4 | M_WAITOK);
)

@@
// This is the rule header; metavariables must be declared here
type T;
identifier buf;
identifier flag;
expression E1, E2, E3, E4, E5;
@@

(
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
+    buf = (T)mallocarray(E1, E2, E3, E4 | M_WAITOK);
-    if ((buf = (T)mallocarray(E1, E2, E3, E4 | M_WAITOK)) != (T)NULL) {
...
-    }
|
+    buf = (T)mallocarray(E1, E2, E3, M_WAITOK | E4);
-    if ((buf = (T)mallocarray(E1, E2, E3, M_WAITOK | E4)) != (T)NULL) {
...
-    }
|
+    buf = (T)mallocarray(E1, E2, E3, E4 | M_WAITOK | E5);
-    if ((buf = (T)mallocarray(E1, E2, E3, E4 | M_WAITOK | E5)) != (T)NULL) {
...
-    }
|
+    buf = (T)mallocarray(E1, E2, E3, M_WAITOK);
-    if ((buf = (T)mallocarray(E1, E2, E3, M_WAITOK)) != (T)NULL) {
...
-    }
|
+    buf = (T)realloc(E1, E2, E3, M_WAITOK);
-    if ((buf = (T)realloc(E1, E2, E3, M_WAITOK)) != (T)NULL) {
...
-    }
|
+    buf = (T)realloc(E1, E2, E3, E4 | M_WAITOK | E5);
-    if ((buf = (T)realloc(E1, E2, E3, E4 | M_WAITOK | E5)) != (T)NULL) {
...
-    }
|
+    buf = (T)realloc(E1, E2, E3, M_WAITOK | E4);
-    if ((buf = (T)realloc(E1, E2, E3, M_WAITOK | E4)) != (T)NULL) {
...
-    }
|
+    buf = (T)realloc(E1, E2, E3, E4 | M_WAITOK);
-    if ((buf = (T)realloc(E1, E2, E3, E4 | M_WAITOK)) != (T)NULL) {
...
-    }
|
+   buf = (T)reallocf(E1, E2, E3, M_WAITOK);
-   if ((buf = (T)reallocf(E1, E2, E3, M_WAITOK)) != (T)NULL) {
...
-   }
|
+   buf = (T)reallocf(E1, E2, E3, E4 | M_WAITOK | E5);
-   if ((buf = (T)reallocf(E1, E2, E3, EM_WAITOK)) != (T)NULL) {
...
-   }
|
+   buf = (T)reallocf(E1, E2, E3, M_WAITOK | E4);
-   if ((buf = (T)reallocf(E1, E2, E3, M_WAITOK | E4)) != (T)NULL) {
...
-   }
|
+   buf = (T)reallocf(E1, E2, E3, E4 | M_WAITOK);
-   if ((buf = (T)reallocf(E1, E2, E3, E4 | M_WAITOK)) != (T)NULL) {
...
-   }
)

@@
// This is the rule header; metavariables must be declared here
type T;
identifier buf;
identifier flag;
expression E1, E2, E3, E4, E5;
@@

(
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
+    buf = (T)mallocarray(E1, E2, E3, E4 | M_WAITOK);
-    if ((buf = (T)mallocarray(E1, E2, E3, E4 | M_WAITOK)) != (T)NULL) {
...
-    } else  {
-...
-}
|
+    buf = (T)mallocarray(E1, E2, E3, M_WAITOK | E4);
-    if ((buf = (T)mallocarray(E1, E2, E3, M_WAITOK | E4)) != (T)NULL) {
...
-    } else  {
-...
-}
|
+    buf = (T)mallocarray(E1, E2, E3, E4 | M_WAITOK | E5);
-    if ((buf = (T)mallocarray(E1, E2, E3, E4 | M_WAITOK | E5)) != (T)NULL) {
...
-    } else  {
-...
-}
|
+    buf = (T)mallocarray(E1, E2, E3, M_WAITOK);
-    if ((buf = (T)mallocarray(E1, E2, E3, M_WAITOK)) != (T)NULL) {
...
-    } else  {
-...
-}
|
+    buf = (T)realloc(E1, E2, E3, M_WAITOK);
-    if ((buf = (T)realloc(E1, E2, E3, M_WAITOK)) != (T)NULL) {
...
-    } else  {
-...
-}
|
+    buf = (T)realloc(E1, E2, E3, E4 | M_WAITOK | E5);
-    if ((buf = (T)realloc(E1, E2, E3, E4 | M_WAITOK | E5)) != (T)NULL) {
...
-    } else  {
-...
-}
|
+    buf = (T)realloc(E1, E2, E3, M_WAITOK | E4);
-    if ((buf = (T)realloc(E1, E2, E3, M_WAITOK | E4)) != (T)NULL) {
...
-    } else  {
-...
-}
|
+    buf = (T)realloc(E1, E2, E3, E4 | M_WAITOK);
-    if ((buf = (T)realloc(E1, E2, E3, E4 | M_WAITOK)) != (T)NULL) {
...
-    } else  {
-...
-}
|
+   buf = (T)reallocf(E1, E2, E3, M_WAITOK);
-   if ((buf = (T)reallocf(E1, E2, E3, M_WAITOK)) != (T)NULL) {
...
-    } else  {
-...
-}
|
+   buf = (T)reallocf(E1, E2, E3, E4 | M_WAITOK | E5);
-   if ((buf = (T)reallocf(E1, E2, E3, EM_WAITOK)) != (T)NULL) {
...
-    } else  {
-...
-}
|
+   buf = (T)reallocf(E1, E2, E3, M_WAITOK | E4);
-   if ((buf = (T)reallocf(E1, E2, E3, M_WAITOK | E4)) != (T)NULL) {
...
-    } else  {
-...
-}
|
+   buf = (T)reallocf(E1, E2, E3, E4 | M_WAITOK);
-   if ((buf = (T)reallocf(E1, E2, E3, E4 | M_WAITOK)) != (T)NULL) {
...
-    } else  {
-...
-}
)

@@
// This is the rule header; metavariables must be declared here
type T;
identifier buf;
identifier flag;
expression E1, E2, E3, E4, E5;
@@

(
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
-    if ((buf = (T)mallocarray(E1, E2, E3, E4 | M_WAITOK)) == (T)NULL) {
-...
-    } else {
+    buf = (T)mallocarray(E1, E2, E3, E4 | M_WAITOK);
...
-}
|
-    if ((buf = (T)mallocarray(E1, E2, E3, M_WAITOK | E4)) == (T)NULL) {
-...
-    } else {
+    buf = (T)mallocarray(E1, E2, E3, M_WAITOK | E4);
...
-}
|
-    if ((buf = (T)mallocarray(E1, E2, E3, E4 | M_WAITOK | E5)) == (T)NULL) {
-...
-    } else {
+    buf = (T)mallocarray(E1, E2, E3, E4 | M_WAITOK | E5);
...
-}
|
-    if ((buf = (T)mallocarray(E1, E2, E3, M_WAITOK)) == (T)NULL) {
-...
-    } else {
+    buf = (T)mallocarray(E1, E2, E3, M_WAITOK);
...
-}
|
-    if ((buf = (T)realloc(E1, E2, E3, M_WAITOK)) == (T)NULL) {
-...
-    } else {
+    buf = (T)realloc(E1, E2, E3, M_WAITOK);
...
-}
|
-    if ((buf = (T)realloc(E1, E2, E3, E4 | M_WAITOK | E5)) == (T)NULL) {
-...
-    } else {
+    buf = (T)realloc(E1, E2, E3, E4 | M_WAITOK | E5);
...
-}
|
-    if ((buf = (T)realloc(E1, E2, E3, M_WAITOK | E4)) == (T)NULL) {
-...
-    } else {
+    buf = (T)realloc(E1, E2, E3, M_WAITOK | E4);
...
-}
|
-    if ((buf = (T)realloc(E1, E2, E3, E4 | M_WAITOK)) == (T)NULL) {
-...
-    } else {
+    buf = (T)realloc(E1, E2, E3, E4 | M_WAITOK);
...
-}
|
-   if ((buf = (T)reallocf(E1, E2, E3, M_WAITOK)) == (T)NULL) {
-...
-   } else {
+   buf = (T)reallocf(E1, E2, E3, M_WAITOK);
...
-}
|
-   if ((buf = (T)reallocf(E1, E2, E3, EM_WAITOK)) == (T)NULL) {
-...
-   } else {
+   buf = (T)reallocf(E1, E2, E3, E4 | M_WAITOK | E5);
...
-}
|
-   if ((buf = (T)reallocf(E1, E2, E3, M_WAITOK | E4)) == (T)NULL) {
-...
-   } else {
+   buf = (T)reallocf(E1, E2, E3, M_WAITOK | E4);
...
-}
|
-   if ((buf = (T)reallocf(E1, E2, E3, E4 | M_WAITOK)) == (T)NULL) {
-...
-   } else {
+   buf = (T)reallocf(E1, E2, E3, E4 | M_WAITOK);
...
-}
)

@@
// This is the rule header; metavariables must be declared here
type T;
identifier buf;
identifier flag;
expression E1, E2, E3, E4, E5;
@@
(
    buf = malloc(E1, E2, M_WAITOK)
|
    buf = mallocarray(E1, E2, E3, M_WAITOK)
|
    buf = realloc(E1, E2, E3, M_WAITOK)
|
    buf = reallocf(E1, E2, E3, M_WAITOK)
|
    buf = malloc(E1, E2, M_WAITOK | E4)
|
    buf = mallocarray(E1, E2, E3, M_WAITOK | E4)
|
    buf = realloc(E1, E2, E3, M_WAITOK | E4)
|
    buf = reallocf(E1, E2, E3, M_WAITOK | E4)
|
    buf = malloc(E1, E2, E4 | M_WAITOK)
|
    buf = mallocarray(E1, E2, E3, E4 | M_WAITOK)
|
    buf = realloc(E1, E2, E3, E4 | M_WAITOK)
|
    buf = reallocf(E1, E2, E3, E4 | M_WAITOK)
|
    buf = malloc(E1, E2, E4 | M_WAITOK | E5)
|
    buf = mallocarray(E1, E2, E3, E4 | M_WAITOK | E5)
|
    buf = realloc(E1, E2, E3, E4 | M_WAITOK | E5)
|
    buf = reallocf(E1, E2, E3, E4 | M_WAITOK | E5)
//|
//    T buf = malloc(E1, E2, M_WAITOK)
//|
//    T buf = mallocarray(E1, E2, E3, M_WAITOK)
//|
//    T buf = realloc(E1, E2, E3, M_WAITOK)
//|
//    T buf = reallocf(E1, E2, E3, M_WAITOK)
//|
//    T buf = malloc(E1, E2, flag | M_WAITOK)
//|
//    T buf = mallocarray(E1, E2, E3, flag | M_WAITOK)
//|
//    T buf = realloc(E1, E2, E3, flag | M_WAITOK)
//|
//    T buf = reallocf(E1, E2, E3, flag | M_WAITOK)
)
...
(
-    if (buf == (T)NULL) {
-...
-    }
|
-    if (buf == (T)NULL) {
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
-    if (buf != (T)NULL) {
...
-    }
|
-    if (buf != (T)NULL) {
...
-} else {
-...
-}
)

@@
// This is the rule header; metavariables must be declared here
type T;
identifier buf;
identifier flag;
expression E1, E2, E3, E4, E5;
@@

(
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
-    if ((buf = mallocarray(E1, E2, E3, E4 | M_WAITOK)) == (T)NULL) {
-...
-    }
+    buf = mallocarray(E1, E2, E3, E4 | M_WAITOK);
|
-    if ((buf = mallocarray(E1, E2, E3, M_WAITOK | E4)) == (T)NULL) {
-...
-    }
+    buf = mallocarray(E1, E2, E3, M_WAITOK | E4);
|
-    if ((buf = mallocarray(E1, E2, E3, E4 | M_WAITOK | E5)) == (T)NULL) {
-...
-    }
+    buf = mallocarray(E1, E2, E3, E4 | M_WAITOK | E5);
|
-    if ((buf = mallocarray(E1, E2, E3, M_WAITOK)) == (T)NULL) {
-...
-    }
+    buf = mallocarray(E1, E2, E3, M_WAITOK);
|
-    if ((buf = realloc(E1, E2, E3, M_WAITOK)) == (T)NULL) {
-...
-    }
+    buf = realloc(E1, E2, E3, M_WAITOK);
|
-    if ((buf = realloc(E1, E2, E3, E4 | M_WAITOK | E5)) == (T)NULL) {
-...
-    }
+    buf = realloc(E1, E2, E3, E4 | M_WAITOK | E5);
|
-    if ((buf = realloc(E1, E2, E3, M_WAITOK | E4)) == (T)NULL) {
-...
-    }
+    buf = realloc(E1, E2, E3, M_WAITOK | E4);
|
-    if ((buf = realloc(E1, E2, E3, E4 | M_WAITOK)) == (T)NULL) {
-...
-    }
+    buf = realloc(E1, E2, E3, E4 | M_WAITOK);
|
-   if ((buf = reallocf(E1, E2, E3, M_WAITOK)) == (T)NULL) {
-...
-   }
+   buf = reallocf(E1, E2, E3, M_WAITOK);
|
-   if ((buf = reallocf(E1, E2, E3, EM_WAITOK)) == (T)NULL) {
-...
-   }
+   buf = reallocf(E1, E2, E3, E4 | M_WAITOK | E5);
|
-   if ((buf = reallocf(E1, E2, E3, M_WAITOK | E4)) == (T)NULL) {
-...
-   }
+   buf = reallocf(E1, E2, E3, M_WAITOK | E4);
|
-   if ((buf = reallocf(E1, E2, E3, E4 | M_WAITOK)) == (T)NULL) {
-...
-   }
+   buf = reallocf(E1, E2, E3, E4 | M_WAITOK);
)

@@
// This is the rule header; metavariables must be declared here
type T;
identifier buf;
identifier flag;
expression E1, E2, E3, E4, E5;
@@

(
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
+    buf = mallocarray(E1, E2, E3, E4 | M_WAITOK);
-    if ((buf = mallocarray(E1, E2, E3, E4 | M_WAITOK)) != (T)NULL) {
...
-    }
|
+    buf = mallocarray(E1, E2, E3, M_WAITOK | E4);
-    if ((buf = mallocarray(E1, E2, E3, M_WAITOK | E4)) != (T)NULL) {
...
-    }
|
+    buf = mallocarray(E1, E2, E3, E4 | M_WAITOK | E5);
-    if ((buf = mallocarray(E1, E2, E3, E4 | M_WAITOK | E5)) != (T)NULL) {
...
-    }
|
+    buf = mallocarray(E1, E2, E3, M_WAITOK);
-    if ((buf = mallocarray(E1, E2, E3, M_WAITOK)) != (T)NULL) {
...
-    }
|
+    buf = realloc(E1, E2, E3, M_WAITOK);
-    if ((buf = realloc(E1, E2, E3, M_WAITOK)) != (T)NULL) {
...
-    }
|
+    buf = realloc(E1, E2, E3, E4 | M_WAITOK | E5);
-    if ((buf = realloc(E1, E2, E3, E4 | M_WAITOK | E5)) != (T)NULL) {
...
-    }
|
+    buf = realloc(E1, E2, E3, M_WAITOK | E4);
-    if ((buf = realloc(E1, E2, E3, M_WAITOK | E4)) != (T)NULL) {
...
-    }
|
+    buf = realloc(E1, E2, E3, E4 | M_WAITOK);
-    if ((buf = realloc(E1, E2, E3, E4 | M_WAITOK)) != (T)NULL) {
...
-    }
|
+   buf = reallocf(E1, E2, E3, M_WAITOK);
-   if ((buf = reallocf(E1, E2, E3, M_WAITOK)) != (T)NULL) {
...
-   }
|
+   buf = reallocf(E1, E2, E3, E4 | M_WAITOK | E5);
-   if ((buf = reallocf(E1, E2, E3, EM_WAITOK)) != (T)NULL) {
...
-   }
|
+   buf = reallocf(E1, E2, E3, M_WAITOK | E4);
-   if ((buf = reallocf(E1, E2, E3, M_WAITOK | E4)) != (T)NULL) {
...
-   }
|
+   buf = reallocf(E1, E2, E3, E4 | M_WAITOK);
-   if ((buf = reallocf(E1, E2, E3, E4 | M_WAITOK)) != (T)NULL) {
...
-   }
)

@@
// This is the rule header; metavariables must be declared here
type T;
identifier buf;
identifier flag;
expression E1, E2, E3, E4, E5;
@@

(
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
+    buf = mallocarray(E1, E2, E3, E4 | M_WAITOK);
-    if ((buf = mallocarray(E1, E2, E3, E4 | M_WAITOK)) != (T)NULL) {
...
-    } else  {
-...
-}
|
+    buf = mallocarray(E1, E2, E3, M_WAITOK | E4);
-    if ((buf = mallocarray(E1, E2, E3, M_WAITOK | E4)) != (T)NULL) {
...
-    } else  {
-...
-}
|
+    buf = mallocarray(E1, E2, E3, E4 | M_WAITOK | E5);
-    if ((buf = mallocarray(E1, E2, E3, E4 | M_WAITOK | E5)) != (T)NULL) {
...
-    } else  {
-...
-}
|
+    buf = mallocarray(E1, E2, E3, M_WAITOK);
-    if ((buf = mallocarray(E1, E2, E3, M_WAITOK)) != (T)NULL) {
...
-    } else  {
-...
-}
|
+    buf = realloc(E1, E2, E3, M_WAITOK);
-    if ((buf = realloc(E1, E2, E3, M_WAITOK)) != (T)NULL) {
...
-    } else  {
-...
-}
|
+    buf = realloc(E1, E2, E3, E4 | M_WAITOK | E5);
-    if ((buf = realloc(E1, E2, E3, E4 | M_WAITOK | E5)) != (T)NULL) {
...
-    } else  {
-...
-}
|
+    buf = realloc(E1, E2, E3, M_WAITOK | E4);
-    if ((buf = realloc(E1, E2, E3, M_WAITOK | E4)) != (T)NULL) {
...
-    } else  {
-...
-}
|
+    buf = realloc(E1, E2, E3, E4 | M_WAITOK);
-    if ((buf = realloc(E1, E2, E3, E4 | M_WAITOK)) != (T)NULL) {
...
-    } else  {
-...
-}
|
+   buf = reallocf(E1, E2, E3, M_WAITOK);
-   if ((buf = reallocf(E1, E2, E3, M_WAITOK)) != (T)NULL) {
...
-    } else  {
-...
-}
|
+   buf = reallocf(E1, E2, E3, E4 | M_WAITOK | E5);
-   if ((buf = reallocf(E1, E2, E3, EM_WAITOK)) != (T)NULL) {
...
-    } else  {
-...
-}
|
+   buf = reallocf(E1, E2, E3, M_WAITOK | E4);
-   if ((buf = reallocf(E1, E2, E3, M_WAITOK | E4)) != (T)NULL) {
...
-    } else  {
-...
-}
|
+   buf = reallocf(E1, E2, E3, E4 | M_WAITOK);
-   if ((buf = reallocf(E1, E2, E3, E4 | M_WAITOK)) != (T)NULL) {
...
-    } else  {
-...
-}
)

@@
// This is the rule header; metavariables must be declared here
type T;
identifier buf;
identifier flag;
expression E1, E2, E3, E4, E5;
@@

(
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
-    if ((buf = mallocarray(E1, E2, E3, E4 | M_WAITOK)) == (T)NULL) {
-...
-    } else {
+    buf = mallocarray(E1, E2, E3, E4 | M_WAITOK);
...
-}
|
-    if ((buf = mallocarray(E1, E2, E3, M_WAITOK | E4)) == (T)NULL) {
-...
-    } else {
+    buf = mallocarray(E1, E2, E3, M_WAITOK | E4);
...
-}
|
-    if ((buf = mallocarray(E1, E2, E3, E4 | M_WAITOK | E5)) == (T)NULL) {
-...
-    } else {
+    buf = mallocarray(E1, E2, E3, E4 | M_WAITOK | E5);
...
-}
|
-    if ((buf = mallocarray(E1, E2, E3, M_WAITOK)) == (T)NULL) {
-...
-    } else {
+    buf = mallocarray(E1, E2, E3, M_WAITOK);
...
-}
|
-    if ((buf = realloc(E1, E2, E3, M_WAITOK)) == (T)NULL) {
-...
-    } else {
+    buf = realloc(E1, E2, E3, M_WAITOK);
...
-}
|
-    if ((buf = realloc(E1, E2, E3, E4 | M_WAITOK | E5)) == (T)NULL) {
-...
-    } else {
+    buf = realloc(E1, E2, E3, E4 | M_WAITOK | E5);
...
-}
|
-    if ((buf = realloc(E1, E2, E3, M_WAITOK | E4)) == (T)NULL) {
-...
-    } else {
+    buf = realloc(E1, E2, E3, M_WAITOK | E4);
...
-}
|
-    if ((buf = realloc(E1, E2, E3, E4 | M_WAITOK)) == (T)NULL) {
-...
-    } else {
+    buf = realloc(E1, E2, E3, E4 | M_WAITOK);
...
-}
|
-   if ((buf = reallocf(E1, E2, E3, M_WAITOK)) == (T)NULL) {
-...
-   } else {
+   buf = reallocf(E1, E2, E3, M_WAITOK);
...
-}
|
-   if ((buf = reallocf(E1, E2, E3, EM_WAITOK)) == (T)NULL) {
-...
-   } else {
+   buf = reallocf(E1, E2, E3, E4 | M_WAITOK | E5);
...
-}
|
-   if ((buf = reallocf(E1, E2, E3, M_WAITOK | E4)) == (T)NULL) {
-...
-   } else {
+   buf = reallocf(E1, E2, E3, M_WAITOK | E4);
...
-}
|
-   if ((buf = reallocf(E1, E2, E3, E4 | M_WAITOK)) == (T)NULL) {
-...
-   } else {
+   buf = reallocf(E1, E2, E3, E4 | M_WAITOK);
...
-}
)
