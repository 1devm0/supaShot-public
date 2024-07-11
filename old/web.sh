cp -r build/m1/res .
ninja
rm -rf ./res
cd build/web
python3 -m http.server 80