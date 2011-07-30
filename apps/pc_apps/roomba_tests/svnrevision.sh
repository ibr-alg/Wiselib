#!/bin/bash

# try SVN
revision=$(svn info 2>&1|grep Revision|sed 's/Revision: //')
stat=$(svn status 2>&1|grep '^M')

# if that fails, try git-svn
if [ -z "$revision" ]; then
  if [ -n "`git svn info 2>/dev/null`" ]; then
    revision=$(git svn info 2>&1|grep Revision|sed 's/Revision: //')
    stat=$(git status 2>&1|grep 'modified: ')
    # ...and also check if there are un-dcommited changesets
    stat=$stat$(git diff --stat HEAD git-svn); 
  fi;
fi;

# if that fails, try git
if [ -z "$revision" ]; then
  revision=$(git rev-parse HEAD)
  stat=$(git status 2>&1|grep 'modified: ')
fi;


# if that fails, give up
if [ -z "$revision" ]; then
  $revision="not_found"
else
  if [ -n "$stat" ]; then
    status="_with_local_changes"
  else
    status=""
  fi;
fi;

echo '// This file is created automatically, your changes will be lost.' > svnrevision.h
echo '#define SVNREVISION "'$revision$status'"'  >> svnrevision.h

