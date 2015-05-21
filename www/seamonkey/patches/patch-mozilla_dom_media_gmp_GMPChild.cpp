$NetBSD: patch-mozilla_dom_media_gmp_GMPChild.cpp,v 1.1 2015/03/17 19:50:42 ryoon Exp $

--- mozilla/dom/media/gmp/GMPChild.cpp.orig	2015-03-09 05:34:53.000000000 +0000
+++ mozilla/dom/media/gmp/GMPChild.cpp
@@ -82,21 +82,14 @@ GetFileBase(const std::string& aPluginPa
   }
 #endif
 
-  nsCOMPtr<nsIFile> parent;
-  rv = aFileBase->GetParent(getter_AddRefs(parent));
-  if (NS_FAILED(rv)) {
-    return false;
-  }
-
-  nsAutoString parentLeafName;
-  rv = parent->GetLeafName(parentLeafName);
-  if (NS_FAILED(rv)) {
+  nsAutoString leafName;
+  if (NS_FAILED(aFileBase->GetLeafName(leafName))) {
     return false;
   }
 
-  aBaseName = Substring(parentLeafName,
+  aBaseName = Substring(leafName,
                         4,
-                        parentLeafName.Length() - 1);
+                        leafName.Length() - 1);
   return true;
 }
 
