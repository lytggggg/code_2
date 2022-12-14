??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
 *   C o p y r i g h t   ( C )   2 0 1 0   A R M   L i m i t e d .   A l l   r i g h t s   r e s e r v e d .  
 *  
 *   $ D a t e :                 2 9 .   N o v e m b e r   2 0 1 0  
 *   $ R e v i s i o n :         V 1 . 0 . 3  
 *  
 *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
 *  
 *   T i t l e :                 m a t h _ h e l p e r . h  
 *  
 *  
 *   D e s c r i p t i o n : 	 P r o t o t y p e s   o f   a l l   h e l p e r   f u n c t i o n s   r e q u i r e d .  
 *  
 *   T a r g e t   P r o c e s s o r :   C o r t e x - M 4 / C o r t e x - M 3  
 *  
 *   V e r s i o n   1 . 0 . 3   2 0 1 0 / 1 1 / 2 9  
 *         R e - o r g a n i z e d   t h e   C M S I S   f o l d e r s   a n d   u p d a t e d   d o c u m e n t a t i o n .  
 *  
 *   V e r s i o n   1 . 0 . 2   2 0 1 0 / 1 1 / 1 1  
 *         D o c u m e n t a t i o n   u p d a t e d .  
 *  
 *   V e r s i o n   1 . 0 . 1   2 0 1 0 / 1 0 / 0 5  
 *         P r o d u c t i o n   r e l e a s e   a n d   r e v i e w   c o m m e n t s   i n c o r p o r a t e d .  
 *  
 *   V e r s i o n   1 . 0 . 0   2 0 1 0 / 0 9 / 2 0  
 *         P r o d u c t i o n   r e l e a s e   a n d   r e v i e w   c o m m e n t s   i n c o r p o r a t e d .  
 *  
 *   V e r s i o n   0 . 0 . 7     2 0 1 0 / 0 6 / 1 0  
 *         M i s r a - C   c h a n g e s   d o n e  
 *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
  
 # i f n d e f   M A T H _ H E L P E R _ H  
 # d e f i n e   M A T H _ H E L P E R _ H  
  
 # i n c l u d e   " a r m _ m a t h . h "  
  
 f l o a t   a r m _ s n r _ f 3 2 ( f l o a t   * p R e f ,   f l o a t   * p T e s t ,     u i n t 3 2 _ t   b u f f S i z e ) ;  
 d o u b l e   a r m _ s n r _ f 6 4 ( d o u b l e   * p R e f ,   d o u b l e   * p T e s t ,     u i n t 3 2 _ t   b u f f S i z e ) ;  
 v o i d   a r m _ f l o a t _ t o _ q 1 2 _ 2 0 ( f l o a t   * p I n ,   q 3 1 _ t   *   p O u t ,   u i n t 3 2 _ t   n u m S a m p l e s ) ;  
 v o i d   a r m _ p r o v i d e _ g u a r d _ b i t s _ q 1 5 ( q 1 5 _ t   * i n p u t _ b u f ,   u i n t 3 2 _ t   b l o c k S i z e ,   u i n t 3 2 _ t   g u a r d _ b i t s ) ;  
 v o i d   a r m _ p r o v i d e _ g u a r d _ b i t s _ q 3 1 ( q 3 1 _ t   * i n p u t _ b u f ,   u i n t 3 2 _ t   b l o c k S i z e ,   u i n t 3 2 _ t   g u a r d _ b i t s ) ;  
 v o i d   a r m _ f l o a t _ t o _ q 1 4 ( f l o a t   * p I n ,   q 1 5 _ t   * p O u t ,   u i n t 3 2 _ t   n u m S a m p l e s ) ;  
 v o i d   a r m _ f l o a t _ t o _ q 2 9 ( f l o a t   * p I n ,   q 3 1 _ t   * p O u t ,   u i n t 3 2 _ t   n u m S a m p l e s ) ;  
 v o i d   a r m _ f l o a t _ t o _ q 2 8 ( f l o a t   * p I n ,   q 3 1 _ t   * p O u t ,   u i n t 3 2 _ t   n u m S a m p l e s ) ;  
 v o i d   a r m _ f l o a t _ t o _ q 3 0 ( f l o a t   * p I n ,   q 3 1 _ t   * p O u t ,   u i n t 3 2 _ t   n u m S a m p l e s ) ;  
 v o i d   a r m _ c l i p _ f 3 2 ( f l o a t   * p I n ,   u i n t 3 2 _ t   n u m S a m p l e s ) ;  
 u i n t 3 2 _ t   a r m _ c a l c _ g u a r d _ b i t s ( u i n t 3 2 _ t   n u m _ a d d s ) ;  
 v o i d   a r m _ a p p l y _ g u a r d _ b i t s   ( f l o a t 3 2 _ t   *   p I n ,   u i n t 3 2 _ t   n u m S a m p l e s ,   u i n t 3 2 _ t   g u a r d _ b i t s ) ;  
 u i n t 3 2 _ t   a r m _ c o m p a r e _ f i x e d _ q 1 5 ( q 1 5 _ t   * p I n ,   q 1 5 _ t   *   p O u t ,   u i n t 3 2 _ t   n u m S a m p l e s ) ;  
 u i n t 3 2 _ t   a r m _ c o m p a r e _ f i x e d _ q 3 1 ( q 3 1 _ t   * p I n ,   q 3 1 _ t   * p O u t ,   u i n t 3 2 _ t   n u m S a m p l e s ) ;  
 u i n t 3 2 _ t   a r m _ c a l c _ 2 p o w ( u i n t 3 2 _ t   g u a r d _ b i t s ) ;  
 # e n d i f  