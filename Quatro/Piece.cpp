module piece;
quarto::Piece::Color quarto::Piece::GetColor() const
{
	return m_color;
}
quarto::Piece::Height quarto::Piece::GetHeight() const
{
	return m_height;
}
quarto::Piece::Shape quarto::Piece::GetShape() const
{
	return m_shape;
}
quarto::Piece::Body quarto::Piece::GetBody() const
{
	return m_body;
}
std::ostream& quarto::operator<<(std::ostream& os, const quarto::Piece& piece)
{
	os << std::format("{}{}{}{}", 
		static_cast<int>(piece.GetColor()), 
		static_cast<int>(piece.GetHeight()), 
		static_cast<int>(piece.GetShape()), 
		static_cast<int>(piece.GetBody()));
	return os;
}


