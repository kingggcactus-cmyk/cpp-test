#ifndef CWIN_HPP
#define CWIN_HPP
class Cwin{
    protected:
      char id;
      int width, height;
    public:
      Cwin(char ch, int w, int h);
      void show(void);
};

#endif