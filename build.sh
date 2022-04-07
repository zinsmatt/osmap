FOLDER="/home/mzins/dev/ORB_SLAM2_obj"



protoc --cpp_out=. osmap.proto
cp osmap.pb.cc "${FOLDER}/src/"
cp src/Osmap.cpp "${FOLDER}/src/"

cp osmap.pb.h "${FOLDER}/include/"
cp include/Osmap.h "${FOLDER}/include/"

cd "$FOLDER/build"
make -j16