#!/bin/bash
echo "commit>"
read text
git add .
git commit -m "$text"
git push
