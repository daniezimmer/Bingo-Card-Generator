









class Program
{

public:
	static void Start();

private:
	static bool IsExiting();

	static void ShowMenu();

	enum _state { Uninitialized,
					ShowingMenu, Exiting };

	static GameState _gameState;
	static sf::RenderWindow _mainWindow;
};
