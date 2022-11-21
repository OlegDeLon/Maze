#include "grotto.h"
#include "vlad.h"
// #include "maze.h"
// #include "throughmaze.h"

int main() {
  // s21::Model maze(10, 10);
  // s21::Maze_Walker walker;
  // std::pair<int, int>  start_pos(0, 0);
  // std::pair<int, int>  goal(4, 0);
  // walker.GoToWalk(start_pos, goal);

  s21::Grotto par;
  par.LoadGrotto("grot.txt");
  par.SetLiveParametrs(2, 5);
  par.PrintGrotto();

  for (int i = 0; i < 100; i++) {
    par.ChangeGrotto();
  }
  par.PrintGrotto();

  // s21::Cave cav;
  // cav.readFile("grot.txt");
  // cav.setLimits(4, 3);
  // cav.PrintGrotto();
  // for (int i = 0; i < 1; i++) {
  //   cav.updateMap();
  // }
  // cav.PrintGrotto();

  return 0;
}

// std::cout << maze_[cur.second][cur.first].left_border_ << std::endl;
// std::cout << maze_[cur.second][cur.first].upper_border_ << std::endl;
// std::cout << maze_[cur.second][cur.first].right_border_ << std::endl;
// std::cout << maze_[cur.second][cur.first].down_border_ << std::endl;
