#import "application.h"
#import "observer.h"
#import "event.h"
#import "entity.h"
#define MAX_OBSERVERS 20

class Subject //In which we send notifications
{
public:
  ~Subject(){};

  //Observer Storage
  Observer *observers_[MAX_OBSERVERS];
  int numObservers_;
  void addObserver(Observer &observer);
  void removeObserver(Observer &observer);
  void notify( Event &event);
};