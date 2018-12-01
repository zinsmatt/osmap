/*
 * dummymap.h
 *
 *  Created on: 17 nov. 2018
 *      Author: alejandro
 */

#ifndef DUMMYMAP_H_
#define DUMMYMAP_H_

#include <set>
#include <opencv2/core.hpp>

using namespace std;
using namespace cv;

class MapPoint{
public:
  unsigned int mnId;
  bool mbBad = false;
  Mat mWorldPos;
  float mnVisible;
  float mnFound;
  Mat mDescriptor;
};

class KeyFrame{
public:
  static unsigned int nNextId;
  unsigned int mnId;
  bool mbBad = false;
  double mTimeStamp = 0;
  Mat mTcw;
  Mat mK;
  Mat mDescriptors;
  unsigned int N;
  vector<KeyPoint> mvKeysUn;
  vector<MapPoint*> mvpMapPoints;
  set<KeyFrame*> mspLoopEdges;
};

class Map{
public:
  set<MapPoint*> mspMapPoints;
  set<KeyFrame*> mspKeyFrames;
};



#endif /* DUMMYMAP_H_ */
