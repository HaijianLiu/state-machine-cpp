//
//  main.cpp
//  StateMachine
//
//  Created by haijian on 2017/05/20.
//  Copyright © 2017 haijian. All rights reserved.
//

#include <iostream>

char stateID = '1';

class StateMachine;

class TitleScene{
public:
  void Update(){
    std::cout << "i am TitleScene Update\n";
    std::cin >> stateID;
  }
};
class GameScene{
public:
  void Update(){
    std::cout << "i am GameScene Update\n";
    std::cin >> stateID;
  }
};

class State{
public:
  TitleScene ts;
  GameScene gs;
};

class StateMachine{
public:
  StateMachine(){
  }
  void StateSwitch(){
    switch (stateID) {
      case '1': st.ts.Update(); break;
      case '2': st.gs.Update(); break;
      default: std::cout << "No such Scene\n"; std::cin >> stateID;
    }
  }
private:
  State st;
};

int main(int argc, const char * argv[]) {

  StateMachine fsm;

  while (true) {
    fsm.StateSwitch();
  }

  return 0;
}
