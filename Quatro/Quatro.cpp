import piece;
import <iostream>;
using quarto::Piece;
int main()
{
	Piece p1{ Piece::Color::WHITE, Piece::Height::TALL, Piece::Shape::SQUARE, Piece::Body::FULL };
	std::cout << p1;
}