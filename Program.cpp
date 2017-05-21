void Program::Start(void)
{
  if(_State != Uninitialized)
    return;

//  _mainWindow.Create(sf::VideoMode(1024,768,32),"Hacker");

  _State = Game::ShowingSplash;

  while(!IsExiting())
  {
    GameLoop();
  }

  _mainWindow.Close();
}
