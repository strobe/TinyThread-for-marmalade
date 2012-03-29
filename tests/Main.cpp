/**
 * Created by Evgeniy Tokarev 2012.
 * Copyright Evgeniy Tokarev 2012.
 */

#include "s3e.h"
#include "IwDebug.h"
#include <tinythread.h>

using tthread::thread;

struct TestData {
  TestData() : test_d(52.2133) {};
  double volatile test_d;
  static double test_st_d() {return 43.2323;};
};

void ChildThread(void* arg) {
  TestData* data = static_cast<TestData*> (arg);
  IwTrace(TINYTHREADS,("child thread got data: %f", data->test_d));  // return trash value on the ipod 2g
  IwTrace(TINYTHREADS,("child thread got data: %f", TestData::test_st_d()));  // return trash value on the ipod 2g
}


int main() {
  TestData* data = new TestData();

  thread ch_t(ChildThread, data);
  ch_t.join();

  delete data;
  return 0;
}
