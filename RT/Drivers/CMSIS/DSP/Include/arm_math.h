??/ * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
   *   @ f i l e           a r m _ m a t h . h  
   *   @ b r i e f         P u b l i c   h e a d e r   f i l e   f o r   C M S I S   D S P   L i b r a r y U  
   *   @ v e r s i o n     V 1 . 5 . 3  
   *   @ d a t e           1 0 .   J a n u a r y   2 0 1 8  
   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 / *  
   *   C o p y r i g h t   ( c )   2 0 1 0 - 2 0 1 8   A r m   L i m i t e d   o r   i t s   a f f i l i a t e s .   A l l   r i g h t s   r e s e r v e d .  
   *  
   *   S P D X - L i c e n s e - I d e n t i f i e r :   A p a c h e - 2 . 0  
   *  
   *   L i c e n s e d   u n d e r   t h e   A p a c h e   L i c e n s e ,   V e r s i o n   2 . 0   ( t h e   L i c e n s e ) ;   y o u   m a y  
   *   n o t   u s e   t h i s   f i l e   e x c e p t   i n   c o m p l i a n c e   w i t h   t h e   L i c e n s e .  
   *   Y o u   m a y   o b t a i n   a   c o p y   o f   t h e   L i c e n s e   a t  
   *  
   *   w w w . a p a c h e . o r g / l i c e n s e s / L I C E N S E - 2 . 0  
   *  
   *   U n l e s s   r e q u i r e d   b y   a p p l i c a b l e   l a w   o r   a g r e e d   t o   i n   w r i t i n g ,   s o f t w a r e  
   *   d i s t r i b u t e d   u n d e r   t h e   L i c e n s e   i s   d i s t r i b u t e d   o n   a n   A S   I S   B A S I S ,   W I T H O U T  
   *   W A R R A N T I E S   O R   C O N D I T I O N S   O F   A N Y   K I N D ,   e i t h e r   e x p r e s s   o r   i m p l i e d .  
   *   S e e   t h e   L i c e n s e   f o r   t h e   s p e c i f i c   l a n g u a g e   g o v e r n i n g   p e r m i s s i o n s   a n d  
   *   l i m i t a t i o n s   u n d e r   t h e   L i c e n s e .  
   * /  
  
 / * *  
       \ m a i n p a g e   C M S I S   D S P   S o f t w a r e   L i b r a r y  
       *  
       *   I n t r o d u c t i o n  
       *   - - - - - - - - - - - -  
       *  
       *   T h i s   u s e r   m a n u a l   d e s c r i b e s   t h e   C M S I S   D S P   s o f t w a r e   l i b r a r y ,  
       *   a   s u i t e   o f   c o m m o n   s i g n a l   p r o c e s s i n g   f u n c t i o n s   f o r   u s e   o n   C o r t e x - M   p r o c e s s o r   b a s e d   d e v i c e s .  
       *  
       *   T h e   l i b r a r y   i s   d i v i d e d   i n t o   a   n u m b e r   o f   f u n c t i o n s   e a c h   c o v e r i n g   a   s p e c i f i c   c a t e g o r y :  
       *   -   B a s i c   m a t h   f u n c t i o n s  
       *   -   F a s t   m a t h   f u n c t i o n s  
       *   -   C o m p l e x   m a t h   f u n c t i o n s  
       *   -   F i l t e r s  
       *   -   M a t r i x   f u n c t i o n s  
       *   -   T r a n s f o r m s  
       *   -   M o t o r   c o n t r o l   f u n c t i o n s  
       *   -   S t a t i s t i c a l   f u n c t i o n s  
       *   -   S u p p o r t   f u n c t i o n s  
       *   -   I n t e r p o l a t i o n   f u n c t i o n s  
       *  
       *   T h e   l i b r a r y   h a s   s e p a r a t e   f u n c t i o n s   f o r   o p e r a t i n g   o n   8 - b i t   i n t e g e r s ,   1 6 - b i t   i n t e g e r s ,  
       *   3 2 - b i t   i n t e g e r   a n d   3 2 - b i t   f l o a t i n g - p o i n t   v a l u e s .  
       *  
       *   U s i n g   t h e   L i b r a r y  
       *   - - - - - - - - - - - -  
       *  
       *   T h e   l i b r a r y   i n s t a l l e r   c o n t a i n s   p r e b u i l t   v e r s i o n s   o f   t h e   l i b r a r i e s   i n   t h e   < c o d e > L i b < / c o d e >   f o l d e r .  
       *   -   a r m _ c o r t e x M 7 l f d p _ m a t h . l i b   ( C o r t e x - M 7 ,   L i t t l e   e n d i a n ,   D o u b l e   P r e c i s i o n   F l o a t i n g   P o i n t   U n i t )  
       *   -   a r m _ c o r t e x M 7 b f d p _ m a t h . l i b   ( C o r t e x - M 7 ,   B i g   e n d i a n ,   D o u b l e   P r e c i s i o n   F l o a t i n g   P o i n t   U n i t )  
       *   -   a r m _ c o r t e x M 7 l f s p _ m a t h . l i b   ( C o r t e x - M 7 ,   L i t t l e   e n d i a n ,   S i n g l e   P r e c i s i o n   F l o a t i n g   P o i n t   U n i t )  
       *   -   a r m _ c o r t e x M 7 b f s p _ m a t h . l i b   ( C o r t e x - M 7 ,   B i g   e n d i a n   a n d   S i n g l e   P r e c i s i o n   F l o a t i n g   P o i n t   U n i t   o n )  
       *   -   a r m _ c o r t e x M 7 l _ m a t h . l i b   ( C o r t e x - M 7 ,   L i t t l e   e n d i a n )  
       *   -   a r m _ c o r t e x M 7 b _ m a t h . l i b   ( C o r t e x - M 7 ,   B i g   e n d i a n )  
       *   -   a r m _ c o r t e x M 4 l f _ m a t h . l i b   ( C o r t e x - M 4 ,   L i t t l e   e n d i a n ,   F l o a t i n g   P o i n t   U n i t )  
       *   -   a r m _ c o r t e x M 4 b f _ m a t h . l i b   ( C o r t e x - M 4 ,   B i g   e n d i a n ,   F l o a t i n g   P o i n t   U n i t )  
       *   -   a r m _ c o r t e x M 4 l _ m a t h . l i b   ( C o r t e x - M 4 ,   L i t t l e   e n d i a n )  
       *   -   a r m _ c o r t e x M 4 b _ m a t h . l i b   ( C o r t e x - M 4 ,   B i g   e n d i a n )  
       *   -   a r m _ c o r t e x M 3 l _ m a t h . l i b   ( C o r t e x - M 3 ,   L i t t l e   e n d i a n )  
       *   -   a r m _ c o r t e x M 3 b _ m a t h . l i b   ( C o r t e x - M 3 ,   B i g   e n d i a n )  
       *   -   a r m _ c o r t e x M 0 l _ m a t h . l i b   ( C o r t e x - M 0   /   C o r t e x - M 0 + ,   L i t t l e   e n d i a n )  
       *   -   a r m _ c o r t e x M 0 b _ m a t h . l i b   ( C o r t e x - M 0   /   C o r t e x - M 0 + ,   B i g   e n d i a n )  
       *   -   a r m _ A R M v 8 M B L l _ m a t h . l i b   ( A r m v 8 - M   B a s e l i n e ,   L i t t l e   e n d i a n )  
       *   -   a r m _ A R M v 8 M M L l _ m a t h . l i b   ( A r m v 8 - M   M a i n l i n e ,   L i t t l e   e n d i a n )  
       *   -   a r m _ A R M v 8 M M L l f s p _ m a t h . l i b   ( A r m v 8 - M   M a i n l i n e ,   L i t t l e   e n d i a n ,   S i n g l e   P r e c i s i o n   F l o a t i n g   P o i n t   U n i t )  
       *   -   a r m _ A R M v 8 M M L l d _ m a t h . l i b   ( A r m v 8 - M   M a i n l i n e ,   L i t t l e   e n d i a n ,   D S P   i n s t r u c t i o n s )  
       *   -   a r m _ A R M v 8 M M L l d f s p _ m a t h . l i b   ( A r m v 8 - M   M a i n l i n e ,   L i t t l e   e n d i a n ,   D S P   i n s t r u c t i o n s ,   S i n g l e   P r e c i s i o n   F l o a t i n g   P o i n t   U n i t )  
       *  
       *   T h e   l i b r a r y   f u n c t i o n s   a r e   d e c l a r e d   i n   t h e   p u b l i c   f i l e   < c o d e > a r m _ m a t h . h < / c o d e >   w h i c h   i s   p l a c e d   i n   t h e   < c o d e > I n c l u d e < / c o d e >   f o l d e r .  
       *   S i m p l y   i n c l u d e   t h i s   f i l e   a n d   l i n k   t h e   a p p r o p r i a t e   l i b r a r y   i n   t h e   a p p l i c a t i o n   a n d   b e g i n   c a l l i n g   t h e   l i b r a r y   f u n c t i o n s .   T h e   L i b r a r y   s u p p o r t s   s i n g l e  
       *   p u b l i c   h e a d e r   f i l e   < c o d e >   a r m _ m a t h . h < / c o d e >   f o r   C o r t e x - M   c o r e s   w i t h   l i t t l e   e n d i a n   a n d   b i g   e n d i a n .   S a m e   h e a d e r   f i l e   w i l l   b e   u s e d   f o r   f l o a t i n g   p o i n t   u n i t ( F P U )   v a r i a n t s .  
       *   D e f i n e   t h e   a p p r o p r i a t e   p r e p r o c e s s o r   m a c r o   A R M _ M A T H _ C M 7   o r   A R M _ M A T H _ C M 4   o r   A R M _ M A T H _ C M 3   o r  
       *   A R M _ M A T H _ C M 0   o r   A R M _ M A T H _ C M 0 P L U S   d e p e n d i n g   o n   t h e   t a r g e t   p r o c e s s o r   i n   t h e   a p p l i c a t i o n .  
       *   F o r   A r m v 8 - M   c o r e s   d e f i n e   p r e p r o c e s s o r   m a c r o   A R M _ M A T H _ A R M V 8 M B L   o r   A R M _ M A T H _ A R M V 8 M M L .  
       *   S e t   p r e p r o c e s s o r   m a c r o   _ _ D S P _ P R E S E N T   i f   A r m v 8 - M   M a i n l i n e   c o r e   s u p p o r t s   D S P   i n s t r u c t i o n s .  
       *    
       *  
       *   E x a m p l e s  
       *   - - - - - - - -  
       *  
       *   T h e   l i b r a r y   s h i p s   w i t h   a   n u m b e r   o f   e x a m p l e s   w h i c h   d e m o n s t r a t e   h o w   t o   u s e   t h e   l i b r a r y   f u n c t i o n s .  
       *  
       *   T o o l c h a i n   S u p p o r t  
       *   - - - - - - - - - - - -  
       *  
       *   T h e   l i b r a r y   h a s   b e e n   d e v e l o p e d   a n d   t e s t e d   w i t h   M D K   v e r s i o n   5 . 1 4 . 0 . 0  
       *   T h e   l i b r a r y   i s   b e i n g   t e s t e d   i n   G C C   a n d   I A R   t o o l c h a i n s   a n d   u p d a t e s   o n   t h i s   a c t i v i t y   w i l l   b e   m a d e   a v a i l a b l e   s h o r t l y .  
       *  
       *   B u i l d i n g   t h e   L i b r a r y  
       *   - - - - - - - - - - - -  
       *  
       *   T h e   l i b r a r y   i n s t a l l e r   c o n t a i n s   a   p r o j e c t   f i l e   t o   r e b u i l d   l i b r a r i e s   o n   M D K   t o o l c h a i n   i n   t h e   < c o d e > C M S I S \ \ D S P _ L i b \ \ S o u r c e \ \ A R M < / c o d e >   f o l d e r .  
       *   -   a r m _ c o r t e x M _ m a t h . u v p r o j x  
       *  
       *  
       *   T h e   l i b r a r i e s   c a n   b e   b u i l t   b y   o p e n i n g   t h e   a r m _ c o r t e x M _ m a t h . u v p r o j x   p r o j e c t   i n   M D K - A R M ,   s e l e c t i n g   a   s p e c i f i c   t a r g e t ,   a n d   d e f i n i n g   t h e   o p t i o n a l   p r e p r o c e s s o r   m a c r o s   d e t a i l e d   a b o v e .  
       *  
       *   P r e p r o c e s s o r   M a c r o s  
       *   - - - - - - - - - - - -  
       *  
       *   E a c h   l i b r a r y   p r o j e c t   h a v e   d i f f e r e n t   p r e p r o c e s s o r   m a c r o s .  
       *  
       *   -   U N A L I G N E D _ S U P P O R T _ D I S A B L E :  
       *  
       *   D e f i n e   m a c r o   U N A L I G N E D _ S U P P O R T _ D I S A B L E ,   I f   t h e   s i l i c o n   d o e s   n o t   s u p p o r t   u n a l i g n e d   m e m o r y   a c c e s s  
       *  
       *   -   A R M _ M A T H _ B I G _ E N D I A N :  
       *  
       *   D e f i n e   m a c r o   A R M _ M A T H _ B I G _ E N D I A N   t o   b u i l d   t h e   l i b r a r y   f o r   b i g   e n d i a n   t a r g e t s .   B y   d e f a u l t   l i b r a r y   b u i l d s   f o r   l i t t l e   e n d i a n   t a r g e t s .  
       *  
       *   -   A R M _ M A T H _ M A T R I X _ C H E C K :  
       *  
       *   D e f i n e   m a c r o   A R M _ M A T H _ M A T R I X _ C H E C K   f o r   c h e c k i n g   o n   t h e   i n p u t   a n d   o u t p u t   s i z e s   o f   m a t r i c e s  
       *  
       *   -   A R M _ M A T H _ R O U N D I N G :  
       *  
       *   D e f i n e   m a c r o   A R M _ M A T H _ R O U N D I N G   f o r   r o u n d i n g   o n   s u p p o r t   f u n c t i o n s  
       *  
       *   -   A R M _ M A T H _ C M x :  
       *  
       *   D e f i n e   m a c r o   A R M _ M A T H _ C M 4   f o r   b u i l d i n g   t h e   l i b r a r y   o n   C o r t e x - M 4   t a r g e t ,   A R M _ M A T H _ C M 3   f o r   b u i l d i n g   l i b r a r y   o n   C o r t e x - M 3   t a r g e t  
       *   a n d   A R M _ M A T H _ C M 0   f o r   b u i l d i n g   l i b r a r y   o n   C o r t e x - M 0   t a r g e t ,   A R M _ M A T H _ C M 0 P L U S   f o r   b u i l d i n g   l i b r a r y   o n   C o r t e x - M 0 +   t a r g e t ,   a n d  
       *   A R M _ M A T H _ C M 7   f o r   b u i l d i n g   t h e   l i b r a r y   o n   c o r t e x - M 7 .  
       *  
       *   -   A R M _ M A T H _ A R M V 8 M x L :  
       *  
       *   D e f i n e   m a c r o   A R M _ M A T H _ A R M V 8 M B L   f o r   b u i l d i n g   t h e   l i b r a r y   o n   A r m v 8 - M   B a s e l i n e   t a r g e t ,   A R M _ M A T H _ A R M V 8 M M L   f o r   b u i l d i n g   l i b r a r y  
       *   o n   A r m v 8 - M   M a i n l i n e   t a r g e t .  
       *  
       *   -   _ _ F P U _ P R E S E N T :  
       *  
       *   I n i t i a l i z e   m a c r o   _ _ F P U _ P R E S E N T   =   1   w h e n   b u i l d i n g   o n   F P U   s u p p o r t e d   T a r g e t s .   E n a b l e   t h i s   m a c r o   f o r   f l o a t i n g   p o i n t   l i b r a r i e s .  
       *  
       *   -   _ _ D S P _ P R E S E N T :  
       *  
       *   I n i t i a l i z e   m a c r o   _ _ D S P _ P R E S E N T   =   1   w h e n   A r m v 8 - M   M a i n l i n e   c o r e   s u p p o r t s   D S P   i n s t r u c t i o n s .  
       *  
       *   < h r >  
       *   C M S I S - D S P   i n   A R M : : C M S I S   P a c k  
       *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
       *  
       *   T h e   f o l l o w i n g   f i l e s   r e l e v a n t   t o   C M S I S - D S P   a r e   p r e s e n t   i n   t h e   < b > A R M : : C M S I S < / b >   P a c k   d i r e c t o r i e s :  
       *   | F i l e / F o l d e r                                       | C o n t e n t                                                                                                                                   |  
       *   | - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - | - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - |  
       *   | \ b   C M S I S \ \ D o c u m e n t a t i o n \ \ D S P     |   T h i s   d o c u m e n t a t i o n                                                                                                           |  
       *   | \ b   C M S I S \ \ D S P _ L i b                           |   S o f t w a r e   l i c e n s e   a g r e e m e n t   ( l i c e n s e . t x t )                                                               |  
       *   | \ b   C M S I S \ \ D S P _ L i b \ \ E x a m p l e s       |   E x a m p l e   p r o j e c t s   d e m o n s t r a t i n g   t h e   u s a g e   o f   t h e   l i b r a r y   f u n c t i o n s             |  
       *   | \ b   C M S I S \ \ D S P _ L i b \ \ S o u r c e           |   S o u r c e   f i l e s   f o r   r e b u i l d i n g   t h e   l i b r a r y                                                                 |  
       *  
       *   < h r >  
       *   R e v i s i o n   H i s t o r y   o f   C M S I S - D S P  
       *   - - - - - - - - - - - -  
       *   P l e a s e   r e f e r   t o   \ r e f   C h a n g e L o g _ p g .  
       *  
       *   C o p y r i g h t   N o t i c e  
       *   - - - - - - - - - - - -  
       *  
       *   C o p y r i g h t   ( C )   2 0 1 0 - 2 0 1 5   A r m   L i m i t e d .   A l l   r i g h t s   r e s e r v e d .  
       * /  
  
  
 / * *  
   *   @ d e f g r o u p   g r o u p M a t h   B a s i c   M a t h   F u n c t i o n s  
   * /  
  
 / * *  
   *   @ d e f g r o u p   g r o u p F a s t M a t h   F a s t   M a t h   F u n c t i o n s  
   *   T h i s   s e t   o f   f u n c t i o n s   p r o v i d e s   a   f a s t   a p p r o x i m a t i o n   t o   s i n e ,   c o s i n e ,   a n d   s q u a r e   r o o t .  
   *   A s   c o m p a r e d   t o   m o s t   o f   t h e   o t h e r   f u n c t i o n s   i n   t h e   C M S I S   m a t h   l i b r a r y ,   t h e   f a s t   m a t h   f u n c t i o n s  
   *   o p e r a t e   o n   i n d i v i d u a l   v a l u e s   a n d   n o t   a r r a y s .  
   *   T h e r e   a r e   s e p a r a t e   f u n c t i o n s   f o r   Q 1 5 ,   Q 3 1 ,   a n d   f l o a t i n g - p o i n t   d a t a .  
   *  
   * /  
  
 / * *  
   *   @ d e f g r o u p   g r o u p C m p l x M a t h   C o m p l e x   M a t h   F u n c t i o n s  
   *   T h i s   s e t   o f   f u n c t i o n s   o p e r a t e s   o n   c o m p l e x   d a t a   v e c t o r s .  
   *   T h e   d a t a   i n   t h e   c o m p l e x   a r r a y s   i s   s t o r e d   i n   a n   i n t e r l e a v e d   f a s h i o n  
   *   ( r e a l ,   i m a g ,   r e a l ,   i m a g ,   . . . ) .  
   *   I n   t h e   A P I   f u n c t i o n s ,   t h e   n u m b e r   o f   s a m p l e s   i n   a   c o m p l e x   a r r a y   r e f e r s  
   *   t o   t h e   n u m b e r   o f   c o m p l e x   v a l u e s ;   t h e   a r r a y   c o n t a i n s   t w i c e   t h i s   n u m b e r   o f  
   *   r e a l   v a l u e s .  
   * /  
  
 / * *  
   *   @ d e f g r o u p   g r o u p F i l t e r s   F i l t e r i n g   F u n c t i o n s  
   * /  
  
 / * *  
   *   @ d e f g r o u p   g r o u p M a t r i x   M a t r i x   F u n c t i o n s  
   *  
   *   T h i s   s e t   o f   f u n c t i o n s   p r o v i d e s   b a s i c   m a t r i x   m a t h   o p e r a t i o n s .  
   *   T h e   f u n c t i o n s   o p e r a t e   o n   m a t r i x   d a t a   s t r u c t u r e s .     F o r   e x a m p l e ,  
   *   t h e   t y p e  
   *   d e f i n i t i o n   f o r   t h e   f l o a t i n g - p o i n t   m a t r i x   s t r u c t u r e   i s   s h o w n  
   *   b e l o w :  
   *   < p r e >  
   *           t y p e d e f   s t r u c t  
   *           {  
   *               u i n t 1 6 _ t   n u m R o w s ;           / /   n u m b e r   o f   r o w s   o f   t h e   m a t r i x .  
   *               u i n t 1 6 _ t   n u m C o l s ;           / /   n u m b e r   o f   c o l u m n s   o f   t h e   m a t r i x .  
   *               f l o a t 3 2 _ t   * p D a t a ;           / /   p o i n t s   t o   t h e   d a t a   o f   t h e   m a t r i x .  
   *           }   a r m _ m a t r i x _ i n s t a n c e _ f 3 2 ;  
   *   < / p r e >  
   *   T h e r e   a r e   s i m i l a r   d e f i n i t i o n s   f o r   Q 1 5   a n d   Q 3 1   d a t a   t y p e s .  
   *  
   *   T h e   s t r u c t u r e   s p e c i f i e s   t h e   s i z e   o f   t h e   m a t r i x   a n d   t h e n   p o i n t s   t o  
   *   a n   a r r a y   o f   d a t a .     T h e   a r r a y   i s   o f   s i z e   < c o d e > n u m R o w s   X   n u m C o l s < / c o d e >  
   *   a n d   t h e   v a l u e s   a r e   a r r a n g e d   i n   r o w   o r d e r .     T h a t   i s ,   t h e  
   *   m a t r i x   e l e m e n t   ( i ,   j )   i s   s t o r e d   a t :  
   *   < p r e >  
   *           p D a t a [ i * n u m C o l s   +   j ]  
   *   < / p r e >  
   *  
   *   \ p a r   I n i t   F u n c t i o n s  
   *   T h e r e   i s   a n   a s s o c i a t e d   i n i t i a l i z a t i o n   f u n c t i o n   f o r   e a c h   t y p e   o f   m a t r i x  
   *   d a t a   s t r u c t u r e .  
   *   T h e   i n i t i a l i z a t i o n   f u n c t i o n   s e t s   t h e   v a l u e s   o f   t h e   i n t e r n a l   s t r u c t u r e   f i e l d s .  
   *   R e f e r   t o   t h e   f u n c t i o n   < c o d e > a r m _ m a t _ i n i t _ f 3 2 ( ) < / c o d e > ,   < c o d e > a r m _ m a t _ i n i t _ q 3 1 ( ) < / c o d e >  
   *   a n d   < c o d e > a r m _ m a t _ i n i t _ q 1 5 ( ) < / c o d e >   f o r   f l o a t i n g - p o i n t ,   Q 3 1   a n d   Q 1 5   t y p e s ,     r e s p e c t i v e l y .  
   *  
   *   \ p a r  
   *   U s e   o f   t h e   i n i t i a l i z a t i o n   f u n c t i o n   i s   o p t i o n a l .   H o w e v e r ,   i f   i n i t i a l i z a t i o n   f u n c t i o n   i s   u s e d  
   *   t h e n   t h e   i n s t a n c e   s t r u c t u r e   c a n n o t   b e   p l a c e d   i n t o   a   c o n s t   d a t a   s e c t i o n .  
   *   T o   p l a c e   t h e   i n s t a n c e   s t r u c t u r e   i n   a   c o n s t   d a t a  
   *   s e c t i o n ,   m a n u a l l y   i n i t i a l i z e   t h e   d a t a   s t r u c t u r e .     F o r   e x a m p l e :  
   *   < p r e >  
   *   < c o d e > a r m _ m a t r i x _ i n s t a n c e _ f 3 2   S   =   { n R o w s ,   n C o l u m n s ,   p D a t a } ; < / c o d e >  
   *   < c o d e > a r m _ m a t r i x _ i n s t a n c e _ q 3 1   S   =   { n R o w s ,   n C o l u m n s ,   p D a t a } ; < / c o d e >  
   *   < c o d e > a r m _ m a t r i x _ i n s t a n c e _ q 1 5   S   =   { n R o w s ,   n C o l u m n s ,   p D a t a } ; < / c o d e >  
   *   < / p r e >  
   *   w h e r e   < c o d e > n R o w s < / c o d e >   s p e c i f i e s   t h e   n u m b e r   o f   r o w s ,   < c o d e > n C o l u m n s < / c o d e >  
   *   s p e c i f i e s   t h e   n u m b e r   o f   c o l u m n s ,   a n d   < c o d e > p D a t a < / c o d e >   p o i n t s   t o   t h e  
   *   d a t a   a r r a y .  
   *  
   *   \ p a r   S i z e   C h e c k i n g  
   *   B y   d e f a u l t   a l l   o f   t h e   m a t r i x   f u n c t i o n s   p e r f o r m   s i z e   c h e c k i n g   o n   t h e   i n p u t   a n d  
   *   o u t p u t   m a t r i c e s .   F o r   e x a m p l e ,   t h e   m a t r i x   a d d i t i o n   f u n c t i o n   v e r i f i e s   t h a t   t h e  
   *   t w o   i n p u t   m a t r i c e s   a n d   t h e   o u t p u t   m a t r i x   a l l   h a v e   t h e   s a m e   n u m b e r   o f   r o w s   a n d  
   *   c o l u m n s .   I f   t h e   s i z e   c h e c k   f a i l s   t h e   f u n c t i o n s   r e t u r n :  
   *   < p r e >  
   *           A R M _ M A T H _ S I Z E _ M I S M A T C H  
   *   < / p r e >  
   *   O t h e r w i s e   t h e   f u n c t i o n s   r e t u r n  
   *   < p r e >  
   *           A R M _ M A T H _ S U C C E S S  
   *   < / p r e >  
   *   T h e r e   i s   s o m e   o v e r h e a d   a s s o c i a t e d   w i t h   t h i s   m a t r i x   s i z e   c h e c k i n g .  
   *   T h e   m a t r i x   s i z e   c h e c k i n g   i s   e n a b l e d   v i a   t h e   \ # d e f i n e  
   *   < p r e >  
   *           A R M _ M A T H _ M A T R I X _ C H E C K  
   *   < / p r e >  
   *   w i t h i n   t h e   l i b r a r y   p r o j e c t   s e t t i n g s .     B y   d e f a u l t   t h i s   m a c r o   i s   d e f i n e d  
   *   a n d   s i z e   c h e c k i n g   i s   e n a b l e d .   B y   c h a n g i n g   t h e   p r o j e c t   s e t t i n g s   a n d  
   *   u n d e f i n i n g   t h i s   m a c r o   s i z e   c h e c k i n g   i s   e l i m i n a t e d   a n d   t h e   f u n c t i o n s  
   *   r u n   a   b i t   f a s t e r .   W i t h   s i z e   c h e c k i n g   d i s a b l e d   t h e   f u n c t i o n s   a l w a y s  
   *   r e t u r n   < c o d e > A R M _ M A T H _ S U C C E S S < / c o d e > .  
   * /  
  
 / * *  
   *   @ d e f g r o u p   g r o u p T r a n s f o r m s   T r a n s f o r m   F u n c t i o n s  
   * /  
  
 / * *  
   *   @ d e f g r o u p   g r o u p C o n t r o l l e r   C o n t r o l l e r   F u n c t i o n s  
   * /  
  
 / * *  
   *   @ d e f g r o u p   g r o u p S t a t s   S t a t i s t i c s   F u n c t i o n s  
   * /  
 / * *  
   *   @ d e f g r o u p   g r o u p S u p p o r t   S u p p o r t   F u n c t i o n s  
   * /  
  
 / * *  
   *   @ d e f g r o u p   g r o u p I n t e r p o l a t i o n   I n t e r p o l a t i o n   F u n c t i o n s  
   *   T h e s e   f u n c t i o n s   p e r f o r m   1 -   a n d   2 - d i m e n s i o n a l   i n t e r p o l a t i o n   o f   d a t a .  
   *   L i n e a r   i n t e r p o l a t i o n   i s   u s e d   f o r   1 - d i m e n s i o n a l   d a t a   a n d  
   *   b i l i n e a r   i n t e r p o l a t i o n   i s   u s e d   f o r   2 - d i m e n s i o n a l   d a t a .  
   * /  
  
 / * *  
   *   @ d e f g r o u p   g r o u p E x a m p l e s   E x a m p l e s  
   * /  
 # i f n d e f   _ A R M _ M A T H _ H  
 # d e f i n e   _ A R M _ M A T H _ H  
  
 / *   C o m p i l e r   s p e c i f i c   d i a g n o s t i c   a d j u s t m e n t   * /  
 # i f       d e f i n e d   (   _ _ C C _ A R M   )  
  
 # e l i f   d e f i n e d   (   _ _ A R M C C _ V E R S I O N   )   & &   (   _ _ A R M C C _ V E R S I O N   > =   6 0 1 0 0 5 0   )  
  
 # e l i f   d e f i n e d   (   _ _ G N U C _ _   )  
 # p r a g m a   G C C   d i a g n o s t i c   p u s h  
 # p r a g m a   G C C   d i a g n o s t i c   i g n o r e d   " - W s i g n - c o n v e r s i o n "  
 # p r a g m a   G C C   d i a g n o s t i c   i g n o r e d   " - W c o n v e r s i o n "  
 # p r a g m a   G C C   d i a g n o s t i c   i g n o r e d   " - W u n u s e d - p a r a m e t e r "  
  
 # e l i f   d e f i n e d   (   _ _ I C C A R M _ _   )  
  
 # e l i f   d e f i n e d   (   _ _ T I _ A R M _ _   )  
  
 # e l i f   d e f i n e d   (   _ _ C S M C _ _   )  
  
 # e l i f   d e f i n e d   (   _ _ T A S K I N G _ _   )  
  
 # e l s e  
     # e r r o r   U n k n o w n   c o m p i l e r  
 # e n d i f  
  
  
 # d e f i n e   _ _ C M S I S _ G E N E R I C                   / *   d i s a b l e   N V I C   a n d   S y s t i c k   f u n c t i o n s   * /  
  
 # i f   d e f i n e d ( A R M _ M A T H _ C M 7 )  
     # i n c l u d e   " c o r e _ c m 7 . h "  
     # d e f i n e   A R M _ M A T H _ D S P  
 # e l i f   d e f i n e d   ( A R M _ M A T H _ C M 4 )  
     # i n c l u d e   " c o r e _ c m 4 . h "  
     # d e f i n e   A R M _ M A T H _ D S P  
 # e l i f   d e f i n e d   ( A R M _ M A T H _ C M 3 )  
     # i n c l u d e   " c o r e _ c m 3 . h "  
 # e l i f   d e f i n e d   ( A R M _ M A T H _ C M 0 )  
     # i n c l u d e   " c o r e _ c m 0 . h "  
     # d e f i n e   A R M _ M A T H _ C M 0 _ F A M I L Y  
 # e l i f   d e f i n e d   ( A R M _ M A T H _ C M 0 P L U S )  
     # i n c l u d e   " c o r e _ c m 0 p l u s . h "  
     # d e f i n e   A R M _ M A T H _ C M 0 _ F A M I L Y  
 # e l i f   d e f i n e d   ( A R M _ M A T H _ A R M V 8 M B L )  
     # i n c l u d e   " c o r e _ a r m v 8 m b l . h "  
     # d e f i n e   A R M _ M A T H _ C M 0 _ F A M I L Y  
 # e l i f   d e f i n e d   ( A R M _ M A T H _ A R M V 8 M M L )  
     # i n c l u d e   " c o r e _ a r m v 8 m m l . h "  
     # i f   ( d e f i n e d   ( _ _ D S P _ P R E S E N T )   & &   ( _ _ D S P _ P R E S E N T   = =   1 ) )  
         # d e f i n e   A R M _ M A T H _ D S P  
     # e n d i f  
 # e l s e  
     # e r r o r   " D e f i n e   a c c o r d i n g   t h e   u s e d   C o r t e x   c o r e   A R M _ M A T H _ C M 7 ,   A R M _ M A T H _ C M 4 ,   A R M _ M A T H _ C M 3 ,   A R M _ M A T H _ C M 0 P L U S ,   A R M _ M A T H _ C M 0 ,   A R M _ M A T H _ A R M V 8 M B L ,   A R M _ M A T H _ A R M V 8 M M L "  
 # e n d i f  
  
 # u n d e f     _ _ C M S I S _ G E N E R I C                   / *   e n a b l e   N V I C   a n d   S y s t i c k   f u n c t i o n s   * /  
 # i n c l u d e   " s t r i n g . h "  
 # i n c l u d e   " m a t h . h "  
 # i f d e f       _ _ c p l u s p l u s  
 e x t e r n   " C "  
 {  
 # e n d i f  
  
  
     / * *  
       *   @ b r i e f   M a c r o s   r e q u i r e d   f o r   r e c i p r o c a l   c a l c u l a t i o n   i n   N o r m a l i z e d   L M S  
       * /  
  
 # d e f i n e   D E L T A _ Q 3 1                     ( 0 x 1 0 0 )  
 # d e f i n e   D E L T A _ Q 1 5                     0 x 5  
 # d e f i n e   I N D E X _ M A S K                   0 x 0 0 0 0 0 0 3 F  
 # i f n d e f   P I  
     # d e f i n e   P I                               3 . 1 4 1 5 9 2 6 5 3 5 8 9 7 9 f  
 # e n d i f  
  
     / * *  
       *   @ b r i e f   M a c r o s   r e q u i r e d   f o r   S I N E   a n d   C O S I N E   F a s t   m a t h   a p p r o x i m a t i o n s  
       * /  
  
 # d e f i n e   F A S T _ M A T H _ T A B L E _ S I Z E     5 1 2  
 # d e f i n e   F A S T _ M A T H _ Q 3 1 _ S H I F T       ( 3 2   -   1 0 )  
 # d e f i n e   F A S T _ M A T H _ Q 1 5 _ S H I F T       ( 1 6   -   1 0 )  
 # d e f i n e   C O N T R O L L E R _ Q 3 1 _ S H I F T     ( 3 2   -   9 )  
 # d e f i n e   T A B L E _ S P A C I N G _ Q 3 1           0 x 4 0 0 0 0 0  
 # d e f i n e   T A B L E _ S P A C I N G _ Q 1 5           0 x 8 0  
  
     / * *  
       *   @ b r i e f   M a c r o s   r e q u i r e d   f o r   S I N E   a n d   C O S I N E   C o n t r o l l e r   f u n c t i o n s  
       * /  
     / *   1 . 3 1 ( q 3 1 )   F i x e d   v a l u e   o f   2 / 3 6 0   * /  
     / *   - 1   t o   + 1   i s   d i v i d e d   i n t o   3 6 0   v a l u e s   s o   t o t a l   s p a c i n g   i s   ( 2 / 3 6 0 )   * /  
 # d e f i n e   I N P U T _ S P A C I N G                   0 x B 6 0 B 6 1  
  
     / * *  
       *   @ b r i e f   M a c r o   f o r   U n a l i g n e d   S u p p o r t  
       * /  
 # i f n d e f   U N A L I G N E D _ S U P P O R T _ D I S A B L E  
         # d e f i n e   A L I G N 4  
 # e l s e  
     # i f   d e f i n e d     ( _ _ G N U C _ _ )  
         # d e f i n e   A L I G N 4   _ _ a t t r i b u t e _ _ ( ( a l i g n e d ( 4 ) ) )  
     # e l s e  
         # d e f i n e   A L I G N 4   _ _ a l i g n ( 4 )  
     # e n d i f  
 # e n d i f       / *   # i f n d e f   U N A L I G N E D _ S U P P O R T _ D I S A B L E   * /  
  
     / * *  
       *   @ b r i e f   E r r o r   s t a t u s   r e t u r n e d   b y   s o m e   f u n c t i o n s   i n   t h e   l i b r a r y .  
       * /  
  
     t y p e d e f   e n u m  
     {  
         A R M _ M A T H _ S U C C E S S   =   0 ,                                 / * * <   N o   e r r o r   * /  
         A R M _ M A T H _ A R G U M E N T _ E R R O R   =   - 1 ,                 / * * <   O n e   o r   m o r e   a r g u m e n t s   a r e   i n c o r r e c t   * /  
         A R M _ M A T H _ L E N G T H _ E R R O R   =   - 2 ,                     / * * <   L e n g t h   o f   d a t a   b u f f e r   i s   i n c o r r e c t   * /  
         A R M _ M A T H _ S I Z E _ M I S M A T C H   =   - 3 ,                   / * * <   S i z e   o f   m a t r i c e s   i s   n o t   c o m p a t i b l e   w i t h   t h e   o p e r a t i o n .   * /  
         A R M _ M A T H _ N A N I N F   =   - 4 ,                                 / * * <   N o t - a - n u m b e r   ( N a N )   o r   i n f i n i t y   i s   g e n e r a t e d   * /  
         A R M _ M A T H _ S I N G U L A R   =   - 5 ,                             / * * <   G e n e r a t e d   b y   m a t r i x   i n v e r s i o n   i f   t h e   i n p u t   m a t r i x   i s   s i n g u l a r   a n d   c a n n o t   b e   i n v e r t e d .   * /  
         A R M _ M A T H _ T E S T _ F A I L U R E   =   - 6                       / * * <   T e s t   F a i l e d     * /  
     }   a r m _ s t a t u s ;  
  
     / * *  
       *   @ b r i e f   8 - b i t   f r a c t i o n a l   d a t a   t y p e   i n   1 . 7   f o r m a t .  
       * /  
     t y p e d e f   i n t 8 _ t   q 7 _ t ;  
  
     / * *  
       *   @ b r i e f   1 6 - b i t   f r a c t i o n a l   d a t a   t y p e   i n   1 . 1 5   f o r m a t .  
       * /  
     t y p e d e f   i n t 1 6 _ t   q 1 5 _ t ;  
  
     / * *  
       *   @ b r i e f   3 2 - b i t   f r a c t i o n a l   d a t a   t y p e   i n   1 . 3 1   f o r m a t .  
       * /  
     t y p e d e f   i n t 3 2 _ t   q 3 1 _ t ;  
  
     / * *  
       *   @ b r i e f   6 4 - b i t   f r a c t i o n a l   d a t a   t y p e   i n   1 . 6 3   f o r m a t .  
       * /  
     t y p e d e f   i n t 6 4 _ t   q 6 3 _ t ;  
  
     / * *  
       *   @ b r i e f   3 2 - b i t   f l o a t i n g - p o i n t   t y p e   d e f i n i t i o n .  
       * /  
     t y p e d e f   f l o a t   f l o a t 3 2 _ t ;  
  
     / * *  
       *   @ b r i e f   6 4 - b i t   f l o a t i n g - p o i n t   t y p e   d e f i n i t i o n .  
       * /  
     t y p e d e f   d o u b l e   f l o a t 6 4 _ t ;  
  
     / * *  
       *   @ b r i e f   d e f i n i t i o n   t o   r e a d / w r i t e   t w o   1 6   b i t   v a l u e s .  
       * /  
 # i f       d e f i n e d   (   _ _ C C _ A R M   )  
     # d e f i n e   _ _ S I M D 3 2 _ T Y P E   i n t 3 2 _ t   _ _ p a c k e d  
     # d e f i n e   C M S I S _ U N U S E D   _ _ a t t r i b u t e _ _ ( ( u n u s e d ) )  
     # d e f i n e   C M S I S _ I N L I N E   _ _ a t t r i b u t e _ _ ( ( a l w a y s _ i n l i n e ) )  
  
 # e l i f   d e f i n e d   (   _ _ A R M C C _ V E R S I O N   )   & &   (   _ _ A R M C C _ V E R S I O N   > =   6 0 1 0 0 5 0   )  
     # d e f i n e   _ _ S I M D 3 2 _ T Y P E   i n t 3 2 _ t  
     # d e f i n e   C M S I S _ U N U S E D   _ _ a t t r i b u t e _ _ ( ( u n u s e d ) )  
     # d e f i n e   C M S I S _ I N L I N E   _ _ a t t r i b u t e _ _ ( ( a l w a y s _ i n l i n e ) )  
  
 # e l i f   d e f i n e d   (   _ _ G N U C _ _   )  
     # d e f i n e   _ _ S I M D 3 2 _ T Y P E   i n t 3 2 _ t  
     # d e f i n e   C M S I S _ U N U S E D   _ _ a t t r i b u t e _ _ ( ( u n u s e d ) )  
     # d e f i n e   C M S I S _ I N L I N E   _ _ a t t r i b u t e _ _ ( ( a l w a y s _ i n l i n e ) )  
  
 # e l i f   d e f i n e d   (   _ _ I C C A R M _ _   )  
     # d e f i n e   _ _ S I M D 3 2 _ T Y P E   i n t 3 2 _ t   _ _ p a c k e d  
     # d e f i n e   C M S I S _ U N U S E D  
     # d e f i n e   C M S I S _ I N L I N E  
  
 # e l i f   d e f i n e d   (   _ _ T I _ A R M _ _   )  
     # d e f i n e   _ _ S I M D 3 2 _ T Y P E   i n t 3 2 _ t  
     # d e f i n e   C M S I S _ U N U S E D   _ _ a t t r i b u t e _ _ ( ( u n u s e d ) )  
     # d e f i n e   C M S I S _ I N L I N E  
  
 # e l i f   d e f i n e d   (   _ _ C S M C _ _   )  
     # d e f i n e   _ _ S I M D 3 2 _ T Y P E   i n t 3 2 _ t  
     # d e f i n e   C M S I S _ U N U S E D  
     # d e f i n e   C M S I S _ I N L I N E  
  
 # e l i f   d e f i n e d   (   _ _ T A S K I N G _ _   )  
     # d e f i n e   _ _ S I M D 3 2 _ T Y P E   _ _ u n a l i g n e d   i n t 3 2 _ t  
     # d e f i n e   C M S I S _ U N U S E D  
     # d e f i n e   C M S I S _ I N L I N E  
  
 # e l s e  
     # e r r o r   U n k n o w n   c o m p i l e r  
 # e n d i f  
  
 # d e f i n e   _ _ S I M D 3 2 ( a d d r )                 ( * ( _ _ S I M D 3 2 _ T Y P E   * * )   &   ( a d d r ) )  
 # d e f i n e   _ _ S I M D 3 2 _ C O N S T ( a d d r )     ( ( _ _ S I M D 3 2 _ T Y P E   * ) ( a d d r ) )  
 # d e f i n e   _ S I M D 3 2 _ O F F S E T ( a d d r )     ( * ( _ _ S I M D 3 2 _ T Y P E   * )     ( a d d r ) )  
 # d e f i n e   _ _ S I M D 6 4 ( a d d r )                 ( * ( i n t 6 4 _ t   * * )   &   ( a d d r ) )  
  
 # i f   ! d e f i n e d   ( A R M _ M A T H _ D S P )  
     / * *  
       *   @ b r i e f   d e f i n i t i o n   t o   p a c k   t w o   1 6   b i t   v a l u e s .  
       * /  
 # d e f i n e   _ _ P K H B T ( A R G 1 ,   A R G 2 ,   A R G 3 )   (   ( ( ( i n t 3 2 _ t ) ( A R G 1 )   < <         0 )   &   ( i n t 3 2 _ t ) 0 x 0 0 0 0 F F F F )   |   \  
                                                                         ( ( ( i n t 3 2 _ t ) ( A R G 2 )   < <   A R G 3 )   &   ( i n t 3 2 _ t ) 0 x F F F F 0 0 0 0 )     )  
 # d e f i n e   _ _ P K H T B ( A R G 1 ,   A R G 2 ,   A R G 3 )   (   ( ( ( i n t 3 2 _ t ) ( A R G 1 )   < <         0 )   &   ( i n t 3 2 _ t ) 0 x F F F F 0 0 0 0 )   |   \  
                                                                         ( ( ( i n t 3 2 _ t ) ( A R G 2 )   > >   A R G 3 )   &   ( i n t 3 2 _ t ) 0 x 0 0 0 0 F F F F )     )  
  
 # e n d i f   / *   ! d e f i n e d   ( A R M _ M A T H _ D S P )   * /  
  
       / * *  
       *   @ b r i e f   d e f i n i t i o n   t o   p a c k   f o u r   8   b i t   v a l u e s .  
       * /  
 # i f n d e f   A R M _ M A T H _ B I G _ E N D I A N  
  
 # d e f i n e   _ _ P A C K q 7 ( v 0 , v 1 , v 2 , v 3 )   (   ( ( ( i n t 3 2 _ t ) ( v 0 )   < <     0 )   &   ( i n t 3 2 _ t ) 0 x 0 0 0 0 0 0 F F )   |   \  
                                                                 ( ( ( i n t 3 2 _ t ) ( v 1 )   < <     8 )   &   ( i n t 3 2 _ t ) 0 x 0 0 0 0 F F 0 0 )   |   \  
                                                                 ( ( ( i n t 3 2 _ t ) ( v 2 )   < <   1 6 )   &   ( i n t 3 2 _ t ) 0 x 0 0 F F 0 0 0 0 )   |   \  
                                                                 ( ( ( i n t 3 2 _ t ) ( v 3 )   < <   2 4 )   &   ( i n t 3 2 _ t ) 0 x F F 0 0 0 0 0 0 )     )  
 # e l s e  
  
 # d e f i n e   _ _ P A C K q 7 ( v 0 , v 1 , v 2 , v 3 )   (   ( ( ( i n t 3 2 _ t ) ( v 3 )   < <     0 )   &   ( i n t 3 2 _ t ) 0 x 0 0 0 0 0 0 F F )   |   \  
                                                                 ( ( ( i n t 3 2 _ t ) ( v 2 )   < <     8 )   &   ( i n t 3 2 _ t ) 0 x 0 0 0 0 F F 0 0 )   |   \  
                                                                 ( ( ( i n t 3 2 _ t ) ( v 1 )   < <   1 6 )   &   ( i n t 3 2 _ t ) 0 x 0 0 F F 0 0 0 0 )   |   \  
                                                                 ( ( ( i n t 3 2 _ t ) ( v 0 )   < <   2 4 )   &   ( i n t 3 2 _ t ) 0 x F F 0 0 0 0 0 0 )     )  
  
 # e n d i f  
  
  
     / * *  
       *   @ b r i e f   C l i p s   Q 6 3   t o   Q 3 1   v a l u e s .  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   q 3 1 _ t   c l i p _ q 6 3 _ t o _ q 3 1 (  
     q 6 3 _ t   x )  
     {  
         r e t u r n   ( ( q 3 1 _ t )   ( x   > >   3 2 )   ! =   ( ( q 3 1 _ t )   x   > >   3 1 ) )   ?  
             ( ( 0 x 7 F F F F F F F   ^   ( ( q 3 1 _ t )   ( x   > >   6 3 ) ) ) )   :   ( q 3 1 _ t )   x ;  
     }  
  
     / * *  
       *   @ b r i e f   C l i p s   Q 6 3   t o   Q 1 5   v a l u e s .  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   q 1 5 _ t   c l i p _ q 6 3 _ t o _ q 1 5 (  
     q 6 3 _ t   x )  
     {  
         r e t u r n   ( ( q 3 1 _ t )   ( x   > >   3 2 )   ! =   ( ( q 3 1 _ t )   x   > >   3 1 ) )   ?  
             ( ( 0 x 7 F F F   ^   ( ( q 1 5 _ t )   ( x   > >   6 3 ) ) ) )   :   ( q 1 5 _ t )   ( x   > >   1 5 ) ;  
     }  
  
     / * *  
       *   @ b r i e f   C l i p s   Q 3 1   t o   Q 7   v a l u e s .  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   q 7 _ t   c l i p _ q 3 1 _ t o _ q 7 (  
     q 3 1 _ t   x )  
     {  
         r e t u r n   ( ( q 3 1 _ t )   ( x   > >   2 4 )   ! =   ( ( q 3 1 _ t )   x   > >   2 3 ) )   ?  
             ( ( 0 x 7 F   ^   ( ( q 7 _ t )   ( x   > >   3 1 ) ) ) )   :   ( q 7 _ t )   x ;  
     }  
  
     / * *  
       *   @ b r i e f   C l i p s   Q 3 1   t o   Q 1 5   v a l u e s .  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   q 1 5 _ t   c l i p _ q 3 1 _ t o _ q 1 5 (  
     q 3 1 _ t   x )  
     {  
         r e t u r n   ( ( q 3 1 _ t )   ( x   > >   1 6 )   ! =   ( ( q 3 1 _ t )   x   > >   1 5 ) )   ?  
             ( ( 0 x 7 F F F   ^   ( ( q 1 5 _ t )   ( x   > >   3 1 ) ) ) )   :   ( q 1 5 _ t )   x ;  
     }  
  
     / * *  
       *   @ b r i e f   M u l t i p l i e s   3 2   X   6 4   a n d   r e t u r n s   3 2   b i t   r e s u l t   i n   2 . 3 0   f o r m a t .  
       * /  
  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   q 6 3 _ t   m u l t 3 2 x 6 4 (  
     q 6 3 _ t   x ,  
     q 3 1 _ t   y )  
     {  
         r e t u r n   ( ( ( ( q 6 3 _ t )   ( x   &   0 x 0 0 0 0 0 0 0 0 F F F F F F F F )   *   y )   > >   3 2 )   +  
                         ( ( ( q 6 3 _ t )   ( x   > >   3 2 )   *   y ) ) ) ;  
     }  
  
     / * *  
       *   @ b r i e f   F u n c t i o n   t o   C a l c u l a t e s   1 / i n   ( r e c i p r o c a l )   v a l u e   o f   Q 3 1   D a t a   t y p e .  
       * /  
  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   a r m _ r e c i p _ q 3 1 (  
     q 3 1 _ t   i n ,  
     q 3 1 _ t   *   d s t ,  
     q 3 1 _ t   *   p R e c i p T a b l e )  
     {  
         q 3 1 _ t   o u t ;  
         u i n t 3 2 _ t   t e m p V a l ;  
         u i n t 3 2 _ t   i n d e x ,   i ;  
         u i n t 3 2 _ t   s i g n B i t s ;  
  
         i f   ( i n   >   0 )  
         {  
             s i g n B i t s   =   ( ( u i n t 3 2 _ t )   ( _ _ C L Z (   i n )   -   1 ) ) ;  
         }  
         e l s e  
         {  
             s i g n B i t s   =   ( ( u i n t 3 2 _ t )   ( _ _ C L Z ( - i n )   -   1 ) ) ;  
         }  
  
         / *   C o n v e r t   i n p u t   s a m p l e   t o   1 . 3 1   f o r m a t   * /  
         i n   =   ( i n   < <   s i g n B i t s ) ;  
  
         / *   c a l c u l a t i o n   o f   i n d e x   f o r   i n i t i a l   a p p r o x i m a t e d   V a l   * /  
         i n d e x   =   ( u i n t 3 2 _ t ) ( i n   > >   2 4 ) ;  
         i n d e x   =   ( i n d e x   &   I N D E X _ M A S K ) ;  
  
         / *   1 . 3 1   w i t h   e x p   1   * /  
         o u t   =   p R e c i p T a b l e [ i n d e x ] ;  
  
         / *   c a l c u l a t i o n   o f   r e c i p r o c a l   v a l u e   * /  
         / *   r u n n i n g   a p p r o x i m a t i o n   f o r   t w o   i t e r a t i o n s   * /  
         f o r   ( i   =   0 U ;   i   <   2 U ;   i + + )  
         {  
             t e m p V a l   =   ( u i n t 3 2 _ t )   ( ( ( q 6 3 _ t )   i n   *   o u t )   > >   3 1 ) ;  
             t e m p V a l   =   0 x 7 F F F F F F F u   -   t e m p V a l ;  
             / *             1 . 3 1   w i t h   e x p   1   * /  
             / *   o u t   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   o u t   *   t e m p V a l )   > >   3 0 ) ;   * /  
             o u t   =   c l i p _ q 6 3 _ t o _ q 3 1 ( ( ( q 6 3 _ t )   o u t   *   t e m p V a l )   > >   3 0 ) ;  
         }  
  
         / *   w r i t e   o u t p u t   * /  
         * d s t   =   o u t ;  
  
         / *   r e t u r n   n u m   o f   s i g n b i t s   o f   o u t   =   1 / i n   v a l u e   * /  
         r e t u r n   ( s i g n B i t s   +   1 U ) ;  
     }  
  
  
     / * *  
       *   @ b r i e f   F u n c t i o n   t o   C a l c u l a t e s   1 / i n   ( r e c i p r o c a l )   v a l u e   o f   Q 1 5   D a t a   t y p e .  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   a r m _ r e c i p _ q 1 5 (  
     q 1 5 _ t   i n ,  
     q 1 5 _ t   *   d s t ,  
     q 1 5 _ t   *   p R e c i p T a b l e )  
     {  
         q 1 5 _ t   o u t   =   0 ;  
         u i n t 3 2 _ t   t e m p V a l   =   0 ;  
         u i n t 3 2 _ t   i n d e x   =   0 ,   i   =   0 ;  
         u i n t 3 2 _ t   s i g n B i t s   =   0 ;  
  
         i f   ( i n   >   0 )  
         {  
             s i g n B i t s   =   ( ( u i n t 3 2 _ t ) ( _ _ C L Z (   i n )   -   1 7 ) ) ;  
         }  
         e l s e  
         {  
             s i g n B i t s   =   ( ( u i n t 3 2 _ t ) ( _ _ C L Z ( - i n )   -   1 7 ) ) ;  
         }  
  
         / *   C o n v e r t   i n p u t   s a m p l e   t o   1 . 1 5   f o r m a t   * /  
         i n   =   ( i n   < <   s i g n B i t s ) ;  
  
         / *   c a l c u l a t i o n   o f   i n d e x   f o r   i n i t i a l   a p p r o x i m a t e d   V a l   * /  
         i n d e x   =   ( u i n t 3 2 _ t ) ( i n   > >     8 ) ;  
         i n d e x   =   ( i n d e x   &   I N D E X _ M A S K ) ;  
  
         / *             1 . 1 5   w i t h   e x p   1     * /  
         o u t   =   p R e c i p T a b l e [ i n d e x ] ;  
  
         / *   c a l c u l a t i o n   o f   r e c i p r o c a l   v a l u e   * /  
         / *   r u n n i n g   a p p r o x i m a t i o n   f o r   t w o   i t e r a t i o n s   * /  
         f o r   ( i   =   0 U ;   i   <   2 U ;   i + + )  
         {  
             t e m p V a l   =   ( u i n t 3 2 _ t )   ( ( ( q 3 1 _ t )   i n   *   o u t )   > >   1 5 ) ;  
             t e m p V a l   =   0 x 7 F F F u   -   t e m p V a l ;  
             / *             1 . 1 5   w i t h   e x p   1   * /  
             o u t   =   ( q 1 5 _ t )   ( ( ( q 3 1 _ t )   o u t   *   t e m p V a l )   > >   1 4 ) ;  
             / *   o u t   =   c l i p _ q 3 1 _ t o _ q 1 5 ( ( ( q 3 1 _ t )   o u t   *   t e m p V a l )   > >   1 4 ) ;   * /  
         }  
  
         / *   w r i t e   o u t p u t   * /  
         * d s t   =   o u t ;  
  
         / *   r e t u r n   n u m   o f   s i g n b i t s   o f   o u t   =   1 / i n   v a l u e   * /  
         r e t u r n   ( s i g n B i t s   +   1 ) ;  
     }  
  
  
 / *  
   *   @ b r i e f   C   c u s t o m   d e f i n e d   i n t r i n s i c   f u n c t i o n   f o r   M 3   a n d   M 0   p r o c e s s o r s  
   * /  
 # i f   ! d e f i n e d   ( A R M _ M A T H _ D S P )  
  
     / *  
       *   @ b r i e f   C   c u s t o m   d e f i n e d   Q A D D 8   f o r   M 3   a n d   M 0   p r o c e s s o r s  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   _ _ Q A D D 8 (  
     u i n t 3 2 _ t   x ,  
     u i n t 3 2 _ t   y )  
     {  
         q 3 1 _ t   r ,   s ,   t ,   u ;  
  
         r   =   _ _ S S A T ( ( ( ( ( q 3 1 _ t ) x   < <   2 4 )   > >   2 4 )   +   ( ( ( q 3 1 _ t ) y   < <   2 4 )   > >   2 4 ) ) ,   8 )   &   ( i n t 3 2 _ t ) 0 x 0 0 0 0 0 0 F F ;  
         s   =   _ _ S S A T ( ( ( ( ( q 3 1 _ t ) x   < <   1 6 )   > >   2 4 )   +   ( ( ( q 3 1 _ t ) y   < <   1 6 )   > >   2 4 ) ) ,   8 )   &   ( i n t 3 2 _ t ) 0 x 0 0 0 0 0 0 F F ;  
         t   =   _ _ S S A T ( ( ( ( ( q 3 1 _ t ) x   < <     8 )   > >   2 4 )   +   ( ( ( q 3 1 _ t ) y   < <     8 )   > >   2 4 ) ) ,   8 )   &   ( i n t 3 2 _ t ) 0 x 0 0 0 0 0 0 F F ;  
         u   =   _ _ S S A T ( ( ( ( ( q 3 1 _ t ) x             )   > >   2 4 )   +   ( ( ( q 3 1 _ t ) y             )   > >   2 4 ) ) ,   8 )   &   ( i n t 3 2 _ t ) 0 x 0 0 0 0 0 0 F F ;  
  
         r e t u r n   ( ( u i n t 3 2 _ t ) ( ( u   < <   2 4 )   |   ( t   < <   1 6 )   |   ( s   < <     8 )   |   ( r             ) ) ) ;  
     }  
  
  
     / *  
       *   @ b r i e f   C   c u s t o m   d e f i n e d   Q S U B 8   f o r   M 3   a n d   M 0   p r o c e s s o r s  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   _ _ Q S U B 8 (  
     u i n t 3 2 _ t   x ,  
     u i n t 3 2 _ t   y )  
     {  
         q 3 1 _ t   r ,   s ,   t ,   u ;  
  
         r   =   _ _ S S A T ( ( ( ( ( q 3 1 _ t ) x   < <   2 4 )   > >   2 4 )   -   ( ( ( q 3 1 _ t ) y   < <   2 4 )   > >   2 4 ) ) ,   8 )   &   ( i n t 3 2 _ t ) 0 x 0 0 0 0 0 0 F F ;  
         s   =   _ _ S S A T ( ( ( ( ( q 3 1 _ t ) x   < <   1 6 )   > >   2 4 )   -   ( ( ( q 3 1 _ t ) y   < <   1 6 )   > >   2 4 ) ) ,   8 )   &   ( i n t 3 2 _ t ) 0 x 0 0 0 0 0 0 F F ;  
         t   =   _ _ S S A T ( ( ( ( ( q 3 1 _ t ) x   < <     8 )   > >   2 4 )   -   ( ( ( q 3 1 _ t ) y   < <     8 )   > >   2 4 ) ) ,   8 )   &   ( i n t 3 2 _ t ) 0 x 0 0 0 0 0 0 F F ;  
         u   =   _ _ S S A T ( ( ( ( ( q 3 1 _ t ) x             )   > >   2 4 )   -   ( ( ( q 3 1 _ t ) y             )   > >   2 4 ) ) ,   8 )   &   ( i n t 3 2 _ t ) 0 x 0 0 0 0 0 0 F F ;  
  
         r e t u r n   ( ( u i n t 3 2 _ t ) ( ( u   < <   2 4 )   |   ( t   < <   1 6 )   |   ( s   < <     8 )   |   ( r             ) ) ) ;  
     }  
  
  
     / *  
       *   @ b r i e f   C   c u s t o m   d e f i n e d   Q A D D 1 6   f o r   M 3   a n d   M 0   p r o c e s s o r s  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   _ _ Q A D D 1 6 (  
     u i n t 3 2 _ t   x ,  
     u i n t 3 2 _ t   y )  
     {  
 / *     q 3 1 _ t   r ,           s ;     w i t h o u t   i n i t i a l i s a t i o n   ' a r m _ o f f s e t _ q 1 5   t e s t '   f a i l s     b u t   ' i n t r i n s i c '   t e s t s   p a s s !   f o r   a r m C C   * /  
         q 3 1 _ t   r   =   0 ,   s   =   0 ;  
  
         r   =   _ _ S S A T ( ( ( ( ( q 3 1 _ t ) x   < <   1 6 )   > >   1 6 )   +   ( ( ( q 3 1 _ t ) y   < <   1 6 )   > >   1 6 ) ) ,   1 6 )   &   ( i n t 3 2 _ t ) 0 x 0 0 0 0 F F F F ;  
         s   =   _ _ S S A T ( ( ( ( ( q 3 1 _ t ) x             )   > >   1 6 )   +   ( ( ( q 3 1 _ t ) y             )   > >   1 6 ) ) ,   1 6 )   &   ( i n t 3 2 _ t ) 0 x 0 0 0 0 F F F F ;  
  
         r e t u r n   ( ( u i n t 3 2 _ t ) ( ( s   < <   1 6 )   |   ( r             ) ) ) ;  
     }  
  
  
     / *  
       *   @ b r i e f   C   c u s t o m   d e f i n e d   S H A D D 1 6   f o r   M 3   a n d   M 0   p r o c e s s o r s  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   _ _ S H A D D 1 6 (  
     u i n t 3 2 _ t   x ,  
     u i n t 3 2 _ t   y )  
     {  
         q 3 1 _ t   r ,   s ;  
  
         r   =   ( ( ( ( ( q 3 1 _ t ) x   < <   1 6 )   > >   1 6 )   +   ( ( ( q 3 1 _ t ) y   < <   1 6 )   > >   1 6 ) )   > >   1 )   &   ( i n t 3 2 _ t ) 0 x 0 0 0 0 F F F F ;  
         s   =   ( ( ( ( ( q 3 1 _ t ) x             )   > >   1 6 )   +   ( ( ( q 3 1 _ t ) y             )   > >   1 6 ) )   > >   1 )   &   ( i n t 3 2 _ t ) 0 x 0 0 0 0 F F F F ;  
  
         r e t u r n   ( ( u i n t 3 2 _ t ) ( ( s   < <   1 6 )   |   ( r             ) ) ) ;  
     }  
  
  
     / *  
       *   @ b r i e f   C   c u s t o m   d e f i n e d   Q S U B 1 6   f o r   M 3   a n d   M 0   p r o c e s s o r s  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   _ _ Q S U B 1 6 (  
     u i n t 3 2 _ t   x ,  
     u i n t 3 2 _ t   y )  
     {  
         q 3 1 _ t   r ,   s ;  
  
         r   =   _ _ S S A T ( ( ( ( ( q 3 1 _ t ) x   < <   1 6 )   > >   1 6 )   -   ( ( ( q 3 1 _ t ) y   < <   1 6 )   > >   1 6 ) ) ,   1 6 )   &   ( i n t 3 2 _ t ) 0 x 0 0 0 0 F F F F ;  
         s   =   _ _ S S A T ( ( ( ( ( q 3 1 _ t ) x             )   > >   1 6 )   -   ( ( ( q 3 1 _ t ) y             )   > >   1 6 ) ) ,   1 6 )   &   ( i n t 3 2 _ t ) 0 x 0 0 0 0 F F F F ;  
  
         r e t u r n   ( ( u i n t 3 2 _ t ) ( ( s   < <   1 6 )   |   ( r             ) ) ) ;  
     }  
  
  
     / *  
       *   @ b r i e f   C   c u s t o m   d e f i n e d   S H S U B 1 6   f o r   M 3   a n d   M 0   p r o c e s s o r s  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   _ _ S H S U B 1 6 (  
     u i n t 3 2 _ t   x ,  
     u i n t 3 2 _ t   y )  
     {  
         q 3 1 _ t   r ,   s ;  
  
         r   =   ( ( ( ( ( q 3 1 _ t ) x   < <   1 6 )   > >   1 6 )   -   ( ( ( q 3 1 _ t ) y   < <   1 6 )   > >   1 6 ) )   > >   1 )   &   ( i n t 3 2 _ t ) 0 x 0 0 0 0 F F F F ;  
         s   =   ( ( ( ( ( q 3 1 _ t ) x             )   > >   1 6 )   -   ( ( ( q 3 1 _ t ) y             )   > >   1 6 ) )   > >   1 )   &   ( i n t 3 2 _ t ) 0 x 0 0 0 0 F F F F ;  
  
         r e t u r n   ( ( u i n t 3 2 _ t ) ( ( s   < <   1 6 )   |   ( r             ) ) ) ;  
     }  
  
  
     / *  
       *   @ b r i e f   C   c u s t o m   d e f i n e d   Q A S X   f o r   M 3   a n d   M 0   p r o c e s s o r s  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   _ _ Q A S X (  
     u i n t 3 2 _ t   x ,  
     u i n t 3 2 _ t   y )  
     {  
         q 3 1 _ t   r ,   s ;  
  
         r   =   _ _ S S A T ( ( ( ( ( q 3 1 _ t ) x   < <   1 6 )   > >   1 6 )   -   ( ( ( q 3 1 _ t ) y             )   > >   1 6 ) ) ,   1 6 )   &   ( i n t 3 2 _ t ) 0 x 0 0 0 0 F F F F ;  
         s   =   _ _ S S A T ( ( ( ( ( q 3 1 _ t ) x             )   > >   1 6 )   +   ( ( ( q 3 1 _ t ) y   < <   1 6 )   > >   1 6 ) ) ,   1 6 )   &   ( i n t 3 2 _ t ) 0 x 0 0 0 0 F F F F ;  
  
         r e t u r n   ( ( u i n t 3 2 _ t ) ( ( s   < <   1 6 )   |   ( r             ) ) ) ;  
     }  
  
  
     / *  
       *   @ b r i e f   C   c u s t o m   d e f i n e d   S H A S X   f o r   M 3   a n d   M 0   p r o c e s s o r s  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   _ _ S H A S X (  
     u i n t 3 2 _ t   x ,  
     u i n t 3 2 _ t   y )  
     {  
         q 3 1 _ t   r ,   s ;  
  
         r   =   ( ( ( ( ( q 3 1 _ t ) x   < <   1 6 )   > >   1 6 )   -   ( ( ( q 3 1 _ t ) y             )   > >   1 6 ) )   > >   1 )   &   ( i n t 3 2 _ t ) 0 x 0 0 0 0 F F F F ;  
         s   =   ( ( ( ( ( q 3 1 _ t ) x             )   > >   1 6 )   +   ( ( ( q 3 1 _ t ) y   < <   1 6 )   > >   1 6 ) )   > >   1 )   &   ( i n t 3 2 _ t ) 0 x 0 0 0 0 F F F F ;  
  
         r e t u r n   ( ( u i n t 3 2 _ t ) ( ( s   < <   1 6 )   |   ( r             ) ) ) ;  
     }  
  
  
     / *  
       *   @ b r i e f   C   c u s t o m   d e f i n e d   Q S A X   f o r   M 3   a n d   M 0   p r o c e s s o r s  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   _ _ Q S A X (  
     u i n t 3 2 _ t   x ,  
     u i n t 3 2 _ t   y )  
     {  
         q 3 1 _ t   r ,   s ;  
  
         r   =   _ _ S S A T ( ( ( ( ( q 3 1 _ t ) x   < <   1 6 )   > >   1 6 )   +   ( ( ( q 3 1 _ t ) y             )   > >   1 6 ) ) ,   1 6 )   &   ( i n t 3 2 _ t ) 0 x 0 0 0 0 F F F F ;  
         s   =   _ _ S S A T ( ( ( ( ( q 3 1 _ t ) x             )   > >   1 6 )   -   ( ( ( q 3 1 _ t ) y   < <   1 6 )   > >   1 6 ) ) ,   1 6 )   &   ( i n t 3 2 _ t ) 0 x 0 0 0 0 F F F F ;  
  
         r e t u r n   ( ( u i n t 3 2 _ t ) ( ( s   < <   1 6 )   |   ( r             ) ) ) ;  
     }  
  
  
     / *  
       *   @ b r i e f   C   c u s t o m   d e f i n e d   S H S A X   f o r   M 3   a n d   M 0   p r o c e s s o r s  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   _ _ S H S A X (  
     u i n t 3 2 _ t   x ,  
     u i n t 3 2 _ t   y )  
     {  
         q 3 1 _ t   r ,   s ;  
  
         r   =   ( ( ( ( ( q 3 1 _ t ) x   < <   1 6 )   > >   1 6 )   +   ( ( ( q 3 1 _ t ) y             )   > >   1 6 ) )   > >   1 )   &   ( i n t 3 2 _ t ) 0 x 0 0 0 0 F F F F ;  
         s   =   ( ( ( ( ( q 3 1 _ t ) x             )   > >   1 6 )   -   ( ( ( q 3 1 _ t ) y   < <   1 6 )   > >   1 6 ) )   > >   1 )   &   ( i n t 3 2 _ t ) 0 x 0 0 0 0 F F F F ;  
  
         r e t u r n   ( ( u i n t 3 2 _ t ) ( ( s   < <   1 6 )   |   ( r             ) ) ) ;  
     }  
  
  
     / *  
       *   @ b r i e f   C   c u s t o m   d e f i n e d   S M U S D X   f o r   M 3   a n d   M 0   p r o c e s s o r s  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   _ _ S M U S D X (  
     u i n t 3 2 _ t   x ,  
     u i n t 3 2 _ t   y )  
     {  
         r e t u r n   ( ( u i n t 3 2 _ t ) ( ( ( ( ( q 3 1 _ t ) x   < <   1 6 )   > >   1 6 )   *   ( ( ( q 3 1 _ t ) y             )   > >   1 6 ) )   -  
                                               ( ( ( ( q 3 1 _ t ) x             )   > >   1 6 )   *   ( ( ( q 3 1 _ t ) y   < <   1 6 )   > >   1 6 ) )       ) ) ;  
     }  
  
     / *  
       *   @ b r i e f   C   c u s t o m   d e f i n e d   S M U A D X   f o r   M 3   a n d   M 0   p r o c e s s o r s  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   _ _ S M U A D X (  
     u i n t 3 2 _ t   x ,  
     u i n t 3 2 _ t   y )  
     {  
         r e t u r n   ( ( u i n t 3 2 _ t ) ( ( ( ( ( q 3 1 _ t ) x   < <   1 6 )   > >   1 6 )   *   ( ( ( q 3 1 _ t ) y             )   > >   1 6 ) )   +  
                                               ( ( ( ( q 3 1 _ t ) x             )   > >   1 6 )   *   ( ( ( q 3 1 _ t ) y   < <   1 6 )   > >   1 6 ) )       ) ) ;  
     }  
  
  
     / *  
       *   @ b r i e f   C   c u s t o m   d e f i n e d   Q A D D   f o r   M 3   a n d   M 0   p r o c e s s o r s  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   i n t 3 2 _ t   _ _ Q A D D (  
     i n t 3 2 _ t   x ,  
     i n t 3 2 _ t   y )  
     {  
         r e t u r n   ( ( i n t 3 2 _ t ) ( c l i p _ q 6 3 _ t o _ q 3 1 ( ( q 6 3 _ t ) x   +   ( q 3 1 _ t ) y ) ) ) ;  
     }  
  
  
     / *  
       *   @ b r i e f   C   c u s t o m   d e f i n e d   Q S U B   f o r   M 3   a n d   M 0   p r o c e s s o r s  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   i n t 3 2 _ t   _ _ Q S U B (  
     i n t 3 2 _ t   x ,  
     i n t 3 2 _ t   y )  
     {  
         r e t u r n   ( ( i n t 3 2 _ t ) ( c l i p _ q 6 3 _ t o _ q 3 1 ( ( q 6 3 _ t ) x   -   ( q 3 1 _ t ) y ) ) ) ;  
     }  
  
  
     / *  
       *   @ b r i e f   C   c u s t o m   d e f i n e d   S M L A D   f o r   M 3   a n d   M 0   p r o c e s s o r s  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   _ _ S M L A D (  
     u i n t 3 2 _ t   x ,  
     u i n t 3 2 _ t   y ,  
     u i n t 3 2 _ t   s u m )  
     {  
         r e t u r n   ( ( u i n t 3 2 _ t ) ( ( ( ( ( q 3 1 _ t ) x   < <   1 6 )   > >   1 6 )   *   ( ( ( q 3 1 _ t ) y   < <   1 6 )   > >   1 6 ) )   +  
                                               ( ( ( ( q 3 1 _ t ) x             )   > >   1 6 )   *   ( ( ( q 3 1 _ t ) y             )   > >   1 6 ) )   +  
                                               (   ( ( q 3 1 _ t ) s u m         )                                                                     )       ) ) ;  
     }  
  
  
     / *  
       *   @ b r i e f   C   c u s t o m   d e f i n e d   S M L A D X   f o r   M 3   a n d   M 0   p r o c e s s o r s  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   _ _ S M L A D X (  
     u i n t 3 2 _ t   x ,  
     u i n t 3 2 _ t   y ,  
     u i n t 3 2 _ t   s u m )  
     {  
         r e t u r n   ( ( u i n t 3 2 _ t ) ( ( ( ( ( q 3 1 _ t ) x   < <   1 6 )   > >   1 6 )   *   ( ( ( q 3 1 _ t ) y             )   > >   1 6 ) )   +  
                                               ( ( ( ( q 3 1 _ t ) x             )   > >   1 6 )   *   ( ( ( q 3 1 _ t ) y   < <   1 6 )   > >   1 6 ) )   +  
                                               (   ( ( q 3 1 _ t ) s u m         )                                                                     )       ) ) ;  
     }  
  
  
     / *  
       *   @ b r i e f   C   c u s t o m   d e f i n e d   S M L S D X   f o r   M 3   a n d   M 0   p r o c e s s o r s  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   _ _ S M L S D X (  
     u i n t 3 2 _ t   x ,  
     u i n t 3 2 _ t   y ,  
     u i n t 3 2 _ t   s u m )  
     {  
         r e t u r n   ( ( u i n t 3 2 _ t ) ( ( ( ( ( q 3 1 _ t ) x   < <   1 6 )   > >   1 6 )   *   ( ( ( q 3 1 _ t ) y             )   > >   1 6 ) )   -  
                                               ( ( ( ( q 3 1 _ t ) x             )   > >   1 6 )   *   ( ( ( q 3 1 _ t ) y   < <   1 6 )   > >   1 6 ) )   +  
                                               (   ( ( q 3 1 _ t ) s u m         )                                                                     )       ) ) ;  
     }  
  
  
     / *  
       *   @ b r i e f   C   c u s t o m   d e f i n e d   S M L A L D   f o r   M 3   a n d   M 0   p r o c e s s o r s  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   u i n t 6 4 _ t   _ _ S M L A L D (  
     u i n t 3 2 _ t   x ,  
     u i n t 3 2 _ t   y ,  
     u i n t 6 4 _ t   s u m )  
     {  
 / *     r e t u r n   ( s u m   +   ( ( q 1 5 _ t )   ( x   > >   1 6 )   *   ( q 1 5 _ t )   ( y   > >   1 6 ) )   +   ( ( q 1 5 _ t )   x   *   ( q 1 5 _ t )   y ) ) ;   * /  
         r e t u r n   ( ( u i n t 6 4 _ t ) ( ( ( ( ( q 3 1 _ t ) x   < <   1 6 )   > >   1 6 )   *   ( ( ( q 3 1 _ t ) y   < <   1 6 )   > >   1 6 ) )   +  
                                               ( ( ( ( q 3 1 _ t ) x             )   > >   1 6 )   *   ( ( ( q 3 1 _ t ) y             )   > >   1 6 ) )   +  
                                               (   ( ( q 6 3 _ t ) s u m         )                                                                     )       ) ) ;  
     }  
  
  
     / *  
       *   @ b r i e f   C   c u s t o m   d e f i n e d   S M L A L D X   f o r   M 3   a n d   M 0   p r o c e s s o r s  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   u i n t 6 4 _ t   _ _ S M L A L D X (  
     u i n t 3 2 _ t   x ,  
     u i n t 3 2 _ t   y ,  
     u i n t 6 4 _ t   s u m )  
     {  
 / *     r e t u r n   ( s u m   +   ( ( q 1 5 _ t )   ( x   > >   1 6 )   *   ( q 1 5 _ t )   y ) )   +   ( ( q 1 5 _ t )   x   *   ( q 1 5 _ t )   ( y   > >   1 6 ) ) ;   * /  
         r e t u r n   ( ( u i n t 6 4 _ t ) ( ( ( ( ( q 3 1 _ t ) x   < <   1 6 )   > >   1 6 )   *   ( ( ( q 3 1 _ t ) y             )   > >   1 6 ) )   +  
                                               ( ( ( ( q 3 1 _ t ) x             )   > >   1 6 )   *   ( ( ( q 3 1 _ t ) y   < <   1 6 )   > >   1 6 ) )   +  
                                               (   ( ( q 6 3 _ t ) s u m         )                                                                     )       ) ) ;  
     }  
  
  
     / *  
       *   @ b r i e f   C   c u s t o m   d e f i n e d   S M U A D   f o r   M 3   a n d   M 0   p r o c e s s o r s  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   _ _ S M U A D (  
     u i n t 3 2 _ t   x ,  
     u i n t 3 2 _ t   y )  
     {  
         r e t u r n   ( ( u i n t 3 2 _ t ) ( ( ( ( ( q 3 1 _ t ) x   < <   1 6 )   > >   1 6 )   *   ( ( ( q 3 1 _ t ) y   < <   1 6 )   > >   1 6 ) )   +  
                                               ( ( ( ( q 3 1 _ t ) x             )   > >   1 6 )   *   ( ( ( q 3 1 _ t ) y             )   > >   1 6 ) )       ) ) ;  
     }  
  
  
     / *  
       *   @ b r i e f   C   c u s t o m   d e f i n e d   S M U S D   f o r   M 3   a n d   M 0   p r o c e s s o r s  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   _ _ S M U S D (  
     u i n t 3 2 _ t   x ,  
     u i n t 3 2 _ t   y )  
     {  
         r e t u r n   ( ( u i n t 3 2 _ t ) ( ( ( ( ( q 3 1 _ t ) x   < <   1 6 )   > >   1 6 )   *   ( ( ( q 3 1 _ t ) y   < <   1 6 )   > >   1 6 ) )   -  
                                               ( ( ( ( q 3 1 _ t ) x             )   > >   1 6 )   *   ( ( ( q 3 1 _ t ) y             )   > >   1 6 ) )       ) ) ;  
     }  
  
  
     / *  
       *   @ b r i e f   C   c u s t o m   d e f i n e d   S X T B 1 6   f o r   M 3   a n d   M 0   p r o c e s s o r s  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   _ _ S X T B 1 6 (  
     u i n t 3 2 _ t   x )  
     {  
         r e t u r n   ( ( u i n t 3 2 _ t ) ( ( ( ( ( q 3 1 _ t ) x   < <   2 4 )   > >   2 4 )   &   ( q 3 1 _ t ) 0 x 0 0 0 0 F F F F )   |  
                                               ( ( ( ( q 3 1 _ t ) x   < <     8 )   > >     8 )   &   ( q 3 1 _ t ) 0 x F F F F 0 0 0 0 )     ) ) ;  
     }  
  
     / *  
       *   @ b r i e f   C   c u s t o m   d e f i n e d   S M M L A   f o r   M 3   a n d   M 0   p r o c e s s o r s  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   i n t 3 2 _ t   _ _ S M M L A (  
     i n t 3 2 _ t   x ,  
     i n t 3 2 _ t   y ,  
     i n t 3 2 _ t   s u m )  
     {  
         r e t u r n   ( s u m   +   ( i n t 3 2 _ t )   ( ( ( i n t 6 4 _ t )   x   *   y )   > >   3 2 ) ) ;  
     }  
  
 # e n d i f   / *   ! d e f i n e d   ( A R M _ M A T H _ D S P )   * /  
  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   Q 7   F I R   f i l t e r .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 1 6 _ t   n u m T a p s ;                 / * * <   n u m b e r   o f   f i l t e r   c o e f f i c i e n t s   i n   t h e   f i l t e r .   * /  
         q 7 _ t   * p S t a t e ;                         / * * <   p o i n t s   t o   t h e   s t a t e   v a r i a b l e   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   n u m T a p s + b l o c k S i z e - 1 .   * /  
         q 7 _ t   * p C o e f f s ;                       / * * <   p o i n t s   t o   t h e   c o e f f i c i e n t   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   n u m T a p s . * /  
     }   a r m _ f i r _ i n s t a n c e _ q 7 ;  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   Q 1 5   F I R   f i l t e r .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 1 6 _ t   n u m T a p s ;                   / * * <   n u m b e r   o f   f i l t e r   c o e f f i c i e n t s   i n   t h e   f i l t e r .   * /  
         q 1 5 _ t   * p S t a t e ;                         / * * <   p o i n t s   t o   t h e   s t a t e   v a r i a b l e   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   n u m T a p s + b l o c k S i z e - 1 .   * /  
         q 1 5 _ t   * p C o e f f s ;                       / * * <   p o i n t s   t o   t h e   c o e f f i c i e n t   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   n u m T a p s . * /  
     }   a r m _ f i r _ i n s t a n c e _ q 1 5 ;  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   Q 3 1   F I R   f i l t e r .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 1 6 _ t   n u m T a p s ;                   / * * <   n u m b e r   o f   f i l t e r   c o e f f i c i e n t s   i n   t h e   f i l t e r .   * /  
         q 3 1 _ t   * p S t a t e ;                         / * * <   p o i n t s   t o   t h e   s t a t e   v a r i a b l e   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   n u m T a p s + b l o c k S i z e - 1 .   * /  
         q 3 1 _ t   * p C o e f f s ;                       / * * <   p o i n t s   t o   t h e   c o e f f i c i e n t   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   n u m T a p s .   * /  
     }   a r m _ f i r _ i n s t a n c e _ q 3 1 ;  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   f l o a t i n g - p o i n t   F I R   f i l t e r .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 1 6 _ t   n u m T a p s ;           / * * <   n u m b e r   o f   f i l t e r   c o e f f i c i e n t s   i n   t h e   f i l t e r .   * /  
         f l o a t 3 2 _ t   * p S t a t e ;         / * * <   p o i n t s   t o   t h e   s t a t e   v a r i a b l e   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   n u m T a p s + b l o c k S i z e - 1 .   * /  
         f l o a t 3 2 _ t   * p C o e f f s ;       / * * <   p o i n t s   t o   t h e   c o e f f i c i e n t   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   n u m T a p s .   * /  
     }   a r m _ f i r _ i n s t a n c e _ f 3 2 ;  
  
  
     / * *  
       *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   Q 7   F I R   f i l t e r .  
       *   @ p a r a m [ i n ]     S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 7   F I R   f i l t e r   s t r u c t u r e .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a .  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s .  
       * /  
     v o i d   a r m _ f i r _ q 7 (  
     c o n s t   a r m _ f i r _ i n s t a n c e _ q 7   *   S ,  
     q 7 _ t   *   p S r c ,  
     q 7 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f     I n i t i a l i z a t i o n   f u n c t i o n   f o r   t h e   Q 7   F I R   f i l t e r .  
       *   @ p a r a m [ i n , o u t ]   S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 7   F I R   s t r u c t u r e .  
       *   @ p a r a m [ i n ]           n u m T a p s         N u m b e r   o f   f i l t e r   c o e f f i c i e n t s   i n   t h e   f i l t e r .  
       *   @ p a r a m [ i n ]           p C o e f f s         p o i n t s   t o   t h e   f i l t e r   c o e f f i c i e n t s .  
       *   @ p a r a m [ i n ]           p S t a t e           p o i n t s   t o   t h e   s t a t e   b u f f e r .  
       *   @ p a r a m [ i n ]           b l o c k S i z e     n u m b e r   o f   s a m p l e s   t h a t   a r e   p r o c e s s e d .  
       * /  
     v o i d   a r m _ f i r _ i n i t _ q 7 (  
     a r m _ f i r _ i n s t a n c e _ q 7   *   S ,  
     u i n t 1 6 _ t   n u m T a p s ,  
     q 7 _ t   *   p C o e f f s ,  
     q 7 _ t   *   p S t a t e ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   Q 1 5   F I R   f i l t e r .  
       *   @ p a r a m [ i n ]     S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 1 5   F I R   s t r u c t u r e .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a .  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s .  
       * /  
     v o i d   a r m _ f i r _ q 1 5 (  
     c o n s t   a r m _ f i r _ i n s t a n c e _ q 1 5   *   S ,  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   f a s t   Q 1 5   F I R   f i l t e r   f o r   C o r t e x - M 3   a n d   C o r t e x - M 4 .  
       *   @ p a r a m [ i n ]     S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 1 5   F I R   f i l t e r   s t r u c t u r e .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a .  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s .  
       * /  
     v o i d   a r m _ f i r _ f a s t _ q 1 5 (  
     c o n s t   a r m _ f i r _ i n s t a n c e _ q 1 5   *   S ,  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f     I n i t i a l i z a t i o n   f u n c t i o n   f o r   t h e   Q 1 5   F I R   f i l t e r .  
       *   @ p a r a m [ i n , o u t ]   S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 1 5   F I R   f i l t e r   s t r u c t u r e .  
       *   @ p a r a m [ i n ]           n u m T a p s         N u m b e r   o f   f i l t e r   c o e f f i c i e n t s   i n   t h e   f i l t e r .   M u s t   b e   e v e n   a n d   g r e a t e r   t h a n   o r   e q u a l   t o   4 .  
       *   @ p a r a m [ i n ]           p C o e f f s         p o i n t s   t o   t h e   f i l t e r   c o e f f i c i e n t s .  
       *   @ p a r a m [ i n ]           p S t a t e           p o i n t s   t o   t h e   s t a t e   b u f f e r .  
       *   @ p a r a m [ i n ]           b l o c k S i z e     n u m b e r   o f   s a m p l e s   t h a t   a r e   p r o c e s s e d   a t   a   t i m e .  
       *   @ r e t u r n   T h e   f u n c t i o n   r e t u r n s   A R M _ M A T H _ S U C C E S S   i f   i n i t i a l i z a t i o n   w a s   s u c c e s s f u l   o r   A R M _ M A T H _ A R G U M E N T _ E R R O R   i f  
       *   < c o d e > n u m T a p s < / c o d e >   i s   n o t   a   s u p p o r t e d   v a l u e .  
       * /  
     a r m _ s t a t u s   a r m _ f i r _ i n i t _ q 1 5 (  
     a r m _ f i r _ i n s t a n c e _ q 1 5   *   S ,  
     u i n t 1 6 _ t   n u m T a p s ,  
     q 1 5 _ t   *   p C o e f f s ,  
     q 1 5 _ t   *   p S t a t e ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   Q 3 1   F I R   f i l t e r .  
       *   @ p a r a m [ i n ]     S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 3 1   F I R   f i l t e r   s t r u c t u r e .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a .  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s .  
       * /  
     v o i d   a r m _ f i r _ q 3 1 (  
     c o n s t   a r m _ f i r _ i n s t a n c e _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   f a s t   Q 3 1   F I R   f i l t e r   f o r   C o r t e x - M 3   a n d   C o r t e x - M 4 .  
       *   @ p a r a m [ i n ]     S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 3 1   F I R   s t r u c t u r e .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a .  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s .  
       * /  
     v o i d   a r m _ f i r _ f a s t _ q 3 1 (  
     c o n s t   a r m _ f i r _ i n s t a n c e _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f     I n i t i a l i z a t i o n   f u n c t i o n   f o r   t h e   Q 3 1   F I R   f i l t e r .  
       *   @ p a r a m [ i n , o u t ]   S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 3 1   F I R   s t r u c t u r e .  
       *   @ p a r a m [ i n ]           n u m T a p s         N u m b e r   o f   f i l t e r   c o e f f i c i e n t s   i n   t h e   f i l t e r .  
       *   @ p a r a m [ i n ]           p C o e f f s         p o i n t s   t o   t h e   f i l t e r   c o e f f i c i e n t s .  
       *   @ p a r a m [ i n ]           p S t a t e           p o i n t s   t o   t h e   s t a t e   b u f f e r .  
       *   @ p a r a m [ i n ]           b l o c k S i z e     n u m b e r   o f   s a m p l e s   t h a t   a r e   p r o c e s s e d   a t   a   t i m e .  
       * /  
     v o i d   a r m _ f i r _ i n i t _ q 3 1 (  
     a r m _ f i r _ i n s t a n c e _ q 3 1   *   S ,  
     u i n t 1 6 _ t   n u m T a p s ,  
     q 3 1 _ t   *   p C o e f f s ,  
     q 3 1 _ t   *   p S t a t e ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   f l o a t i n g - p o i n t   F I R   f i l t e r .  
       *   @ p a r a m [ i n ]     S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   f l o a t i n g - p o i n t   F I R   s t r u c t u r e .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a .  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s .  
       * /  
     v o i d   a r m _ f i r _ f 3 2 (  
     c o n s t   a r m _ f i r _ i n s t a n c e _ f 3 2   *   S ,  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f     I n i t i a l i z a t i o n   f u n c t i o n   f o r   t h e   f l o a t i n g - p o i n t   F I R   f i l t e r .  
       *   @ p a r a m [ i n , o u t ]   S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   f l o a t i n g - p o i n t   F I R   f i l t e r   s t r u c t u r e .  
       *   @ p a r a m [ i n ]           n u m T a p s         N u m b e r   o f   f i l t e r   c o e f f i c i e n t s   i n   t h e   f i l t e r .  
       *   @ p a r a m [ i n ]           p C o e f f s         p o i n t s   t o   t h e   f i l t e r   c o e f f i c i e n t s .  
       *   @ p a r a m [ i n ]           p S t a t e           p o i n t s   t o   t h e   s t a t e   b u f f e r .  
       *   @ p a r a m [ i n ]           b l o c k S i z e     n u m b e r   o f   s a m p l e s   t h a t   a r e   p r o c e s s e d   a t   a   t i m e .  
       * /  
     v o i d   a r m _ f i r _ i n i t _ f 3 2 (  
     a r m _ f i r _ i n s t a n c e _ f 3 2   *   S ,  
     u i n t 1 6 _ t   n u m T a p s ,  
     f l o a t 3 2 _ t   *   p C o e f f s ,  
     f l o a t 3 2 _ t   *   p S t a t e ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   Q 1 5   B i q u a d   c a s c a d e   f i l t e r .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         i n t 8 _ t   n u m S t a g e s ;                 / * * <   n u m b e r   o f   2 n d   o r d e r   s t a g e s   i n   t h e   f i l t e r .     O v e r a l l   o r d e r   i s   2 * n u m S t a g e s .   * /  
         q 1 5 _ t   * p S t a t e ;                       / * * <   P o i n t s   t o   t h e   a r r a y   o f   s t a t e   c o e f f i c i e n t s .     T h e   a r r a y   i s   o f   l e n g t h   4 * n u m S t a g e s .   * /  
         q 1 5 _ t   * p C o e f f s ;                     / * * <   P o i n t s   t o   t h e   a r r a y   o f   c o e f f i c i e n t s .     T h e   a r r a y   i s   o f   l e n g t h   5 * n u m S t a g e s .   * /  
         i n t 8 _ t   p o s t S h i f t ;                 / * * <   A d d i t i o n a l   s h i f t ,   i n   b i t s ,   a p p l i e d   t o   e a c h   o u t p u t   s a m p l e .   * /  
     }   a r m _ b i q u a d _ c a s d _ d f 1 _ i n s t _ q 1 5 ;  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   Q 3 1   B i q u a d   c a s c a d e   f i l t e r .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 3 2 _ t   n u m S t a g e s ;             / * * <   n u m b e r   o f   2 n d   o r d e r   s t a g e s   i n   t h e   f i l t e r .     O v e r a l l   o r d e r   i s   2 * n u m S t a g e s .   * /  
         q 3 1 _ t   * p S t a t e ;                       / * * <   P o i n t s   t o   t h e   a r r a y   o f   s t a t e   c o e f f i c i e n t s .     T h e   a r r a y   i s   o f   l e n g t h   4 * n u m S t a g e s .   * /  
         q 3 1 _ t   * p C o e f f s ;                     / * * <   P o i n t s   t o   t h e   a r r a y   o f   c o e f f i c i e n t s .     T h e   a r r a y   i s   o f   l e n g t h   5 * n u m S t a g e s .   * /  
         u i n t 8 _ t   p o s t S h i f t ;               / * * <   A d d i t i o n a l   s h i f t ,   i n   b i t s ,   a p p l i e d   t o   e a c h   o u t p u t   s a m p l e .   * /  
     }   a r m _ b i q u a d _ c a s d _ d f 1 _ i n s t _ q 3 1 ;  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   f l o a t i n g - p o i n t   B i q u a d   c a s c a d e   f i l t e r .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 3 2 _ t   n u m S t a g e s ;             / * * <   n u m b e r   o f   2 n d   o r d e r   s t a g e s   i n   t h e   f i l t e r .     O v e r a l l   o r d e r   i s   2 * n u m S t a g e s .   * /  
         f l o a t 3 2 _ t   * p S t a t e ;               / * * <   P o i n t s   t o   t h e   a r r a y   o f   s t a t e   c o e f f i c i e n t s .     T h e   a r r a y   i s   o f   l e n g t h   4 * n u m S t a g e s .   * /  
         f l o a t 3 2 _ t   * p C o e f f s ;             / * * <   P o i n t s   t o   t h e   a r r a y   o f   c o e f f i c i e n t s .     T h e   a r r a y   i s   o f   l e n g t h   5 * n u m S t a g e s .   * /  
     }   a r m _ b i q u a d _ c a s d _ d f 1 _ i n s t _ f 3 2 ;  
  
  
     / * *  
       *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   Q 1 5   B i q u a d   c a s c a d e   f i l t e r .  
       *   @ p a r a m [ i n ]     S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 1 5   B i q u a d   c a s c a d e   s t r u c t u r e .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a .  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s .  
       * /  
     v o i d   a r m _ b i q u a d _ c a s c a d e _ d f 1 _ q 1 5 (  
     c o n s t   a r m _ b i q u a d _ c a s d _ d f 1 _ i n s t _ q 1 5   *   S ,  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f     I n i t i a l i z a t i o n   f u n c t i o n   f o r   t h e   Q 1 5   B i q u a d   c a s c a d e   f i l t e r .  
       *   @ p a r a m [ i n , o u t ]   S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 1 5   B i q u a d   c a s c a d e   s t r u c t u r e .  
       *   @ p a r a m [ i n ]           n u m S t a g e s     n u m b e r   o f   2 n d   o r d e r   s t a g e s   i n   t h e   f i l t e r .  
       *   @ p a r a m [ i n ]           p C o e f f s         p o i n t s   t o   t h e   f i l t e r   c o e f f i c i e n t s .  
       *   @ p a r a m [ i n ]           p S t a t e           p o i n t s   t o   t h e   s t a t e   b u f f e r .  
       *   @ p a r a m [ i n ]           p o s t S h i f t     S h i f t   t o   b e   a p p l i e d   t o   t h e   o u t p u t .   V a r i e s   a c c o r d i n g   t o   t h e   c o e f f i c i e n t s   f o r m a t  
       * /  
     v o i d   a r m _ b i q u a d _ c a s c a d e _ d f 1 _ i n i t _ q 1 5 (  
     a r m _ b i q u a d _ c a s d _ d f 1 _ i n s t _ q 1 5   *   S ,  
     u i n t 8 _ t   n u m S t a g e s ,  
     q 1 5 _ t   *   p C o e f f s ,  
     q 1 5 _ t   *   p S t a t e ,  
     i n t 8 _ t   p o s t S h i f t ) ;  
  
  
     / * *  
       *   @ b r i e f   F a s t   b u t   l e s s   p r e c i s e   p r o c e s s i n g   f u n c t i o n   f o r   t h e   Q 1 5   B i q u a d   c a s c a d e   f i l t e r   f o r   C o r t e x - M 3   a n d   C o r t e x - M 4 .  
       *   @ p a r a m [ i n ]     S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 1 5   B i q u a d   c a s c a d e   s t r u c t u r e .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a .  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s .  
       * /  
     v o i d   a r m _ b i q u a d _ c a s c a d e _ d f 1 _ f a s t _ q 1 5 (  
     c o n s t   a r m _ b i q u a d _ c a s d _ d f 1 _ i n s t _ q 1 5   *   S ,  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   Q 3 1   B i q u a d   c a s c a d e   f i l t e r  
       *   @ p a r a m [ i n ]     S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 3 1   B i q u a d   c a s c a d e   s t r u c t u r e .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a .  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s .  
       * /  
     v o i d   a r m _ b i q u a d _ c a s c a d e _ d f 1 _ q 3 1 (  
     c o n s t   a r m _ b i q u a d _ c a s d _ d f 1 _ i n s t _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   F a s t   b u t   l e s s   p r e c i s e   p r o c e s s i n g   f u n c t i o n   f o r   t h e   Q 3 1   B i q u a d   c a s c a d e   f i l t e r   f o r   C o r t e x - M 3   a n d   C o r t e x - M 4 .  
       *   @ p a r a m [ i n ]     S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 3 1   B i q u a d   c a s c a d e   s t r u c t u r e .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a .  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s .  
       * /  
     v o i d   a r m _ b i q u a d _ c a s c a d e _ d f 1 _ f a s t _ q 3 1 (  
     c o n s t   a r m _ b i q u a d _ c a s d _ d f 1 _ i n s t _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f     I n i t i a l i z a t i o n   f u n c t i o n   f o r   t h e   Q 3 1   B i q u a d   c a s c a d e   f i l t e r .  
       *   @ p a r a m [ i n , o u t ]   S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 3 1   B i q u a d   c a s c a d e   s t r u c t u r e .  
       *   @ p a r a m [ i n ]           n u m S t a g e s     n u m b e r   o f   2 n d   o r d e r   s t a g e s   i n   t h e   f i l t e r .  
       *   @ p a r a m [ i n ]           p C o e f f s         p o i n t s   t o   t h e   f i l t e r   c o e f f i c i e n t s .  
       *   @ p a r a m [ i n ]           p S t a t e           p o i n t s   t o   t h e   s t a t e   b u f f e r .  
       *   @ p a r a m [ i n ]           p o s t S h i f t     S h i f t   t o   b e   a p p l i e d   t o   t h e   o u t p u t .   V a r i e s   a c c o r d i n g   t o   t h e   c o e f f i c i e n t s   f o r m a t  
       * /  
     v o i d   a r m _ b i q u a d _ c a s c a d e _ d f 1 _ i n i t _ q 3 1 (  
     a r m _ b i q u a d _ c a s d _ d f 1 _ i n s t _ q 3 1   *   S ,  
     u i n t 8 _ t   n u m S t a g e s ,  
     q 3 1 _ t   *   p C o e f f s ,  
     q 3 1 _ t   *   p S t a t e ,  
     i n t 8 _ t   p o s t S h i f t ) ;  
  
  
     / * *  
       *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   f l o a t i n g - p o i n t   B i q u a d   c a s c a d e   f i l t e r .  
       *   @ p a r a m [ i n ]     S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   f l o a t i n g - p o i n t   B i q u a d   c a s c a d e   s t r u c t u r e .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a .  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s .  
       * /  
     v o i d   a r m _ b i q u a d _ c a s c a d e _ d f 1 _ f 3 2 (  
     c o n s t   a r m _ b i q u a d _ c a s d _ d f 1 _ i n s t _ f 3 2   *   S ,  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f     I n i t i a l i z a t i o n   f u n c t i o n   f o r   t h e   f l o a t i n g - p o i n t   B i q u a d   c a s c a d e   f i l t e r .  
       *   @ p a r a m [ i n , o u t ]   S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   f l o a t i n g - p o i n t   B i q u a d   c a s c a d e   s t r u c t u r e .  
       *   @ p a r a m [ i n ]           n u m S t a g e s     n u m b e r   o f   2 n d   o r d e r   s t a g e s   i n   t h e   f i l t e r .  
       *   @ p a r a m [ i n ]           p C o e f f s         p o i n t s   t o   t h e   f i l t e r   c o e f f i c i e n t s .  
       *   @ p a r a m [ i n ]           p S t a t e           p o i n t s   t o   t h e   s t a t e   b u f f e r .  
       * /  
     v o i d   a r m _ b i q u a d _ c a s c a d e _ d f 1 _ i n i t _ f 3 2 (  
     a r m _ b i q u a d _ c a s d _ d f 1 _ i n s t _ f 3 2   *   S ,  
     u i n t 8 _ t   n u m S t a g e s ,  
     f l o a t 3 2 _ t   *   p C o e f f s ,  
     f l o a t 3 2 _ t   *   p S t a t e ) ;  
  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   f l o a t i n g - p o i n t   m a t r i x   s t r u c t u r e .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 1 6 _ t   n u m R o w s ;           / * * <   n u m b e r   o f   r o w s   o f   t h e   m a t r i x .           * /  
         u i n t 1 6 _ t   n u m C o l s ;           / * * <   n u m b e r   o f   c o l u m n s   o f   t h e   m a t r i x .     * /  
         f l o a t 3 2 _ t   * p D a t a ;           / * * <   p o i n t s   t o   t h e   d a t a   o f   t h e   m a t r i x .   * /  
     }   a r m _ m a t r i x _ i n s t a n c e _ f 3 2 ;  
  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   f l o a t i n g - p o i n t   m a t r i x   s t r u c t u r e .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 1 6 _ t   n u m R o w s ;           / * * <   n u m b e r   o f   r o w s   o f   t h e   m a t r i x .           * /  
         u i n t 1 6 _ t   n u m C o l s ;           / * * <   n u m b e r   o f   c o l u m n s   o f   t h e   m a t r i x .     * /  
         f l o a t 6 4 _ t   * p D a t a ;           / * * <   p o i n t s   t o   t h e   d a t a   o f   t h e   m a t r i x .   * /  
     }   a r m _ m a t r i x _ i n s t a n c e _ f 6 4 ;  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   Q 1 5   m a t r i x   s t r u c t u r e .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 1 6 _ t   n u m R o w s ;           / * * <   n u m b e r   o f   r o w s   o f   t h e   m a t r i x .           * /  
         u i n t 1 6 _ t   n u m C o l s ;           / * * <   n u m b e r   o f   c o l u m n s   o f   t h e   m a t r i x .     * /  
         q 1 5 _ t   * p D a t a ;                   / * * <   p o i n t s   t o   t h e   d a t a   o f   t h e   m a t r i x .   * /  
     }   a r m _ m a t r i x _ i n s t a n c e _ q 1 5 ;  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   Q 3 1   m a t r i x   s t r u c t u r e .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 1 6 _ t   n u m R o w s ;           / * * <   n u m b e r   o f   r o w s   o f   t h e   m a t r i x .           * /  
         u i n t 1 6 _ t   n u m C o l s ;           / * * <   n u m b e r   o f   c o l u m n s   o f   t h e   m a t r i x .     * /  
         q 3 1 _ t   * p D a t a ;                   / * * <   p o i n t s   t o   t h e   d a t a   o f   t h e   m a t r i x .   * /  
     }   a r m _ m a t r i x _ i n s t a n c e _ q 3 1 ;  
  
  
     / * *  
       *   @ b r i e f   F l o a t i n g - p o i n t   m a t r i x   a d d i t i o n .  
       *   @ p a r a m [ i n ]     p S r c A     p o i n t s   t o   t h e   f i r s t   i n p u t   m a t r i x   s t r u c t u r e  
       *   @ p a r a m [ i n ]     p S r c B     p o i n t s   t o   t h e   s e c o n d   i n p u t   m a t r i x   s t r u c t u r e  
       *   @ p a r a m [ o u t ]   p D s t       p o i n t s   t o   o u t p u t   m a t r i x   s t r u c t u r e  
       *   @ r e t u r n           T h e   f u n c t i o n   r e t u r n s   e i t h e r  
       *   < c o d e > A R M _ M A T H _ S I Z E _ M I S M A T C H < / c o d e >   o r   < c o d e > A R M _ M A T H _ S U C C E S S < / c o d e >   b a s e d   o n   t h e   o u t c o m e   o f   s i z e   c h e c k i n g .  
       * /  
     a r m _ s t a t u s   a r m _ m a t _ a d d _ f 3 2 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p S r c A ,  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p S r c B ,  
     a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p D s t ) ;  
  
  
     / * *  
       *   @ b r i e f   Q 1 5   m a t r i x   a d d i t i o n .  
       *   @ p a r a m [ i n ]       p S r c A     p o i n t s   t o   t h e   f i r s t   i n p u t   m a t r i x   s t r u c t u r e  
       *   @ p a r a m [ i n ]       p S r c B     p o i n t s   t o   t h e   s e c o n d   i n p u t   m a t r i x   s t r u c t u r e  
       *   @ p a r a m [ o u t ]     p D s t       p o i n t s   t o   o u t p u t   m a t r i x   s t r u c t u r e  
       *   @ r e t u r n           T h e   f u n c t i o n   r e t u r n s   e i t h e r  
       *   < c o d e > A R M _ M A T H _ S I Z E _ M I S M A T C H < / c o d e >   o r   < c o d e > A R M _ M A T H _ S U C C E S S < / c o d e >   b a s e d   o n   t h e   o u t c o m e   o f   s i z e   c h e c k i n g .  
       * /  
     a r m _ s t a t u s   a r m _ m a t _ a d d _ q 1 5 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p S r c A ,  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p S r c B ,  
     a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p D s t ) ;  
  
  
     / * *  
       *   @ b r i e f   Q 3 1   m a t r i x   a d d i t i o n .  
       *   @ p a r a m [ i n ]     p S r c A     p o i n t s   t o   t h e   f i r s t   i n p u t   m a t r i x   s t r u c t u r e  
       *   @ p a r a m [ i n ]     p S r c B     p o i n t s   t o   t h e   s e c o n d   i n p u t   m a t r i x   s t r u c t u r e  
       *   @ p a r a m [ o u t ]   p D s t       p o i n t s   t o   o u t p u t   m a t r i x   s t r u c t u r e  
       *   @ r e t u r n           T h e   f u n c t i o n   r e t u r n s   e i t h e r  
       *   < c o d e > A R M _ M A T H _ S I Z E _ M I S M A T C H < / c o d e >   o r   < c o d e > A R M _ M A T H _ S U C C E S S < / c o d e >   b a s e d   o n   t h e   o u t c o m e   o f   s i z e   c h e c k i n g .  
       * /  
     a r m _ s t a t u s   a r m _ m a t _ a d d _ q 3 1 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   p S r c A ,  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   p S r c B ,  
     a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   p D s t ) ;  
  
  
     / * *  
       *   @ b r i e f   F l o a t i n g - p o i n t ,   c o m p l e x ,   m a t r i x   m u l t i p l i c a t i o n .  
       *   @ p a r a m [ i n ]     p S r c A     p o i n t s   t o   t h e   f i r s t   i n p u t   m a t r i x   s t r u c t u r e  
       *   @ p a r a m [ i n ]     p S r c B     p o i n t s   t o   t h e   s e c o n d   i n p u t   m a t r i x   s t r u c t u r e  
       *   @ p a r a m [ o u t ]   p D s t       p o i n t s   t o   o u t p u t   m a t r i x   s t r u c t u r e  
       *   @ r e t u r n           T h e   f u n c t i o n   r e t u r n s   e i t h e r  
       *   < c o d e > A R M _ M A T H _ S I Z E _ M I S M A T C H < / c o d e >   o r   < c o d e > A R M _ M A T H _ S U C C E S S < / c o d e >   b a s e d   o n   t h e   o u t c o m e   o f   s i z e   c h e c k i n g .  
       * /  
     a r m _ s t a t u s   a r m _ m a t _ c m p l x _ m u l t _ f 3 2 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p S r c A ,  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p S r c B ,  
     a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p D s t ) ;  
  
  
     / * *  
       *   @ b r i e f   Q 1 5 ,   c o m p l e x ,     m a t r i x   m u l t i p l i c a t i o n .  
       *   @ p a r a m [ i n ]     p S r c A     p o i n t s   t o   t h e   f i r s t   i n p u t   m a t r i x   s t r u c t u r e  
       *   @ p a r a m [ i n ]     p S r c B     p o i n t s   t o   t h e   s e c o n d   i n p u t   m a t r i x   s t r u c t u r e  
       *   @ p a r a m [ o u t ]   p D s t       p o i n t s   t o   o u t p u t   m a t r i x   s t r u c t u r e  
       *   @ r e t u r n           T h e   f u n c t i o n   r e t u r n s   e i t h e r  
       *   < c o d e > A R M _ M A T H _ S I Z E _ M I S M A T C H < / c o d e >   o r   < c o d e > A R M _ M A T H _ S U C C E S S < / c o d e >   b a s e d   o n   t h e   o u t c o m e   o f   s i z e   c h e c k i n g .  
       * /  
     a r m _ s t a t u s   a r m _ m a t _ c m p l x _ m u l t _ q 1 5 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p S r c A ,  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p S r c B ,  
     a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p D s t ,  
     q 1 5 _ t   *   p S c r a t c h ) ;  
  
  
     / * *  
       *   @ b r i e f   Q 3 1 ,   c o m p l e x ,   m a t r i x   m u l t i p l i c a t i o n .  
       *   @ p a r a m [ i n ]     p S r c A     p o i n t s   t o   t h e   f i r s t   i n p u t   m a t r i x   s t r u c t u r e  
       *   @ p a r a m [ i n ]     p S r c B     p o i n t s   t o   t h e   s e c o n d   i n p u t   m a t r i x   s t r u c t u r e  
       *   @ p a r a m [ o u t ]   p D s t       p o i n t s   t o   o u t p u t   m a t r i x   s t r u c t u r e  
       *   @ r e t u r n           T h e   f u n c t i o n   r e t u r n s   e i t h e r  
       *   < c o d e > A R M _ M A T H _ S I Z E _ M I S M A T C H < / c o d e >   o r   < c o d e > A R M _ M A T H _ S U C C E S S < / c o d e >   b a s e d   o n   t h e   o u t c o m e   o f   s i z e   c h e c k i n g .  
       * /  
     a r m _ s t a t u s   a r m _ m a t _ c m p l x _ m u l t _ q 3 1 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   p S r c A ,  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   p S r c B ,  
     a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   p D s t ) ;  
  
  
     / * *  
       *   @ b r i e f   F l o a t i n g - p o i n t   m a t r i x   t r a n s p o s e .  
       *   @ p a r a m [ i n ]     p S r c     p o i n t s   t o   t h e   i n p u t   m a t r i x  
       *   @ p a r a m [ o u t ]   p D s t     p o i n t s   t o   t h e   o u t p u t   m a t r i x  
       *   @ r e t u r n         T h e   f u n c t i o n   r e t u r n s   e i t h e r     < c o d e > A R M _ M A T H _ S I Z E _ M I S M A T C H < / c o d e >  
       *   o r   < c o d e > A R M _ M A T H _ S U C C E S S < / c o d e >   b a s e d   o n   t h e   o u t c o m e   o f   s i z e   c h e c k i n g .  
       * /  
     a r m _ s t a t u s   a r m _ m a t _ t r a n s _ f 3 2 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p S r c ,  
     a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p D s t ) ;  
  
  
     / * *  
       *   @ b r i e f   Q 1 5   m a t r i x   t r a n s p o s e .  
       *   @ p a r a m [ i n ]     p S r c     p o i n t s   t o   t h e   i n p u t   m a t r i x  
       *   @ p a r a m [ o u t ]   p D s t     p o i n t s   t o   t h e   o u t p u t   m a t r i x  
       *   @ r e t u r n         T h e   f u n c t i o n   r e t u r n s   e i t h e r     < c o d e > A R M _ M A T H _ S I Z E _ M I S M A T C H < / c o d e >  
       *   o r   < c o d e > A R M _ M A T H _ S U C C E S S < / c o d e >   b a s e d   o n   t h e   o u t c o m e   o f   s i z e   c h e c k i n g .  
       * /  
     a r m _ s t a t u s   a r m _ m a t _ t r a n s _ q 1 5 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p S r c ,  
     a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p D s t ) ;  
  
  
     / * *  
       *   @ b r i e f   Q 3 1   m a t r i x   t r a n s p o s e .  
       *   @ p a r a m [ i n ]     p S r c     p o i n t s   t o   t h e   i n p u t   m a t r i x  
       *   @ p a r a m [ o u t ]   p D s t     p o i n t s   t o   t h e   o u t p u t   m a t r i x  
       *   @ r e t u r n         T h e   f u n c t i o n   r e t u r n s   e i t h e r     < c o d e > A R M _ M A T H _ S I Z E _ M I S M A T C H < / c o d e >  
       *   o r   < c o d e > A R M _ M A T H _ S U C C E S S < / c o d e >   b a s e d   o n   t h e   o u t c o m e   o f   s i z e   c h e c k i n g .  
       * /  
     a r m _ s t a t u s   a r m _ m a t _ t r a n s _ q 3 1 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   p S r c ,  
     a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   p D s t ) ;  
  
  
     / * *  
       *   @ b r i e f   F l o a t i n g - p o i n t   m a t r i x   m u l t i p l i c a t i o n  
       *   @ p a r a m [ i n ]     p S r c A     p o i n t s   t o   t h e   f i r s t   i n p u t   m a t r i x   s t r u c t u r e  
       *   @ p a r a m [ i n ]     p S r c B     p o i n t s   t o   t h e   s e c o n d   i n p u t   m a t r i x   s t r u c t u r e  
       *   @ p a r a m [ o u t ]   p D s t       p o i n t s   t o   o u t p u t   m a t r i x   s t r u c t u r e  
       *   @ r e t u r n           T h e   f u n c t i o n   r e t u r n s   e i t h e r  
       *   < c o d e > A R M _ M A T H _ S I Z E _ M I S M A T C H < / c o d e >   o r   < c o d e > A R M _ M A T H _ S U C C E S S < / c o d e >   b a s e d   o n   t h e   o u t c o m e   o f   s i z e   c h e c k i n g .  
       * /  
     a r m _ s t a t u s   a r m _ m a t _ m u l t _ f 3 2 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p S r c A ,  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p S r c B ,  
     a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p D s t ) ;  
  
  
     / * *  
       *   @ b r i e f   Q 1 5   m a t r i x   m u l t i p l i c a t i o n  
       *   @ p a r a m [ i n ]     p S r c A       p o i n t s   t o   t h e   f i r s t   i n p u t   m a t r i x   s t r u c t u r e  
       *   @ p a r a m [ i n ]     p S r c B       p o i n t s   t o   t h e   s e c o n d   i n p u t   m a t r i x   s t r u c t u r e  
       *   @ p a r a m [ o u t ]   p D s t         p o i n t s   t o   o u t p u t   m a t r i x   s t r u c t u r e  
       *   @ p a r a m [ i n ]     p S t a t e     p o i n t s   t o   t h e   a r r a y   f o r   s t o r i n g   i n t e r m e d i a t e   r e s u l t s  
       *   @ r e t u r n           T h e   f u n c t i o n   r e t u r n s   e i t h e r  
       *   < c o d e > A R M _ M A T H _ S I Z E _ M I S M A T C H < / c o d e >   o r   < c o d e > A R M _ M A T H _ S U C C E S S < / c o d e >   b a s e d   o n   t h e   o u t c o m e   o f   s i z e   c h e c k i n g .  
       * /  
     a r m _ s t a t u s   a r m _ m a t _ m u l t _ q 1 5 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p S r c A ,  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p S r c B ,  
     a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p D s t ,  
     q 1 5 _ t   *   p S t a t e ) ;  
  
  
     / * *  
       *   @ b r i e f   Q 1 5   m a t r i x   m u l t i p l i c a t i o n   ( f a s t   v a r i a n t )   f o r   C o r t e x - M 3   a n d   C o r t e x - M 4  
       *   @ p a r a m [ i n ]     p S r c A       p o i n t s   t o   t h e   f i r s t   i n p u t   m a t r i x   s t r u c t u r e  
       *   @ p a r a m [ i n ]     p S r c B       p o i n t s   t o   t h e   s e c o n d   i n p u t   m a t r i x   s t r u c t u r e  
       *   @ p a r a m [ o u t ]   p D s t         p o i n t s   t o   o u t p u t   m a t r i x   s t r u c t u r e  
       *   @ p a r a m [ i n ]     p S t a t e     p o i n t s   t o   t h e   a r r a y   f o r   s t o r i n g   i n t e r m e d i a t e   r e s u l t s  
       *   @ r e t u r n           T h e   f u n c t i o n   r e t u r n s   e i t h e r  
       *   < c o d e > A R M _ M A T H _ S I Z E _ M I S M A T C H < / c o d e >   o r   < c o d e > A R M _ M A T H _ S U C C E S S < / c o d e >   b a s e d   o n   t h e   o u t c o m e   o f   s i z e   c h e c k i n g .  
       * /  
     a r m _ s t a t u s   a r m _ m a t _ m u l t _ f a s t _ q 1 5 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p S r c A ,  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p S r c B ,  
     a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p D s t ,  
     q 1 5 _ t   *   p S t a t e ) ;  
  
  
     / * *  
       *   @ b r i e f   Q 3 1   m a t r i x   m u l t i p l i c a t i o n  
       *   @ p a r a m [ i n ]     p S r c A     p o i n t s   t o   t h e   f i r s t   i n p u t   m a t r i x   s t r u c t u r e  
       *   @ p a r a m [ i n ]     p S r c B     p o i n t s   t o   t h e   s e c o n d   i n p u t   m a t r i x   s t r u c t u r e  
       *   @ p a r a m [ o u t ]   p D s t       p o i n t s   t o   o u t p u t   m a t r i x   s t r u c t u r e  
       *   @ r e t u r n           T h e   f u n c t i o n   r e t u r n s   e i t h e r  
       *   < c o d e > A R M _ M A T H _ S I Z E _ M I S M A T C H < / c o d e >   o r   < c o d e > A R M _ M A T H _ S U C C E S S < / c o d e >   b a s e d   o n   t h e   o u t c o m e   o f   s i z e   c h e c k i n g .  
       * /  
     a r m _ s t a t u s   a r m _ m a t _ m u l t _ q 3 1 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   p S r c A ,  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   p S r c B ,  
     a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   p D s t ) ;  
  
  
     / * *  
       *   @ b r i e f   Q 3 1   m a t r i x   m u l t i p l i c a t i o n   ( f a s t   v a r i a n t )   f o r   C o r t e x - M 3   a n d   C o r t e x - M 4  
       *   @ p a r a m [ i n ]     p S r c A     p o i n t s   t o   t h e   f i r s t   i n p u t   m a t r i x   s t r u c t u r e  
       *   @ p a r a m [ i n ]     p S r c B     p o i n t s   t o   t h e   s e c o n d   i n p u t   m a t r i x   s t r u c t u r e  
       *   @ p a r a m [ o u t ]   p D s t       p o i n t s   t o   o u t p u t   m a t r i x   s t r u c t u r e  
       *   @ r e t u r n           T h e   f u n c t i o n   r e t u r n s   e i t h e r  
       *   < c o d e > A R M _ M A T H _ S I Z E _ M I S M A T C H < / c o d e >   o r   < c o d e > A R M _ M A T H _ S U C C E S S < / c o d e >   b a s e d   o n   t h e   o u t c o m e   o f   s i z e   c h e c k i n g .  
       * /  
     a r m _ s t a t u s   a r m _ m a t _ m u l t _ f a s t _ q 3 1 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   p S r c A ,  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   p S r c B ,  
     a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   p D s t ) ;  
  
  
     / * *  
       *   @ b r i e f   F l o a t i n g - p o i n t   m a t r i x   s u b t r a c t i o n  
       *   @ p a r a m [ i n ]     p S r c A     p o i n t s   t o   t h e   f i r s t   i n p u t   m a t r i x   s t r u c t u r e  
       *   @ p a r a m [ i n ]     p S r c B     p o i n t s   t o   t h e   s e c o n d   i n p u t   m a t r i x   s t r u c t u r e  
       *   @ p a r a m [ o u t ]   p D s t       p o i n t s   t o   o u t p u t   m a t r i x   s t r u c t u r e  
       *   @ r e t u r n           T h e   f u n c t i o n   r e t u r n s   e i t h e r  
       *   < c o d e > A R M _ M A T H _ S I Z E _ M I S M A T C H < / c o d e >   o r   < c o d e > A R M _ M A T H _ S U C C E S S < / c o d e >   b a s e d   o n   t h e   o u t c o m e   o f   s i z e   c h e c k i n g .  
       * /  
     a r m _ s t a t u s   a r m _ m a t _ s u b _ f 3 2 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p S r c A ,  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p S r c B ,  
     a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p D s t ) ;  
  
  
     / * *  
       *   @ b r i e f   Q 1 5   m a t r i x   s u b t r a c t i o n  
       *   @ p a r a m [ i n ]     p S r c A     p o i n t s   t o   t h e   f i r s t   i n p u t   m a t r i x   s t r u c t u r e  
       *   @ p a r a m [ i n ]     p S r c B     p o i n t s   t o   t h e   s e c o n d   i n p u t   m a t r i x   s t r u c t u r e  
       *   @ p a r a m [ o u t ]   p D s t       p o i n t s   t o   o u t p u t   m a t r i x   s t r u c t u r e  
       *   @ r e t u r n           T h e   f u n c t i o n   r e t u r n s   e i t h e r  
       *   < c o d e > A R M _ M A T H _ S I Z E _ M I S M A T C H < / c o d e >   o r   < c o d e > A R M _ M A T H _ S U C C E S S < / c o d e >   b a s e d   o n   t h e   o u t c o m e   o f   s i z e   c h e c k i n g .  
       * /  
     a r m _ s t a t u s   a r m _ m a t _ s u b _ q 1 5 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p S r c A ,  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p S r c B ,  
     a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p D s t ) ;  
  
  
     / * *  
       *   @ b r i e f   Q 3 1   m a t r i x   s u b t r a c t i o n  
       *   @ p a r a m [ i n ]     p S r c A     p o i n t s   t o   t h e   f i r s t   i n p u t   m a t r i x   s t r u c t u r e  
       *   @ p a r a m [ i n ]     p S r c B     p o i n t s   t o   t h e   s e c o n d   i n p u t   m a t r i x   s t r u c t u r e  
       *   @ p a r a m [ o u t ]   p D s t       p o i n t s   t o   o u t p u t   m a t r i x   s t r u c t u r e  
       *   @ r e t u r n           T h e   f u n c t i o n   r e t u r n s   e i t h e r  
       *   < c o d e > A R M _ M A T H _ S I Z E _ M I S M A T C H < / c o d e >   o r   < c o d e > A R M _ M A T H _ S U C C E S S < / c o d e >   b a s e d   o n   t h e   o u t c o m e   o f   s i z e   c h e c k i n g .  
       * /  
     a r m _ s t a t u s   a r m _ m a t _ s u b _ q 3 1 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   p S r c A ,  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   p S r c B ,  
     a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   p D s t ) ;  
  
  
     / * *  
       *   @ b r i e f   F l o a t i n g - p o i n t   m a t r i x   s c a l i n g .  
       *   @ p a r a m [ i n ]     p S r c       p o i n t s   t o   t h e   i n p u t   m a t r i x  
       *   @ p a r a m [ i n ]     s c a l e     s c a l e   f a c t o r  
       *   @ p a r a m [ o u t ]   p D s t       p o i n t s   t o   t h e   o u t p u t   m a t r i x  
       *   @ r e t u r n           T h e   f u n c t i o n   r e t u r n s   e i t h e r  
       *   < c o d e > A R M _ M A T H _ S I Z E _ M I S M A T C H < / c o d e >   o r   < c o d e > A R M _ M A T H _ S U C C E S S < / c o d e >   b a s e d   o n   t h e   o u t c o m e   o f   s i z e   c h e c k i n g .  
       * /  
     a r m _ s t a t u s   a r m _ m a t _ s c a l e _ f 3 2 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p S r c ,  
     f l o a t 3 2 _ t   s c a l e ,  
     a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p D s t ) ;  
  
  
     / * *  
       *   @ b r i e f   Q 1 5   m a t r i x   s c a l i n g .  
       *   @ p a r a m [ i n ]     p S r c                 p o i n t s   t o   i n p u t   m a t r i x  
       *   @ p a r a m [ i n ]     s c a l e F r a c t     f r a c t i o n a l   p o r t i o n   o f   t h e   s c a l e   f a c t o r  
       *   @ p a r a m [ i n ]     s h i f t               n u m b e r   o f   b i t s   t o   s h i f t   t h e   r e s u l t   b y  
       *   @ p a r a m [ o u t ]   p D s t                 p o i n t s   t o   o u t p u t   m a t r i x  
       *   @ r e t u r n           T h e   f u n c t i o n   r e t u r n s   e i t h e r  
       *   < c o d e > A R M _ M A T H _ S I Z E _ M I S M A T C H < / c o d e >   o r   < c o d e > A R M _ M A T H _ S U C C E S S < / c o d e >   b a s e d   o n   t h e   o u t c o m e   o f   s i z e   c h e c k i n g .  
       * /  
     a r m _ s t a t u s   a r m _ m a t _ s c a l e _ q 1 5 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p S r c ,  
     q 1 5 _ t   s c a l e F r a c t ,  
     i n t 3 2 _ t   s h i f t ,  
     a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p D s t ) ;  
  
  
     / * *  
       *   @ b r i e f   Q 3 1   m a t r i x   s c a l i n g .  
       *   @ p a r a m [ i n ]     p S r c                 p o i n t s   t o   i n p u t   m a t r i x  
       *   @ p a r a m [ i n ]     s c a l e F r a c t     f r a c t i o n a l   p o r t i o n   o f   t h e   s c a l e   f a c t o r  
       *   @ p a r a m [ i n ]     s h i f t               n u m b e r   o f   b i t s   t o   s h i f t   t h e   r e s u l t   b y  
       *   @ p a r a m [ o u t ]   p D s t                 p o i n t s   t o   o u t p u t   m a t r i x   s t r u c t u r e  
       *   @ r e t u r n           T h e   f u n c t i o n   r e t u r n s   e i t h e r  
       *   < c o d e > A R M _ M A T H _ S I Z E _ M I S M A T C H < / c o d e >   o r   < c o d e > A R M _ M A T H _ S U C C E S S < / c o d e >   b a s e d   o n   t h e   o u t c o m e   o f   s i z e   c h e c k i n g .  
       * /  
     a r m _ s t a t u s   a r m _ m a t _ s c a l e _ q 3 1 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   p S r c ,  
     q 3 1 _ t   s c a l e F r a c t ,  
     i n t 3 2 _ t   s h i f t ,  
     a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   p D s t ) ;  
  
  
     / * *  
       *   @ b r i e f     Q 3 1   m a t r i x   i n i t i a l i z a t i o n .  
       *   @ p a r a m [ i n , o u t ]   S                   p o i n t s   t o   a n   i n s t a n c e   o f   t h e   f l o a t i n g - p o i n t   m a t r i x   s t r u c t u r e .  
       *   @ p a r a m [ i n ]           n R o w s           n u m b e r   o f   r o w s   i n   t h e   m a t r i x .  
       *   @ p a r a m [ i n ]           n C o l u m n s     n u m b e r   o f   c o l u m n s   i n   t h e   m a t r i x .  
       *   @ p a r a m [ i n ]           p D a t a           p o i n t s   t o   t h e   m a t r i x   d a t a   a r r a y .  
       * /  
     v o i d   a r m _ m a t _ i n i t _ q 3 1 (  
     a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   S ,  
     u i n t 1 6 _ t   n R o w s ,  
     u i n t 1 6 _ t   n C o l u m n s ,  
     q 3 1 _ t   *   p D a t a ) ;  
  
  
     / * *  
       *   @ b r i e f     Q 1 5   m a t r i x   i n i t i a l i z a t i o n .  
       *   @ p a r a m [ i n , o u t ]   S                   p o i n t s   t o   a n   i n s t a n c e   o f   t h e   f l o a t i n g - p o i n t   m a t r i x   s t r u c t u r e .  
       *   @ p a r a m [ i n ]           n R o w s           n u m b e r   o f   r o w s   i n   t h e   m a t r i x .  
       *   @ p a r a m [ i n ]           n C o l u m n s     n u m b e r   o f   c o l u m n s   i n   t h e   m a t r i x .  
       *   @ p a r a m [ i n ]           p D a t a           p o i n t s   t o   t h e   m a t r i x   d a t a   a r r a y .  
       * /  
     v o i d   a r m _ m a t _ i n i t _ q 1 5 (  
     a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   S ,  
     u i n t 1 6 _ t   n R o w s ,  
     u i n t 1 6 _ t   n C o l u m n s ,  
     q 1 5 _ t   *   p D a t a ) ;  
  
  
     / * *  
       *   @ b r i e f     F l o a t i n g - p o i n t   m a t r i x   i n i t i a l i z a t i o n .  
       *   @ p a r a m [ i n , o u t ]   S                   p o i n t s   t o   a n   i n s t a n c e   o f   t h e   f l o a t i n g - p o i n t   m a t r i x   s t r u c t u r e .  
       *   @ p a r a m [ i n ]           n R o w s           n u m b e r   o f   r o w s   i n   t h e   m a t r i x .  
       *   @ p a r a m [ i n ]           n C o l u m n s     n u m b e r   o f   c o l u m n s   i n   t h e   m a t r i x .  
       *   @ p a r a m [ i n ]           p D a t a           p o i n t s   t o   t h e   m a t r i x   d a t a   a r r a y .  
       * /  
     v o i d   a r m _ m a t _ i n i t _ f 3 2 (  
     a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   S ,  
     u i n t 1 6 _ t   n R o w s ,  
     u i n t 1 6 _ t   n C o l u m n s ,  
     f l o a t 3 2 _ t   *   p D a t a ) ;  
  
  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   Q 1 5   P I D   C o n t r o l .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         q 1 5 _ t   A 0 ;                       / * * <   T h e   d e r i v e d   g a i n ,   A 0   =   K p   +   K i   +   K d   .   * /  
 # i f   ! d e f i n e d   ( A R M _ M A T H _ D S P )  
         q 1 5 _ t   A 1 ;  
         q 1 5 _ t   A 2 ;  
 # e l s e  
         q 3 1 _ t   A 1 ;                       / * * <   T h e   d e r i v e d   g a i n   A 1   =   - K p   -   2 K d   |   K d . * /  
 # e n d i f  
         q 1 5 _ t   s t a t e [ 3 ] ;           / * * <   T h e   s t a t e   a r r a y   o f   l e n g t h   3 .   * /  
         q 1 5 _ t   K p ;                       / * * <   T h e   p r o p o r t i o n a l   g a i n .   * /  
         q 1 5 _ t   K i ;                       / * * <   T h e   i n t e g r a l   g a i n .   * /  
         q 1 5 _ t   K d ;                       / * * <   T h e   d e r i v a t i v e   g a i n .   * /  
     }   a r m _ p i d _ i n s t a n c e _ q 1 5 ;  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   Q 3 1   P I D   C o n t r o l .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         q 3 1 _ t   A 0 ;                         / * * <   T h e   d e r i v e d   g a i n ,   A 0   =   K p   +   K i   +   K d   .   * /  
         q 3 1 _ t   A 1 ;                         / * * <   T h e   d e r i v e d   g a i n ,   A 1   =   - K p   -   2 K d .   * /  
         q 3 1 _ t   A 2 ;                         / * * <   T h e   d e r i v e d   g a i n ,   A 2   =   K d   .   * /  
         q 3 1 _ t   s t a t e [ 3 ] ;             / * * <   T h e   s t a t e   a r r a y   o f   l e n g t h   3 .   * /  
         q 3 1 _ t   K p ;                         / * * <   T h e   p r o p o r t i o n a l   g a i n .   * /  
         q 3 1 _ t   K i ;                         / * * <   T h e   i n t e g r a l   g a i n .   * /  
         q 3 1 _ t   K d ;                         / * * <   T h e   d e r i v a t i v e   g a i n .   * /  
     }   a r m _ p i d _ i n s t a n c e _ q 3 1 ;  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   f l o a t i n g - p o i n t   P I D   C o n t r o l .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         f l o a t 3 2 _ t   A 0 ;                     / * * <   T h e   d e r i v e d   g a i n ,   A 0   =   K p   +   K i   +   K d   .   * /  
         f l o a t 3 2 _ t   A 1 ;                     / * * <   T h e   d e r i v e d   g a i n ,   A 1   =   - K p   -   2 K d .   * /  
         f l o a t 3 2 _ t   A 2 ;                     / * * <   T h e   d e r i v e d   g a i n ,   A 2   =   K d   .   * /  
         f l o a t 3 2 _ t   s t a t e [ 3 ] ;         / * * <   T h e   s t a t e   a r r a y   o f   l e n g t h   3 .   * /  
         f l o a t 3 2 _ t   K p ;                     / * * <   T h e   p r o p o r t i o n a l   g a i n .   * /  
         f l o a t 3 2 _ t   K i ;                     / * * <   T h e   i n t e g r a l   g a i n .   * /  
         f l o a t 3 2 _ t   K d ;                     / * * <   T h e   d e r i v a t i v e   g a i n .   * /  
     }   a r m _ p i d _ i n s t a n c e _ f 3 2 ;  
  
  
  
     / * *  
       *   @ b r i e f     I n i t i a l i z a t i o n   f u n c t i o n   f o r   t h e   f l o a t i n g - p o i n t   P I D   C o n t r o l .  
       *   @ p a r a m [ i n , o u t ]   S                               p o i n t s   t o   a n   i n s t a n c e   o f   t h e   P I D   s t r u c t u r e .  
       *   @ p a r a m [ i n ]           r e s e t S t a t e F l a g     f l a g   t o   r e s e t   t h e   s t a t e .   0   =   n o   c h a n g e   i n   s t a t e   1   =   r e s e t   t h e   s t a t e .  
       * /  
     v o i d   a r m _ p i d _ i n i t _ f 3 2 (  
     a r m _ p i d _ i n s t a n c e _ f 3 2   *   S ,  
     i n t 3 2 _ t   r e s e t S t a t e F l a g ) ;  
  
  
     / * *  
       *   @ b r i e f     R e s e t   f u n c t i o n   f o r   t h e   f l o a t i n g - p o i n t   P I D   C o n t r o l .  
       *   @ p a r a m [ i n , o u t ]   S     i s   a n   i n s t a n c e   o f   t h e   f l o a t i n g - p o i n t   P I D   C o n t r o l   s t r u c t u r e  
       * /  
     v o i d   a r m _ p i d _ r e s e t _ f 3 2 (  
     a r m _ p i d _ i n s t a n c e _ f 3 2   *   S ) ;  
  
  
     / * *  
       *   @ b r i e f     I n i t i a l i z a t i o n   f u n c t i o n   f o r   t h e   Q 3 1   P I D   C o n t r o l .  
       *   @ p a r a m [ i n , o u t ]   S                               p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 1 5   P I D   s t r u c t u r e .  
       *   @ p a r a m [ i n ]           r e s e t S t a t e F l a g     f l a g   t o   r e s e t   t h e   s t a t e .   0   =   n o   c h a n g e   i n   s t a t e   1   =   r e s e t   t h e   s t a t e .  
       * /  
     v o i d   a r m _ p i d _ i n i t _ q 3 1 (  
     a r m _ p i d _ i n s t a n c e _ q 3 1   *   S ,  
     i n t 3 2 _ t   r e s e t S t a t e F l a g ) ;  
  
  
     / * *  
       *   @ b r i e f     R e s e t   f u n c t i o n   f o r   t h e   Q 3 1   P I D   C o n t r o l .  
       *   @ p a r a m [ i n , o u t ]   S       p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 3 1   P I D   C o n t r o l   s t r u c t u r e  
       * /  
  
     v o i d   a r m _ p i d _ r e s e t _ q 3 1 (  
     a r m _ p i d _ i n s t a n c e _ q 3 1   *   S ) ;  
  
  
     / * *  
       *   @ b r i e f     I n i t i a l i z a t i o n   f u n c t i o n   f o r   t h e   Q 1 5   P I D   C o n t r o l .  
       *   @ p a r a m [ i n , o u t ]   S                               p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 1 5   P I D   s t r u c t u r e .  
       *   @ p a r a m [ i n ]           r e s e t S t a t e F l a g     f l a g   t o   r e s e t   t h e   s t a t e .   0   =   n o   c h a n g e   i n   s t a t e   1   =   r e s e t   t h e   s t a t e .  
       * /  
     v o i d   a r m _ p i d _ i n i t _ q 1 5 (  
     a r m _ p i d _ i n s t a n c e _ q 1 5   *   S ,  
     i n t 3 2 _ t   r e s e t S t a t e F l a g ) ;  
  
  
     / * *  
       *   @ b r i e f     R e s e t   f u n c t i o n   f o r   t h e   Q 1 5   P I D   C o n t r o l .  
       *   @ p a r a m [ i n , o u t ]   S     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   q 1 5   P I D   C o n t r o l   s t r u c t u r e  
       * /  
     v o i d   a r m _ p i d _ r e s e t _ q 1 5 (  
     a r m _ p i d _ i n s t a n c e _ q 1 5   *   S ) ;  
  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   f l o a t i n g - p o i n t   L i n e a r   I n t e r p o l a t e   f u n c t i o n .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 3 2 _ t   n V a l u e s ;                       / * * <   n V a l u e s   * /  
         f l o a t 3 2 _ t   x 1 ;                               / * * <   x 1   * /  
         f l o a t 3 2 _ t   x S p a c i n g ;                   / * * <   x S p a c i n g   * /  
         f l o a t 3 2 _ t   * p Y D a t a ;                     / * * <   p o i n t e r   t o   t h e   t a b l e   o f   Y   v a l u e s   * /  
     }   a r m _ l i n e a r _ i n t e r p _ i n s t a n c e _ f 3 2 ;  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   f l o a t i n g - p o i n t   b i l i n e a r   i n t e r p o l a t i o n   f u n c t i o n .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 1 6 _ t   n u m R o w s ;       / * * <   n u m b e r   o f   r o w s   i n   t h e   d a t a   t a b l e .   * /  
         u i n t 1 6 _ t   n u m C o l s ;       / * * <   n u m b e r   o f   c o l u m n s   i n   t h e   d a t a   t a b l e .   * /  
         f l o a t 3 2 _ t   * p D a t a ;       / * * <   p o i n t s   t o   t h e   d a t a   t a b l e .   * /  
     }   a r m _ b i l i n e a r _ i n t e r p _ i n s t a n c e _ f 3 2 ;  
  
       / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   Q 3 1   b i l i n e a r   i n t e r p o l a t i o n   f u n c t i o n .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 1 6 _ t   n u m R o w s ;       / * * <   n u m b e r   o f   r o w s   i n   t h e   d a t a   t a b l e .   * /  
         u i n t 1 6 _ t   n u m C o l s ;       / * * <   n u m b e r   o f   c o l u m n s   i n   t h e   d a t a   t a b l e .   * /  
         q 3 1 _ t   * p D a t a ;               / * * <   p o i n t s   t o   t h e   d a t a   t a b l e .   * /  
     }   a r m _ b i l i n e a r _ i n t e r p _ i n s t a n c e _ q 3 1 ;  
  
       / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   Q 1 5   b i l i n e a r   i n t e r p o l a t i o n   f u n c t i o n .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 1 6 _ t   n u m R o w s ;       / * * <   n u m b e r   o f   r o w s   i n   t h e   d a t a   t a b l e .   * /  
         u i n t 1 6 _ t   n u m C o l s ;       / * * <   n u m b e r   o f   c o l u m n s   i n   t h e   d a t a   t a b l e .   * /  
         q 1 5 _ t   * p D a t a ;               / * * <   p o i n t s   t o   t h e   d a t a   t a b l e .   * /  
     }   a r m _ b i l i n e a r _ i n t e r p _ i n s t a n c e _ q 1 5 ;  
  
       / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   Q 1 5   b i l i n e a r   i n t e r p o l a t i o n   f u n c t i o n .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 1 6 _ t   n u m R o w s ;       / * * <   n u m b e r   o f   r o w s   i n   t h e   d a t a   t a b l e .   * /  
         u i n t 1 6 _ t   n u m C o l s ;       / * * <   n u m b e r   o f   c o l u m n s   i n   t h e   d a t a   t a b l e .   * /  
         q 7 _ t   * p D a t a ;                 / * * <   p o i n t s   t o   t h e   d a t a   t a b l e .   * /  
     }   a r m _ b i l i n e a r _ i n t e r p _ i n s t a n c e _ q 7 ;  
  
  
     / * *  
       *   @ b r i e f   Q 7   v e c t o r   m u l t i p l i c a t i o n .  
       *   @ p a r a m [ i n ]     p S r c A             p o i n t s   t o   t h e   f i r s t   i n p u t   v e c t o r  
       *   @ p a r a m [ i n ]     p S r c B             p o i n t s   t o   t h e   s e c o n d   i n p u t   v e c t o r  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   i n   e a c h   v e c t o r  
       * /  
     v o i d   a r m _ m u l t _ q 7 (  
     q 7 _ t   *   p S r c A ,  
     q 7 _ t   *   p S r c B ,  
     q 7 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   Q 1 5   v e c t o r   m u l t i p l i c a t i o n .  
       *   @ p a r a m [ i n ]     p S r c A             p o i n t s   t o   t h e   f i r s t   i n p u t   v e c t o r  
       *   @ p a r a m [ i n ]     p S r c B             p o i n t s   t o   t h e   s e c o n d   i n p u t   v e c t o r  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   i n   e a c h   v e c t o r  
       * /  
     v o i d   a r m _ m u l t _ q 1 5 (  
     q 1 5 _ t   *   p S r c A ,  
     q 1 5 _ t   *   p S r c B ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   Q 3 1   v e c t o r   m u l t i p l i c a t i o n .  
       *   @ p a r a m [ i n ]     p S r c A             p o i n t s   t o   t h e   f i r s t   i n p u t   v e c t o r  
       *   @ p a r a m [ i n ]     p S r c B             p o i n t s   t o   t h e   s e c o n d   i n p u t   v e c t o r  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   i n   e a c h   v e c t o r  
       * /  
     v o i d   a r m _ m u l t _ q 3 1 (  
     q 3 1 _ t   *   p S r c A ,  
     q 3 1 _ t   *   p S r c B ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   F l o a t i n g - p o i n t   v e c t o r   m u l t i p l i c a t i o n .  
       *   @ p a r a m [ i n ]     p S r c A             p o i n t s   t o   t h e   f i r s t   i n p u t   v e c t o r  
       *   @ p a r a m [ i n ]     p S r c B             p o i n t s   t o   t h e   s e c o n d   i n p u t   v e c t o r  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   i n   e a c h   v e c t o r  
       * /  
     v o i d   a r m _ m u l t _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c A ,  
     f l o a t 3 2 _ t   *   p S r c B ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   Q 1 5   C F F T / C I F F T   f u n c t i o n .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 1 6 _ t   f f t L e n ;                                   / * * <   l e n g t h   o f   t h e   F F T .   * /  
         u i n t 8 _ t   i f f t F l a g ;                                 / * * <   f l a g   t h a t   s e l e c t s   f o r w a r d   ( i f f t F l a g = 0 )   o r   i n v e r s e   ( i f f t F l a g = 1 )   t r a n s f o r m .   * /  
         u i n t 8 _ t   b i t R e v e r s e F l a g ;                     / * * <   f l a g   t h a t   e n a b l e s   ( b i t R e v e r s e F l a g = 1 )   o r   d i s a b l e s   ( b i t R e v e r s e F l a g = 0 )   b i t   r e v e r s a l   o f   o u t p u t .   * /  
         q 1 5 _ t   * p T w i d d l e ;                                   / * * <   p o i n t s   t o   t h e   S i n   t w i d d l e   f a c t o r   t a b l e .   * /  
         u i n t 1 6 _ t   * p B i t R e v T a b l e ;                     / * * <   p o i n t s   t o   t h e   b i t   r e v e r s a l   t a b l e .   * /  
         u i n t 1 6 _ t   t w i d C o e f M o d i f i e r ;               / * * <   t w i d d l e   c o e f f i c i e n t   m o d i f i e r   t h a t   s u p p o r t s   d i f f e r e n t   s i z e   F F T s   w i t h   t h e   s a m e   t w i d d l e   f a c t o r   t a b l e .   * /  
         u i n t 1 6 _ t   b i t R e v F a c t o r ;                       / * * <   b i t   r e v e r s a l   m o d i f i e r   t h a t   s u p p o r t s   d i f f e r e n t   s i z e   F F T s   w i t h   t h e   s a m e   b i t   r e v e r s a l   t a b l e .   * /  
     }   a r m _ c f f t _ r a d i x 2 _ i n s t a n c e _ q 1 5 ;  
  
 / *   D e p r e c a t e d   * /  
     a r m _ s t a t u s   a r m _ c f f t _ r a d i x 2 _ i n i t _ q 1 5 (  
     a r m _ c f f t _ r a d i x 2 _ i n s t a n c e _ q 1 5   *   S ,  
     u i n t 1 6 _ t   f f t L e n ,  
     u i n t 8 _ t   i f f t F l a g ,  
     u i n t 8 _ t   b i t R e v e r s e F l a g ) ;  
  
 / *   D e p r e c a t e d   * /  
     v o i d   a r m _ c f f t _ r a d i x 2 _ q 1 5 (  
     c o n s t   a r m _ c f f t _ r a d i x 2 _ i n s t a n c e _ q 1 5   *   S ,  
     q 1 5 _ t   *   p S r c ) ;  
  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   Q 1 5   C F F T / C I F F T   f u n c t i o n .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 1 6 _ t   f f t L e n ;                                   / * * <   l e n g t h   o f   t h e   F F T .   * /  
         u i n t 8 _ t   i f f t F l a g ;                                 / * * <   f l a g   t h a t   s e l e c t s   f o r w a r d   ( i f f t F l a g = 0 )   o r   i n v e r s e   ( i f f t F l a g = 1 )   t r a n s f o r m .   * /  
         u i n t 8 _ t   b i t R e v e r s e F l a g ;                     / * * <   f l a g   t h a t   e n a b l e s   ( b i t R e v e r s e F l a g = 1 )   o r   d i s a b l e s   ( b i t R e v e r s e F l a g = 0 )   b i t   r e v e r s a l   o f   o u t p u t .   * /  
         q 1 5 _ t   * p T w i d d l e ;                                   / * * <   p o i n t s   t o   t h e   t w i d d l e   f a c t o r   t a b l e .   * /  
         u i n t 1 6 _ t   * p B i t R e v T a b l e ;                     / * * <   p o i n t s   t o   t h e   b i t   r e v e r s a l   t a b l e .   * /  
         u i n t 1 6 _ t   t w i d C o e f M o d i f i e r ;               / * * <   t w i d d l e   c o e f f i c i e n t   m o d i f i e r   t h a t   s u p p o r t s   d i f f e r e n t   s i z e   F F T s   w i t h   t h e   s a m e   t w i d d l e   f a c t o r   t a b l e .   * /  
         u i n t 1 6 _ t   b i t R e v F a c t o r ;                       / * * <   b i t   r e v e r s a l   m o d i f i e r   t h a t   s u p p o r t s   d i f f e r e n t   s i z e   F F T s   w i t h   t h e   s a m e   b i t   r e v e r s a l   t a b l e .   * /  
     }   a r m _ c f f t _ r a d i x 4 _ i n s t a n c e _ q 1 5 ;  
  
 / *   D e p r e c a t e d   * /  
     a r m _ s t a t u s   a r m _ c f f t _ r a d i x 4 _ i n i t _ q 1 5 (  
     a r m _ c f f t _ r a d i x 4 _ i n s t a n c e _ q 1 5   *   S ,  
     u i n t 1 6 _ t   f f t L e n ,  
     u i n t 8 _ t   i f f t F l a g ,  
     u i n t 8 _ t   b i t R e v e r s e F l a g ) ;  
  
 / *   D e p r e c a t e d   * /  
     v o i d   a r m _ c f f t _ r a d i x 4 _ q 1 5 (  
     c o n s t   a r m _ c f f t _ r a d i x 4 _ i n s t a n c e _ q 1 5   *   S ,  
     q 1 5 _ t   *   p S r c ) ;  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   R a d i x - 2   Q 3 1   C F F T / C I F F T   f u n c t i o n .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 1 6 _ t   f f t L e n ;                                   / * * <   l e n g t h   o f   t h e   F F T .   * /  
         u i n t 8 _ t   i f f t F l a g ;                                 / * * <   f l a g   t h a t   s e l e c t s   f o r w a r d   ( i f f t F l a g = 0 )   o r   i n v e r s e   ( i f f t F l a g = 1 )   t r a n s f o r m .   * /  
         u i n t 8 _ t   b i t R e v e r s e F l a g ;                     / * * <   f l a g   t h a t   e n a b l e s   ( b i t R e v e r s e F l a g = 1 )   o r   d i s a b l e s   ( b i t R e v e r s e F l a g = 0 )   b i t   r e v e r s a l   o f   o u t p u t .   * /  
         q 3 1 _ t   * p T w i d d l e ;                                   / * * <   p o i n t s   t o   t h e   T w i d d l e   f a c t o r   t a b l e .   * /  
         u i n t 1 6 _ t   * p B i t R e v T a b l e ;                     / * * <   p o i n t s   t o   t h e   b i t   r e v e r s a l   t a b l e .   * /  
         u i n t 1 6 _ t   t w i d C o e f M o d i f i e r ;               / * * <   t w i d d l e   c o e f f i c i e n t   m o d i f i e r   t h a t   s u p p o r t s   d i f f e r e n t   s i z e   F F T s   w i t h   t h e   s a m e   t w i d d l e   f a c t o r   t a b l e .   * /  
         u i n t 1 6 _ t   b i t R e v F a c t o r ;                       / * * <   b i t   r e v e r s a l   m o d i f i e r   t h a t   s u p p o r t s   d i f f e r e n t   s i z e   F F T s   w i t h   t h e   s a m e   b i t   r e v e r s a l   t a b l e .   * /  
     }   a r m _ c f f t _ r a d i x 2 _ i n s t a n c e _ q 3 1 ;  
  
 / *   D e p r e c a t e d   * /  
     a r m _ s t a t u s   a r m _ c f f t _ r a d i x 2 _ i n i t _ q 3 1 (  
     a r m _ c f f t _ r a d i x 2 _ i n s t a n c e _ q 3 1   *   S ,  
     u i n t 1 6 _ t   f f t L e n ,  
     u i n t 8 _ t   i f f t F l a g ,  
     u i n t 8 _ t   b i t R e v e r s e F l a g ) ;  
  
 / *   D e p r e c a t e d   * /  
     v o i d   a r m _ c f f t _ r a d i x 2 _ q 3 1 (  
     c o n s t   a r m _ c f f t _ r a d i x 2 _ i n s t a n c e _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S r c ) ;  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   Q 3 1   C F F T / C I F F T   f u n c t i o n .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 1 6 _ t   f f t L e n ;                                   / * * <   l e n g t h   o f   t h e   F F T .   * /  
         u i n t 8 _ t   i f f t F l a g ;                                 / * * <   f l a g   t h a t   s e l e c t s   f o r w a r d   ( i f f t F l a g = 0 )   o r   i n v e r s e   ( i f f t F l a g = 1 )   t r a n s f o r m .   * /  
         u i n t 8 _ t   b i t R e v e r s e F l a g ;                     / * * <   f l a g   t h a t   e n a b l e s   ( b i t R e v e r s e F l a g = 1 )   o r   d i s a b l e s   ( b i t R e v e r s e F l a g = 0 )   b i t   r e v e r s a l   o f   o u t p u t .   * /  
         q 3 1 _ t   * p T w i d d l e ;                                   / * * <   p o i n t s   t o   t h e   t w i d d l e   f a c t o r   t a b l e .   * /  
         u i n t 1 6 _ t   * p B i t R e v T a b l e ;                     / * * <   p o i n t s   t o   t h e   b i t   r e v e r s a l   t a b l e .   * /  
         u i n t 1 6 _ t   t w i d C o e f M o d i f i e r ;               / * * <   t w i d d l e   c o e f f i c i e n t   m o d i f i e r   t h a t   s u p p o r t s   d i f f e r e n t   s i z e   F F T s   w i t h   t h e   s a m e   t w i d d l e   f a c t o r   t a b l e .   * /  
         u i n t 1 6 _ t   b i t R e v F a c t o r ;                       / * * <   b i t   r e v e r s a l   m o d i f i e r   t h a t   s u p p o r t s   d i f f e r e n t   s i z e   F F T s   w i t h   t h e   s a m e   b i t   r e v e r s a l   t a b l e .   * /  
     }   a r m _ c f f t _ r a d i x 4 _ i n s t a n c e _ q 3 1 ;  
  
 / *   D e p r e c a t e d   * /  
     v o i d   a r m _ c f f t _ r a d i x 4 _ q 3 1 (  
     c o n s t   a r m _ c f f t _ r a d i x 4 _ i n s t a n c e _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S r c ) ;  
  
 / *   D e p r e c a t e d   * /  
     a r m _ s t a t u s   a r m _ c f f t _ r a d i x 4 _ i n i t _ q 3 1 (  
     a r m _ c f f t _ r a d i x 4 _ i n s t a n c e _ q 3 1   *   S ,  
     u i n t 1 6 _ t   f f t L e n ,  
     u i n t 8 _ t   i f f t F l a g ,  
     u i n t 8 _ t   b i t R e v e r s e F l a g ) ;  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   f l o a t i n g - p o i n t   C F F T / C I F F T   f u n c t i o n .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 1 6 _ t   f f t L e n ;                                       / * * <   l e n g t h   o f   t h e   F F T .   * /  
         u i n t 8 _ t   i f f t F l a g ;                                     / * * <   f l a g   t h a t   s e l e c t s   f o r w a r d   ( i f f t F l a g = 0 )   o r   i n v e r s e   ( i f f t F l a g = 1 )   t r a n s f o r m .   * /  
         u i n t 8 _ t   b i t R e v e r s e F l a g ;                         / * * <   f l a g   t h a t   e n a b l e s   ( b i t R e v e r s e F l a g = 1 )   o r   d i s a b l e s   ( b i t R e v e r s e F l a g = 0 )   b i t   r e v e r s a l   o f   o u t p u t .   * /  
         f l o a t 3 2 _ t   * p T w i d d l e ;                               / * * <   p o i n t s   t o   t h e   T w i d d l e   f a c t o r   t a b l e .   * /  
         u i n t 1 6 _ t   * p B i t R e v T a b l e ;                         / * * <   p o i n t s   t o   t h e   b i t   r e v e r s a l   t a b l e .   * /  
         u i n t 1 6 _ t   t w i d C o e f M o d i f i e r ;                   / * * <   t w i d d l e   c o e f f i c i e n t   m o d i f i e r   t h a t   s u p p o r t s   d i f f e r e n t   s i z e   F F T s   w i t h   t h e   s a m e   t w i d d l e   f a c t o r   t a b l e .   * /  
         u i n t 1 6 _ t   b i t R e v F a c t o r ;                           / * * <   b i t   r e v e r s a l   m o d i f i e r   t h a t   s u p p o r t s   d i f f e r e n t   s i z e   F F T s   w i t h   t h e   s a m e   b i t   r e v e r s a l   t a b l e .   * /  
         f l o a t 3 2 _ t   o n e b y f f t L e n ;                           / * * <   v a l u e   o f   1 / f f t L e n .   * /  
     }   a r m _ c f f t _ r a d i x 2 _ i n s t a n c e _ f 3 2 ;  
  
 / *   D e p r e c a t e d   * /  
     a r m _ s t a t u s   a r m _ c f f t _ r a d i x 2 _ i n i t _ f 3 2 (  
     a r m _ c f f t _ r a d i x 2 _ i n s t a n c e _ f 3 2   *   S ,  
     u i n t 1 6 _ t   f f t L e n ,  
     u i n t 8 _ t   i f f t F l a g ,  
     u i n t 8 _ t   b i t R e v e r s e F l a g ) ;  
  
 / *   D e p r e c a t e d   * /  
     v o i d   a r m _ c f f t _ r a d i x 2 _ f 3 2 (  
     c o n s t   a r m _ c f f t _ r a d i x 2 _ i n s t a n c e _ f 3 2   *   S ,  
     f l o a t 3 2 _ t   *   p S r c ) ;  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   f l o a t i n g - p o i n t   C F F T / C I F F T   f u n c t i o n .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 1 6 _ t   f f t L e n ;                                       / * * <   l e n g t h   o f   t h e   F F T .   * /  
         u i n t 8 _ t   i f f t F l a g ;                                     / * * <   f l a g   t h a t   s e l e c t s   f o r w a r d   ( i f f t F l a g = 0 )   o r   i n v e r s e   ( i f f t F l a g = 1 )   t r a n s f o r m .   * /  
         u i n t 8 _ t   b i t R e v e r s e F l a g ;                         / * * <   f l a g   t h a t   e n a b l e s   ( b i t R e v e r s e F l a g = 1 )   o r   d i s a b l e s   ( b i t R e v e r s e F l a g = 0 )   b i t   r e v e r s a l   o f   o u t p u t .   * /  
         f l o a t 3 2 _ t   * p T w i d d l e ;                               / * * <   p o i n t s   t o   t h e   T w i d d l e   f a c t o r   t a b l e .   * /  
         u i n t 1 6 _ t   * p B i t R e v T a b l e ;                         / * * <   p o i n t s   t o   t h e   b i t   r e v e r s a l   t a b l e .   * /  
         u i n t 1 6 _ t   t w i d C o e f M o d i f i e r ;                   / * * <   t w i d d l e   c o e f f i c i e n t   m o d i f i e r   t h a t   s u p p o r t s   d i f f e r e n t   s i z e   F F T s   w i t h   t h e   s a m e   t w i d d l e   f a c t o r   t a b l e .   * /  
         u i n t 1 6 _ t   b i t R e v F a c t o r ;                           / * * <   b i t   r e v e r s a l   m o d i f i e r   t h a t   s u p p o r t s   d i f f e r e n t   s i z e   F F T s   w i t h   t h e   s a m e   b i t   r e v e r s a l   t a b l e .   * /  
         f l o a t 3 2 _ t   o n e b y f f t L e n ;                           / * * <   v a l u e   o f   1 / f f t L e n .   * /  
     }   a r m _ c f f t _ r a d i x 4 _ i n s t a n c e _ f 3 2 ;  
  
 / *   D e p r e c a t e d   * /  
     a r m _ s t a t u s   a r m _ c f f t _ r a d i x 4 _ i n i t _ f 3 2 (  
     a r m _ c f f t _ r a d i x 4 _ i n s t a n c e _ f 3 2   *   S ,  
     u i n t 1 6 _ t   f f t L e n ,  
     u i n t 8 _ t   i f f t F l a g ,  
     u i n t 8 _ t   b i t R e v e r s e F l a g ) ;  
  
 / *   D e p r e c a t e d   * /  
     v o i d   a r m _ c f f t _ r a d i x 4 _ f 3 2 (  
     c o n s t   a r m _ c f f t _ r a d i x 4 _ i n s t a n c e _ f 3 2   *   S ,  
     f l o a t 3 2 _ t   *   p S r c ) ;  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   f i x e d - p o i n t   C F F T / C I F F T   f u n c t i o n .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 1 6 _ t   f f t L e n ;                                       / * * <   l e n g t h   o f   t h e   F F T .   * /  
         c o n s t   q 1 5 _ t   * p T w i d d l e ;                           / * * <   p o i n t s   t o   t h e   T w i d d l e   f a c t o r   t a b l e .   * /  
         c o n s t   u i n t 1 6 _ t   * p B i t R e v T a b l e ;             / * * <   p o i n t s   t o   t h e   b i t   r e v e r s a l   t a b l e .   * /  
         u i n t 1 6 _ t   b i t R e v L e n g t h ;                           / * * <   b i t   r e v e r s a l   t a b l e   l e n g t h .   * /  
     }   a r m _ c f f t _ i n s t a n c e _ q 1 5 ;  
  
 v o i d   a r m _ c f f t _ q 1 5 (  
         c o n s t   a r m _ c f f t _ i n s t a n c e _ q 1 5   *   S ,  
         q 1 5 _ t   *   p 1 ,  
         u i n t 8 _ t   i f f t F l a g ,  
         u i n t 8 _ t   b i t R e v e r s e F l a g ) ;  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   f i x e d - p o i n t   C F F T / C I F F T   f u n c t i o n .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 1 6 _ t   f f t L e n ;                                       / * * <   l e n g t h   o f   t h e   F F T .   * /  
         c o n s t   q 3 1 _ t   * p T w i d d l e ;                           / * * <   p o i n t s   t o   t h e   T w i d d l e   f a c t o r   t a b l e .   * /  
         c o n s t   u i n t 1 6 _ t   * p B i t R e v T a b l e ;             / * * <   p o i n t s   t o   t h e   b i t   r e v e r s a l   t a b l e .   * /  
         u i n t 1 6 _ t   b i t R e v L e n g t h ;                           / * * <   b i t   r e v e r s a l   t a b l e   l e n g t h .   * /  
     }   a r m _ c f f t _ i n s t a n c e _ q 3 1 ;  
  
 v o i d   a r m _ c f f t _ q 3 1 (  
         c o n s t   a r m _ c f f t _ i n s t a n c e _ q 3 1   *   S ,  
         q 3 1 _ t   *   p 1 ,  
         u i n t 8 _ t   i f f t F l a g ,  
         u i n t 8 _ t   b i t R e v e r s e F l a g ) ;  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   f l o a t i n g - p o i n t   C F F T / C I F F T   f u n c t i o n .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 1 6 _ t   f f t L e n ;                                       / * * <   l e n g t h   o f   t h e   F F T .   * /  
         c o n s t   f l o a t 3 2 _ t   * p T w i d d l e ;                   / * * <   p o i n t s   t o   t h e   T w i d d l e   f a c t o r   t a b l e .   * /  
         c o n s t   u i n t 1 6 _ t   * p B i t R e v T a b l e ;             / * * <   p o i n t s   t o   t h e   b i t   r e v e r s a l   t a b l e .   * /  
         u i n t 1 6 _ t   b i t R e v L e n g t h ;                           / * * <   b i t   r e v e r s a l   t a b l e   l e n g t h .   * /  
     }   a r m _ c f f t _ i n s t a n c e _ f 3 2 ;  
  
     v o i d   a r m _ c f f t _ f 3 2 (  
     c o n s t   a r m _ c f f t _ i n s t a n c e _ f 3 2   *   S ,  
     f l o a t 3 2 _ t   *   p 1 ,  
     u i n t 8 _ t   i f f t F l a g ,  
     u i n t 8 _ t   b i t R e v e r s e F l a g ) ;  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   Q 1 5   R F F T / R I F F T   f u n c t i o n .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 3 2 _ t   f f t L e n R e a l ;                                             / * * <   l e n g t h   o f   t h e   r e a l   F F T .   * /  
         u i n t 8 _ t   i f f t F l a g R ;                                                 / * * <   f l a g   t h a t   s e l e c t s   f o r w a r d   ( i f f t F l a g R = 0 )   o r   i n v e r s e   ( i f f t F l a g R = 1 )   t r a n s f o r m .   * /  
         u i n t 8 _ t   b i t R e v e r s e F l a g R ;                                     / * * <   f l a g   t h a t   e n a b l e s   ( b i t R e v e r s e F l a g R = 1 )   o r   d i s a b l e s   ( b i t R e v e r s e F l a g R = 0 )   b i t   r e v e r s a l   o f   o u t p u t .   * /  
         u i n t 3 2 _ t   t w i d C o e f R M o d i f i e r ;                               / * * <   t w i d d l e   c o e f f i c i e n t   m o d i f i e r   t h a t   s u p p o r t s   d i f f e r e n t   s i z e   F F T s   w i t h   t h e   s a m e   t w i d d l e   f a c t o r   t a b l e .   * /  
         q 1 5 _ t   * p T w i d d l e A R e a l ;                                           / * * <   p o i n t s   t o   t h e   r e a l   t w i d d l e   f a c t o r   t a b l e .   * /  
         q 1 5 _ t   * p T w i d d l e B R e a l ;                                           / * * <   p o i n t s   t o   t h e   i m a g   t w i d d l e   f a c t o r   t a b l e .   * /  
         c o n s t   a r m _ c f f t _ i n s t a n c e _ q 1 5   * p C f f t ;               / * * <   p o i n t s   t o   t h e   c o m p l e x   F F T   i n s t a n c e .   * /  
     }   a r m _ r f f t _ i n s t a n c e _ q 1 5 ;  
  
     a r m _ s t a t u s   a r m _ r f f t _ i n i t _ q 1 5 (  
     a r m _ r f f t _ i n s t a n c e _ q 1 5   *   S ,  
     u i n t 3 2 _ t   f f t L e n R e a l ,  
     u i n t 3 2 _ t   i f f t F l a g R ,  
     u i n t 3 2 _ t   b i t R e v e r s e F l a g ) ;  
  
     v o i d   a r m _ r f f t _ q 1 5 (  
     c o n s t   a r m _ r f f t _ i n s t a n c e _ q 1 5   *   S ,  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ) ;  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   Q 3 1   R F F T / R I F F T   f u n c t i o n .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 3 2 _ t   f f t L e n R e a l ;                                                 / * * <   l e n g t h   o f   t h e   r e a l   F F T .   * /  
         u i n t 8 _ t   i f f t F l a g R ;                                                     / * * <   f l a g   t h a t   s e l e c t s   f o r w a r d   ( i f f t F l a g R = 0 )   o r   i n v e r s e   ( i f f t F l a g R = 1 )   t r a n s f o r m .   * /  
         u i n t 8 _ t   b i t R e v e r s e F l a g R ;                                         / * * <   f l a g   t h a t   e n a b l e s   ( b i t R e v e r s e F l a g R = 1 )   o r   d i s a b l e s   ( b i t R e v e r s e F l a g R = 0 )   b i t   r e v e r s a l   o f   o u t p u t .   * /  
         u i n t 3 2 _ t   t w i d C o e f R M o d i f i e r ;                                   / * * <   t w i d d l e   c o e f f i c i e n t   m o d i f i e r   t h a t   s u p p o r t s   d i f f e r e n t   s i z e   F F T s   w i t h   t h e   s a m e   t w i d d l e   f a c t o r   t a b l e .   * /  
         q 3 1 _ t   * p T w i d d l e A R e a l ;                                               / * * <   p o i n t s   t o   t h e   r e a l   t w i d d l e   f a c t o r   t a b l e .   * /  
         q 3 1 _ t   * p T w i d d l e B R e a l ;                                               / * * <   p o i n t s   t o   t h e   i m a g   t w i d d l e   f a c t o r   t a b l e .   * /  
         c o n s t   a r m _ c f f t _ i n s t a n c e _ q 3 1   * p C f f t ;                   / * * <   p o i n t s   t o   t h e   c o m p l e x   F F T   i n s t a n c e .   * /  
     }   a r m _ r f f t _ i n s t a n c e _ q 3 1 ;  
  
     a r m _ s t a t u s   a r m _ r f f t _ i n i t _ q 3 1 (  
     a r m _ r f f t _ i n s t a n c e _ q 3 1   *   S ,  
     u i n t 3 2 _ t   f f t L e n R e a l ,  
     u i n t 3 2 _ t   i f f t F l a g R ,  
     u i n t 3 2 _ t   b i t R e v e r s e F l a g ) ;  
  
     v o i d   a r m _ r f f t _ q 3 1 (  
     c o n s t   a r m _ r f f t _ i n s t a n c e _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ) ;  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   f l o a t i n g - p o i n t   R F F T / R I F F T   f u n c t i o n .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 3 2 _ t   f f t L e n R e a l ;                                                 / * * <   l e n g t h   o f   t h e   r e a l   F F T .   * /  
         u i n t 1 6 _ t   f f t L e n B y 2 ;                                                   / * * <   l e n g t h   o f   t h e   c o m p l e x   F F T .   * /  
         u i n t 8 _ t   i f f t F l a g R ;                                                     / * * <   f l a g   t h a t   s e l e c t s   f o r w a r d   ( i f f t F l a g R = 0 )   o r   i n v e r s e   ( i f f t F l a g R = 1 )   t r a n s f o r m .   * /  
         u i n t 8 _ t   b i t R e v e r s e F l a g R ;                                         / * * <   f l a g   t h a t   e n a b l e s   ( b i t R e v e r s e F l a g R = 1 )   o r   d i s a b l e s   ( b i t R e v e r s e F l a g R = 0 )   b i t   r e v e r s a l   o f   o u t p u t .   * /  
         u i n t 3 2 _ t   t w i d C o e f R M o d i f i e r ;                                           / * * <   t w i d d l e   c o e f f i c i e n t   m o d i f i e r   t h a t   s u p p o r t s   d i f f e r e n t   s i z e   F F T s   w i t h   t h e   s a m e   t w i d d l e   f a c t o r   t a b l e .   * /  
         f l o a t 3 2 _ t   * p T w i d d l e A R e a l ;                                       / * * <   p o i n t s   t o   t h e   r e a l   t w i d d l e   f a c t o r   t a b l e .   * /  
         f l o a t 3 2 _ t   * p T w i d d l e B R e a l ;                                       / * * <   p o i n t s   t o   t h e   i m a g   t w i d d l e   f a c t o r   t a b l e .   * /  
         a r m _ c f f t _ r a d i x 4 _ i n s t a n c e _ f 3 2   * p C f f t ;                 / * * <   p o i n t s   t o   t h e   c o m p l e x   F F T   i n s t a n c e .   * /  
     }   a r m _ r f f t _ i n s t a n c e _ f 3 2 ;  
  
     a r m _ s t a t u s   a r m _ r f f t _ i n i t _ f 3 2 (  
     a r m _ r f f t _ i n s t a n c e _ f 3 2   *   S ,  
     a r m _ c f f t _ r a d i x 4 _ i n s t a n c e _ f 3 2   *   S _ C F F T ,  
     u i n t 3 2 _ t   f f t L e n R e a l ,  
     u i n t 3 2 _ t   i f f t F l a g R ,  
     u i n t 3 2 _ t   b i t R e v e r s e F l a g ) ;  
  
     v o i d   a r m _ r f f t _ f 3 2 (  
     c o n s t   a r m _ r f f t _ i n s t a n c e _ f 3 2   *   S ,  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ) ;  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   f l o a t i n g - p o i n t   R F F T / R I F F T   f u n c t i o n .  
       * /  
 t y p e d e f   s t r u c t  
     {  
         a r m _ c f f t _ i n s t a n c e _ f 3 2   S i n t ;             / * * <   I n t e r n a l   C F F T   s t r u c t u r e .   * /  
         u i n t 1 6 _ t   f f t L e n R F F T ;                           / * * <   l e n g t h   o f   t h e   r e a l   s e q u e n c e   * /  
         f l o a t 3 2 _ t   *   p T w i d d l e R F F T ;                 / * * <   T w i d d l e   f a c t o r s   r e a l   s t a g e     * /  
     }   a r m _ r f f t _ f a s t _ i n s t a n c e _ f 3 2   ;  
  
 a r m _ s t a t u s   a r m _ r f f t _ f a s t _ i n i t _ f 3 2   (  
       a r m _ r f f t _ f a s t _ i n s t a n c e _ f 3 2   *   S ,  
       u i n t 1 6 _ t   f f t L e n ) ;  
  
 v o i d   a r m _ r f f t _ f a s t _ f 3 2 (  
     a r m _ r f f t _ f a s t _ i n s t a n c e _ f 3 2   *   S ,  
     f l o a t 3 2 _ t   *   p ,   f l o a t 3 2 _ t   *   p O u t ,  
     u i n t 8 _ t   i f f t F l a g ) ;  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   f l o a t i n g - p o i n t   D C T 4 / I D C T 4   f u n c t i o n .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 1 6 _ t   N ;                                                     / * * <   l e n g t h   o f   t h e   D C T 4 .   * /  
         u i n t 1 6 _ t   N b y 2 ;                                               / * * <   h a l f   o f   t h e   l e n g t h   o f   t h e   D C T 4 .   * /  
         f l o a t 3 2 _ t   n o r m a l i z e ;                                   / * * <   n o r m a l i z i n g   f a c t o r .   * /  
         f l o a t 3 2 _ t   * p T w i d d l e ;                                   / * * <   p o i n t s   t o   t h e   t w i d d l e   f a c t o r   t a b l e .   * /  
         f l o a t 3 2 _ t   * p C o s F a c t o r ;                               / * * <   p o i n t s   t o   t h e   c o s F a c t o r   t a b l e .   * /  
         a r m _ r f f t _ i n s t a n c e _ f 3 2   * p R f f t ;                 / * * <   p o i n t s   t o   t h e   r e a l   F F T   i n s t a n c e .   * /  
         a r m _ c f f t _ r a d i x 4 _ i n s t a n c e _ f 3 2   * p C f f t ;   / * * <   p o i n t s   t o   t h e   c o m p l e x   F F T   i n s t a n c e .   * /  
     }   a r m _ d c t 4 _ i n s t a n c e _ f 3 2 ;  
  
  
     / * *  
       *   @ b r i e f     I n i t i a l i z a t i o n   f u n c t i o n   f o r   t h e   f l o a t i n g - p o i n t   D C T 4 / I D C T 4 .  
       *   @ p a r a m [ i n , o u t ]   S                     p o i n t s   t o   a n   i n s t a n c e   o f   f l o a t i n g - p o i n t   D C T 4 / I D C T 4   s t r u c t u r e .  
       *   @ p a r a m [ i n ]           S _ R F F T           p o i n t s   t o   a n   i n s t a n c e   o f   f l o a t i n g - p o i n t   R F F T / R I F F T   s t r u c t u r e .  
       *   @ p a r a m [ i n ]           S _ C F F T           p o i n t s   t o   a n   i n s t a n c e   o f   f l o a t i n g - p o i n t   C F F T / C I F F T   s t r u c t u r e .  
       *   @ p a r a m [ i n ]           N                     l e n g t h   o f   t h e   D C T 4 .  
       *   @ p a r a m [ i n ]           N b y 2               h a l f   o f   t h e   l e n g t h   o f   t h e   D C T 4 .  
       *   @ p a r a m [ i n ]           n o r m a l i z e     n o r m a l i z i n g   f a c t o r .  
       *   @ r e t u r n             a r m _ s t a t u s   f u n c t i o n   r e t u r n s   A R M _ M A T H _ S U C C E S S   i f   i n i t i a l i z a t i o n   i s   s u c c e s s f u l   o r   A R M _ M A T H _ A R G U M E N T _ E R R O R   i f   < c o d e > f f t L e n R e a l < / c o d e >   i s   n o t   a   s u p p o r t e d   t r a n s f o r m   l e n g t h .  
       * /  
     a r m _ s t a t u s   a r m _ d c t 4 _ i n i t _ f 3 2 (  
     a r m _ d c t 4 _ i n s t a n c e _ f 3 2   *   S ,  
     a r m _ r f f t _ i n s t a n c e _ f 3 2   *   S _ R F F T ,  
     a r m _ c f f t _ r a d i x 4 _ i n s t a n c e _ f 3 2   *   S _ C F F T ,  
     u i n t 1 6 _ t   N ,  
     u i n t 1 6 _ t   N b y 2 ,  
     f l o a t 3 2 _ t   n o r m a l i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   f l o a t i n g - p o i n t   D C T 4 / I D C T 4 .  
       *   @ p a r a m [ i n ]           S                             p o i n t s   t o   a n   i n s t a n c e   o f   t h e   f l o a t i n g - p o i n t   D C T 4 / I D C T 4   s t r u c t u r e .  
       *   @ p a r a m [ i n ]           p S t a t e                   p o i n t s   t o   s t a t e   b u f f e r .  
       *   @ p a r a m [ i n , o u t ]   p I n l i n e B u f f e r     p o i n t s   t o   t h e   i n - p l a c e   i n p u t   a n d   o u t p u t   b u f f e r .  
       * /  
     v o i d   a r m _ d c t 4 _ f 3 2 (  
     c o n s t   a r m _ d c t 4 _ i n s t a n c e _ f 3 2   *   S ,  
     f l o a t 3 2 _ t   *   p S t a t e ,  
     f l o a t 3 2 _ t   *   p I n l i n e B u f f e r ) ;  
  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   Q 3 1   D C T 4 / I D C T 4   f u n c t i o n .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 1 6 _ t   N ;                                                     / * * <   l e n g t h   o f   t h e   D C T 4 .   * /  
         u i n t 1 6 _ t   N b y 2 ;                                               / * * <   h a l f   o f   t h e   l e n g t h   o f   t h e   D C T 4 .   * /  
         q 3 1 _ t   n o r m a l i z e ;                                           / * * <   n o r m a l i z i n g   f a c t o r .   * /  
         q 3 1 _ t   * p T w i d d l e ;                                           / * * <   p o i n t s   t o   t h e   t w i d d l e   f a c t o r   t a b l e .   * /  
         q 3 1 _ t   * p C o s F a c t o r ;                                       / * * <   p o i n t s   t o   t h e   c o s F a c t o r   t a b l e .   * /  
         a r m _ r f f t _ i n s t a n c e _ q 3 1   * p R f f t ;                 / * * <   p o i n t s   t o   t h e   r e a l   F F T   i n s t a n c e .   * /  
         a r m _ c f f t _ r a d i x 4 _ i n s t a n c e _ q 3 1   * p C f f t ;   / * * <   p o i n t s   t o   t h e   c o m p l e x   F F T   i n s t a n c e .   * /  
     }   a r m _ d c t 4 _ i n s t a n c e _ q 3 1 ;  
  
  
     / * *  
       *   @ b r i e f     I n i t i a l i z a t i o n   f u n c t i o n   f o r   t h e   Q 3 1   D C T 4 / I D C T 4 .  
       *   @ p a r a m [ i n , o u t ]   S                     p o i n t s   t o   a n   i n s t a n c e   o f   Q 3 1   D C T 4 / I D C T 4   s t r u c t u r e .  
       *   @ p a r a m [ i n ]           S _ R F F T           p o i n t s   t o   a n   i n s t a n c e   o f   Q 3 1   R F F T / R I F F T   s t r u c t u r e  
       *   @ p a r a m [ i n ]           S _ C F F T           p o i n t s   t o   a n   i n s t a n c e   o f   Q 3 1   C F F T / C I F F T   s t r u c t u r e  
       *   @ p a r a m [ i n ]           N                     l e n g t h   o f   t h e   D C T 4 .  
       *   @ p a r a m [ i n ]           N b y 2               h a l f   o f   t h e   l e n g t h   o f   t h e   D C T 4 .  
       *   @ p a r a m [ i n ]           n o r m a l i z e     n o r m a l i z i n g   f a c t o r .  
       *   @ r e t u r n             a r m _ s t a t u s   f u n c t i o n   r e t u r n s   A R M _ M A T H _ S U C C E S S   i f   i n i t i a l i z a t i o n   i s   s u c c e s s f u l   o r   A R M _ M A T H _ A R G U M E N T _ E R R O R   i f   < c o d e > N < / c o d e >   i s   n o t   a   s u p p o r t e d   t r a n s f o r m   l e n g t h .  
       * /  
     a r m _ s t a t u s   a r m _ d c t 4 _ i n i t _ q 3 1 (  
     a r m _ d c t 4 _ i n s t a n c e _ q 3 1   *   S ,  
     a r m _ r f f t _ i n s t a n c e _ q 3 1   *   S _ R F F T ,  
     a r m _ c f f t _ r a d i x 4 _ i n s t a n c e _ q 3 1   *   S _ C F F T ,  
     u i n t 1 6 _ t   N ,  
     u i n t 1 6 _ t   N b y 2 ,  
     q 3 1 _ t   n o r m a l i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   Q 3 1   D C T 4 / I D C T 4 .  
       *   @ p a r a m [ i n ]           S                             p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 3 1   D C T 4   s t r u c t u r e .  
       *   @ p a r a m [ i n ]           p S t a t e                   p o i n t s   t o   s t a t e   b u f f e r .  
       *   @ p a r a m [ i n , o u t ]   p I n l i n e B u f f e r     p o i n t s   t o   t h e   i n - p l a c e   i n p u t   a n d   o u t p u t   b u f f e r .  
       * /  
     v o i d   a r m _ d c t 4 _ q 3 1 (  
     c o n s t   a r m _ d c t 4 _ i n s t a n c e _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S t a t e ,  
     q 3 1 _ t   *   p I n l i n e B u f f e r ) ;  
  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   Q 1 5   D C T 4 / I D C T 4   f u n c t i o n .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 1 6 _ t   N ;                                                     / * * <   l e n g t h   o f   t h e   D C T 4 .   * /  
         u i n t 1 6 _ t   N b y 2 ;                                               / * * <   h a l f   o f   t h e   l e n g t h   o f   t h e   D C T 4 .   * /  
         q 1 5 _ t   n o r m a l i z e ;                                           / * * <   n o r m a l i z i n g   f a c t o r .   * /  
         q 1 5 _ t   * p T w i d d l e ;                                           / * * <   p o i n t s   t o   t h e   t w i d d l e   f a c t o r   t a b l e .   * /  
         q 1 5 _ t   * p C o s F a c t o r ;                                       / * * <   p o i n t s   t o   t h e   c o s F a c t o r   t a b l e .   * /  
         a r m _ r f f t _ i n s t a n c e _ q 1 5   * p R f f t ;                 / * * <   p o i n t s   t o   t h e   r e a l   F F T   i n s t a n c e .   * /  
         a r m _ c f f t _ r a d i x 4 _ i n s t a n c e _ q 1 5   * p C f f t ;   / * * <   p o i n t s   t o   t h e   c o m p l e x   F F T   i n s t a n c e .   * /  
     }   a r m _ d c t 4 _ i n s t a n c e _ q 1 5 ;  
  
  
     / * *  
       *   @ b r i e f     I n i t i a l i z a t i o n   f u n c t i o n   f o r   t h e   Q 1 5   D C T 4 / I D C T 4 .  
       *   @ p a r a m [ i n , o u t ]   S                     p o i n t s   t o   a n   i n s t a n c e   o f   Q 1 5   D C T 4 / I D C T 4   s t r u c t u r e .  
       *   @ p a r a m [ i n ]           S _ R F F T           p o i n t s   t o   a n   i n s t a n c e   o f   Q 1 5   R F F T / R I F F T   s t r u c t u r e .  
       *   @ p a r a m [ i n ]           S _ C F F T           p o i n t s   t o   a n   i n s t a n c e   o f   Q 1 5   C F F T / C I F F T   s t r u c t u r e .  
       *   @ p a r a m [ i n ]           N                     l e n g t h   o f   t h e   D C T 4 .  
       *   @ p a r a m [ i n ]           N b y 2               h a l f   o f   t h e   l e n g t h   o f   t h e   D C T 4 .  
       *   @ p a r a m [ i n ]           n o r m a l i z e     n o r m a l i z i n g   f a c t o r .  
       *   @ r e t u r n             a r m _ s t a t u s   f u n c t i o n   r e t u r n s   A R M _ M A T H _ S U C C E S S   i f   i n i t i a l i z a t i o n   i s   s u c c e s s f u l   o r   A R M _ M A T H _ A R G U M E N T _ E R R O R   i f   < c o d e > N < / c o d e >   i s   n o t   a   s u p p o r t e d   t r a n s f o r m   l e n g t h .  
       * /  
     a r m _ s t a t u s   a r m _ d c t 4 _ i n i t _ q 1 5 (  
     a r m _ d c t 4 _ i n s t a n c e _ q 1 5   *   S ,  
     a r m _ r f f t _ i n s t a n c e _ q 1 5   *   S _ R F F T ,  
     a r m _ c f f t _ r a d i x 4 _ i n s t a n c e _ q 1 5   *   S _ C F F T ,  
     u i n t 1 6 _ t   N ,  
     u i n t 1 6 _ t   N b y 2 ,  
     q 1 5 _ t   n o r m a l i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   Q 1 5   D C T 4 / I D C T 4 .  
       *   @ p a r a m [ i n ]           S                             p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 1 5   D C T 4   s t r u c t u r e .  
       *   @ p a r a m [ i n ]           p S t a t e                   p o i n t s   t o   s t a t e   b u f f e r .  
       *   @ p a r a m [ i n , o u t ]   p I n l i n e B u f f e r     p o i n t s   t o   t h e   i n - p l a c e   i n p u t   a n d   o u t p u t   b u f f e r .  
       * /  
     v o i d   a r m _ d c t 4 _ q 1 5 (  
     c o n s t   a r m _ d c t 4 _ i n s t a n c e _ q 1 5   *   S ,  
     q 1 5 _ t   *   p S t a t e ,  
     q 1 5 _ t   *   p I n l i n e B u f f e r ) ;  
  
  
     / * *  
       *   @ b r i e f   F l o a t i n g - p o i n t   v e c t o r   a d d i t i o n .  
       *   @ p a r a m [ i n ]     p S r c A             p o i n t s   t o   t h e   f i r s t   i n p u t   v e c t o r  
       *   @ p a r a m [ i n ]     p S r c B             p o i n t s   t o   t h e   s e c o n d   i n p u t   v e c t o r  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   i n   e a c h   v e c t o r  
       * /  
     v o i d   a r m _ a d d _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c A ,  
     f l o a t 3 2 _ t   *   p S r c B ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   Q 7   v e c t o r   a d d i t i o n .  
       *   @ p a r a m [ i n ]     p S r c A             p o i n t s   t o   t h e   f i r s t   i n p u t   v e c t o r  
       *   @ p a r a m [ i n ]     p S r c B             p o i n t s   t o   t h e   s e c o n d   i n p u t   v e c t o r  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   i n   e a c h   v e c t o r  
       * /  
     v o i d   a r m _ a d d _ q 7 (  
     q 7 _ t   *   p S r c A ,  
     q 7 _ t   *   p S r c B ,  
     q 7 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   Q 1 5   v e c t o r   a d d i t i o n .  
       *   @ p a r a m [ i n ]     p S r c A             p o i n t s   t o   t h e   f i r s t   i n p u t   v e c t o r  
       *   @ p a r a m [ i n ]     p S r c B             p o i n t s   t o   t h e   s e c o n d   i n p u t   v e c t o r  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   i n   e a c h   v e c t o r  
       * /  
     v o i d   a r m _ a d d _ q 1 5 (  
     q 1 5 _ t   *   p S r c A ,  
     q 1 5 _ t   *   p S r c B ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   Q 3 1   v e c t o r   a d d i t i o n .  
       *   @ p a r a m [ i n ]     p S r c A             p o i n t s   t o   t h e   f i r s t   i n p u t   v e c t o r  
       *   @ p a r a m [ i n ]     p S r c B             p o i n t s   t o   t h e   s e c o n d   i n p u t   v e c t o r  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   i n   e a c h   v e c t o r  
       * /  
     v o i d   a r m _ a d d _ q 3 1 (  
     q 3 1 _ t   *   p S r c A ,  
     q 3 1 _ t   *   p S r c B ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   F l o a t i n g - p o i n t   v e c t o r   s u b t r a c t i o n .  
       *   @ p a r a m [ i n ]     p S r c A             p o i n t s   t o   t h e   f i r s t   i n p u t   v e c t o r  
       *   @ p a r a m [ i n ]     p S r c B             p o i n t s   t o   t h e   s e c o n d   i n p u t   v e c t o r  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   i n   e a c h   v e c t o r  
       * /  
     v o i d   a r m _ s u b _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c A ,  
     f l o a t 3 2 _ t   *   p S r c B ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   Q 7   v e c t o r   s u b t r a c t i o n .  
       *   @ p a r a m [ i n ]     p S r c A             p o i n t s   t o   t h e   f i r s t   i n p u t   v e c t o r  
       *   @ p a r a m [ i n ]     p S r c B             p o i n t s   t o   t h e   s e c o n d   i n p u t   v e c t o r  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   i n   e a c h   v e c t o r  
       * /  
     v o i d   a r m _ s u b _ q 7 (  
     q 7 _ t   *   p S r c A ,  
     q 7 _ t   *   p S r c B ,  
     q 7 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   Q 1 5   v e c t o r   s u b t r a c t i o n .  
       *   @ p a r a m [ i n ]     p S r c A             p o i n t s   t o   t h e   f i r s t   i n p u t   v e c t o r  
       *   @ p a r a m [ i n ]     p S r c B             p o i n t s   t o   t h e   s e c o n d   i n p u t   v e c t o r  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   i n   e a c h   v e c t o r  
       * /  
     v o i d   a r m _ s u b _ q 1 5 (  
     q 1 5 _ t   *   p S r c A ,  
     q 1 5 _ t   *   p S r c B ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   Q 3 1   v e c t o r   s u b t r a c t i o n .  
       *   @ p a r a m [ i n ]     p S r c A             p o i n t s   t o   t h e   f i r s t   i n p u t   v e c t o r  
       *   @ p a r a m [ i n ]     p S r c B             p o i n t s   t o   t h e   s e c o n d   i n p u t   v e c t o r  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   i n   e a c h   v e c t o r  
       * /  
     v o i d   a r m _ s u b _ q 3 1 (  
     q 3 1 _ t   *   p S r c A ,  
     q 3 1 _ t   *   p S r c B ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   M u l t i p l i e s   a   f l o a t i n g - p o i n t   v e c t o r   b y   a   s c a l a r .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   i n p u t   v e c t o r  
       *   @ p a r a m [ i n ]     s c a l e             s c a l e   f a c t o r   t o   b e   a p p l i e d  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   i n   t h e   v e c t o r  
       * /  
     v o i d   a r m _ s c a l e _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   s c a l e ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   M u l t i p l i e s   a   Q 7   v e c t o r   b y   a   s c a l a r .  
       *   @ p a r a m [ i n ]     p S r c                 p o i n t s   t o   t h e   i n p u t   v e c t o r  
       *   @ p a r a m [ i n ]     s c a l e F r a c t     f r a c t i o n a l   p o r t i o n   o f   t h e   s c a l e   v a l u e  
       *   @ p a r a m [ i n ]     s h i f t               n u m b e r   o f   b i t s   t o   s h i f t   t h e   r e s u l t   b y  
       *   @ p a r a m [ o u t ]   p D s t                 p o i n t s   t o   t h e   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n ]     b l o c k S i z e       n u m b e r   o f   s a m p l e s   i n   t h e   v e c t o r  
       * /  
     v o i d   a r m _ s c a l e _ q 7 (  
     q 7 _ t   *   p S r c ,  
     q 7 _ t   s c a l e F r a c t ,  
     i n t 8 _ t   s h i f t ,  
     q 7 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   M u l t i p l i e s   a   Q 1 5   v e c t o r   b y   a   s c a l a r .  
       *   @ p a r a m [ i n ]     p S r c                 p o i n t s   t o   t h e   i n p u t   v e c t o r  
       *   @ p a r a m [ i n ]     s c a l e F r a c t     f r a c t i o n a l   p o r t i o n   o f   t h e   s c a l e   v a l u e  
       *   @ p a r a m [ i n ]     s h i f t               n u m b e r   o f   b i t s   t o   s h i f t   t h e   r e s u l t   b y  
       *   @ p a r a m [ o u t ]   p D s t                 p o i n t s   t o   t h e   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n ]     b l o c k S i z e       n u m b e r   o f   s a m p l e s   i n   t h e   v e c t o r  
       * /  
     v o i d   a r m _ s c a l e _ q 1 5 (  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   s c a l e F r a c t ,  
     i n t 8 _ t   s h i f t ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   M u l t i p l i e s   a   Q 3 1   v e c t o r   b y   a   s c a l a r .  
       *   @ p a r a m [ i n ]     p S r c                 p o i n t s   t o   t h e   i n p u t   v e c t o r  
       *   @ p a r a m [ i n ]     s c a l e F r a c t     f r a c t i o n a l   p o r t i o n   o f   t h e   s c a l e   v a l u e  
       *   @ p a r a m [ i n ]     s h i f t               n u m b e r   o f   b i t s   t o   s h i f t   t h e   r e s u l t   b y  
       *   @ p a r a m [ o u t ]   p D s t                 p o i n t s   t o   t h e   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n ]     b l o c k S i z e       n u m b e r   o f   s a m p l e s   i n   t h e   v e c t o r  
       * /  
     v o i d   a r m _ s c a l e _ q 3 1 (  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   s c a l e F r a c t ,  
     i n t 8 _ t   s h i f t ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   Q 7   v e c t o r   a b s o l u t e   v a l u e .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   i n p u t   b u f f e r  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   o u t p u t   b u f f e r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   i n   e a c h   v e c t o r  
       * /  
     v o i d   a r m _ a b s _ q 7 (  
     q 7 _ t   *   p S r c ,  
     q 7 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   F l o a t i n g - p o i n t   v e c t o r   a b s o l u t e   v a l u e .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   i n p u t   b u f f e r  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   o u t p u t   b u f f e r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   i n   e a c h   v e c t o r  
       * /  
     v o i d   a r m _ a b s _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   Q 1 5   v e c t o r   a b s o l u t e   v a l u e .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   i n p u t   b u f f e r  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   o u t p u t   b u f f e r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   i n   e a c h   v e c t o r  
       * /  
     v o i d   a r m _ a b s _ q 1 5 (  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   Q 3 1   v e c t o r   a b s o l u t e   v a l u e .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   i n p u t   b u f f e r  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   o u t p u t   b u f f e r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   i n   e a c h   v e c t o r  
       * /  
     v o i d   a r m _ a b s _ q 3 1 (  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   D o t   p r o d u c t   o f   f l o a t i n g - p o i n t   v e c t o r s .  
       *   @ p a r a m [ i n ]     p S r c A             p o i n t s   t o   t h e   f i r s t   i n p u t   v e c t o r  
       *   @ p a r a m [ i n ]     p S r c B             p o i n t s   t o   t h e   s e c o n d   i n p u t   v e c t o r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   i n   e a c h   v e c t o r  
       *   @ p a r a m [ o u t ]   r e s u l t           o u t p u t   r e s u l t   r e t u r n e d   h e r e  
       * /  
     v o i d   a r m _ d o t _ p r o d _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c A ,  
     f l o a t 3 2 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     f l o a t 3 2 _ t   *   r e s u l t ) ;  
  
  
     / * *  
       *   @ b r i e f   D o t   p r o d u c t   o f   Q 7   v e c t o r s .  
       *   @ p a r a m [ i n ]     p S r c A             p o i n t s   t o   t h e   f i r s t   i n p u t   v e c t o r  
       *   @ p a r a m [ i n ]     p S r c B             p o i n t s   t o   t h e   s e c o n d   i n p u t   v e c t o r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   i n   e a c h   v e c t o r  
       *   @ p a r a m [ o u t ]   r e s u l t           o u t p u t   r e s u l t   r e t u r n e d   h e r e  
       * /  
     v o i d   a r m _ d o t _ p r o d _ q 7 (  
     q 7 _ t   *   p S r c A ,  
     q 7 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 3 1 _ t   *   r e s u l t ) ;  
  
  
     / * *  
       *   @ b r i e f   D o t   p r o d u c t   o f   Q 1 5   v e c t o r s .  
       *   @ p a r a m [ i n ]     p S r c A             p o i n t s   t o   t h e   f i r s t   i n p u t   v e c t o r  
       *   @ p a r a m [ i n ]     p S r c B             p o i n t s   t o   t h e   s e c o n d   i n p u t   v e c t o r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   i n   e a c h   v e c t o r  
       *   @ p a r a m [ o u t ]   r e s u l t           o u t p u t   r e s u l t   r e t u r n e d   h e r e  
       * /  
     v o i d   a r m _ d o t _ p r o d _ q 1 5 (  
     q 1 5 _ t   *   p S r c A ,  
     q 1 5 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 6 3 _ t   *   r e s u l t ) ;  
  
  
     / * *  
       *   @ b r i e f   D o t   p r o d u c t   o f   Q 3 1   v e c t o r s .  
       *   @ p a r a m [ i n ]     p S r c A             p o i n t s   t o   t h e   f i r s t   i n p u t   v e c t o r  
       *   @ p a r a m [ i n ]     p S r c B             p o i n t s   t o   t h e   s e c o n d   i n p u t   v e c t o r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   i n   e a c h   v e c t o r  
       *   @ p a r a m [ o u t ]   r e s u l t           o u t p u t   r e s u l t   r e t u r n e d   h e r e  
       * /  
     v o i d   a r m _ d o t _ p r o d _ q 3 1 (  
     q 3 1 _ t   *   p S r c A ,  
     q 3 1 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 6 3 _ t   *   r e s u l t ) ;  
  
  
     / * *  
       *   @ b r i e f     S h i f t s   t h e   e l e m e n t s   o f   a   Q 7   v e c t o r   a   s p e c i f i e d   n u m b e r   o f   b i t s .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   i n p u t   v e c t o r  
       *   @ p a r a m [ i n ]     s h i f t B i t s     n u m b e r   o f   b i t s   t o   s h i f t .     A   p o s i t i v e   v a l u e   s h i f t s   l e f t ;   a   n e g a t i v e   v a l u e   s h i f t s   r i g h t .  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   i n   t h e   v e c t o r  
       * /  
     v o i d   a r m _ s h i f t _ q 7 (  
     q 7 _ t   *   p S r c ,  
     i n t 8 _ t   s h i f t B i t s ,  
     q 7 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f     S h i f t s   t h e   e l e m e n t s   o f   a   Q 1 5   v e c t o r   a   s p e c i f i e d   n u m b e r   o f   b i t s .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   i n p u t   v e c t o r  
       *   @ p a r a m [ i n ]     s h i f t B i t s     n u m b e r   o f   b i t s   t o   s h i f t .     A   p o s i t i v e   v a l u e   s h i f t s   l e f t ;   a   n e g a t i v e   v a l u e   s h i f t s   r i g h t .  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   i n   t h e   v e c t o r  
       * /  
     v o i d   a r m _ s h i f t _ q 1 5 (  
     q 1 5 _ t   *   p S r c ,  
     i n t 8 _ t   s h i f t B i t s ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f     S h i f t s   t h e   e l e m e n t s   o f   a   Q 3 1   v e c t o r   a   s p e c i f i e d   n u m b e r   o f   b i t s .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   i n p u t   v e c t o r  
       *   @ p a r a m [ i n ]     s h i f t B i t s     n u m b e r   o f   b i t s   t o   s h i f t .     A   p o s i t i v e   v a l u e   s h i f t s   l e f t ;   a   n e g a t i v e   v a l u e   s h i f t s   r i g h t .  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   i n   t h e   v e c t o r  
       * /  
     v o i d   a r m _ s h i f t _ q 3 1 (  
     q 3 1 _ t   *   p S r c ,  
     i n t 8 _ t   s h i f t B i t s ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f     A d d s   a   c o n s t a n t   o f f s e t   t o   a   f l o a t i n g - p o i n t   v e c t o r .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   i n p u t   v e c t o r  
       *   @ p a r a m [ i n ]     o f f s e t           i s   t h e   o f f s e t   t o   b e   a d d e d  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   i n   t h e   v e c t o r  
       * /  
     v o i d   a r m _ o f f s e t _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   o f f s e t ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f     A d d s   a   c o n s t a n t   o f f s e t   t o   a   Q 7   v e c t o r .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   i n p u t   v e c t o r  
       *   @ p a r a m [ i n ]     o f f s e t           i s   t h e   o f f s e t   t o   b e   a d d e d  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   i n   t h e   v e c t o r  
       * /  
     v o i d   a r m _ o f f s e t _ q 7 (  
     q 7 _ t   *   p S r c ,  
     q 7 _ t   o f f s e t ,  
     q 7 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f     A d d s   a   c o n s t a n t   o f f s e t   t o   a   Q 1 5   v e c t o r .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   i n p u t   v e c t o r  
       *   @ p a r a m [ i n ]     o f f s e t           i s   t h e   o f f s e t   t o   b e   a d d e d  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   i n   t h e   v e c t o r  
       * /  
     v o i d   a r m _ o f f s e t _ q 1 5 (  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   o f f s e t ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f     A d d s   a   c o n s t a n t   o f f s e t   t o   a   Q 3 1   v e c t o r .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   i n p u t   v e c t o r  
       *   @ p a r a m [ i n ]     o f f s e t           i s   t h e   o f f s e t   t o   b e   a d d e d  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   i n   t h e   v e c t o r  
       * /  
     v o i d   a r m _ o f f s e t _ q 3 1 (  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   o f f s e t ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f     N e g a t e s   t h e   e l e m e n t s   o f   a   f l o a t i n g - p o i n t   v e c t o r .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   i n p u t   v e c t o r  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   i n   t h e   v e c t o r  
       * /  
     v o i d   a r m _ n e g a t e _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f     N e g a t e s   t h e   e l e m e n t s   o f   a   Q 7   v e c t o r .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   i n p u t   v e c t o r  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   i n   t h e   v e c t o r  
       * /  
     v o i d   a r m _ n e g a t e _ q 7 (  
     q 7 _ t   *   p S r c ,  
     q 7 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f     N e g a t e s   t h e   e l e m e n t s   o f   a   Q 1 5   v e c t o r .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   i n p u t   v e c t o r  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   i n   t h e   v e c t o r  
       * /  
     v o i d   a r m _ n e g a t e _ q 1 5 (  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f     N e g a t e s   t h e   e l e m e n t s   o f   a   Q 3 1   v e c t o r .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   i n p u t   v e c t o r  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   i n   t h e   v e c t o r  
       * /  
     v o i d   a r m _ n e g a t e _ q 3 1 (  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f     C o p i e s   t h e   e l e m e n t s   o f   a   f l o a t i n g - p o i n t   v e c t o r .  
       *   @ p a r a m [ i n ]     p S r c               i n p u t   p o i n t e r  
       *   @ p a r a m [ o u t ]   p D s t               o u t p u t   p o i n t e r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s  
       * /  
     v o i d   a r m _ c o p y _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f     C o p i e s   t h e   e l e m e n t s   o f   a   Q 7   v e c t o r .  
       *   @ p a r a m [ i n ]     p S r c               i n p u t   p o i n t e r  
       *   @ p a r a m [ o u t ]   p D s t               o u t p u t   p o i n t e r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s  
       * /  
     v o i d   a r m _ c o p y _ q 7 (  
     q 7 _ t   *   p S r c ,  
     q 7 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f     C o p i e s   t h e   e l e m e n t s   o f   a   Q 1 5   v e c t o r .  
       *   @ p a r a m [ i n ]     p S r c               i n p u t   p o i n t e r  
       *   @ p a r a m [ o u t ]   p D s t               o u t p u t   p o i n t e r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s  
       * /  
     v o i d   a r m _ c o p y _ q 1 5 (  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f     C o p i e s   t h e   e l e m e n t s   o f   a   Q 3 1   v e c t o r .  
       *   @ p a r a m [ i n ]     p S r c               i n p u t   p o i n t e r  
       *   @ p a r a m [ o u t ]   p D s t               o u t p u t   p o i n t e r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s  
       * /  
     v o i d   a r m _ c o p y _ q 3 1 (  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f     F i l l s   a   c o n s t a n t   v a l u e   i n t o   a   f l o a t i n g - p o i n t   v e c t o r .  
       *   @ p a r a m [ i n ]     v a l u e             i n p u t   v a l u e   t o   b e   f i l l e d  
       *   @ p a r a m [ o u t ]   p D s t               o u t p u t   p o i n t e r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s  
       * /  
     v o i d   a r m _ f i l l _ f 3 2 (  
     f l o a t 3 2 _ t   v a l u e ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f     F i l l s   a   c o n s t a n t   v a l u e   i n t o   a   Q 7   v e c t o r .  
       *   @ p a r a m [ i n ]     v a l u e             i n p u t   v a l u e   t o   b e   f i l l e d  
       *   @ p a r a m [ o u t ]   p D s t               o u t p u t   p o i n t e r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s  
       * /  
     v o i d   a r m _ f i l l _ q 7 (  
     q 7 _ t   v a l u e ,  
     q 7 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f     F i l l s   a   c o n s t a n t   v a l u e   i n t o   a   Q 1 5   v e c t o r .  
       *   @ p a r a m [ i n ]     v a l u e             i n p u t   v a l u e   t o   b e   f i l l e d  
       *   @ p a r a m [ o u t ]   p D s t               o u t p u t   p o i n t e r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s  
       * /  
     v o i d   a r m _ f i l l _ q 1 5 (  
     q 1 5 _ t   v a l u e ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f     F i l l s   a   c o n s t a n t   v a l u e   i n t o   a   Q 3 1   v e c t o r .  
       *   @ p a r a m [ i n ]     v a l u e             i n p u t   v a l u e   t o   b e   f i l l e d  
       *   @ p a r a m [ o u t ]   p D s t               o u t p u t   p o i n t e r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s  
       * /  
     v o i d   a r m _ f i l l _ q 3 1 (  
     q 3 1 _ t   v a l u e ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
 / * *  
   *   @ b r i e f   C o n v o l u t i o n   o f   f l o a t i n g - p o i n t   s e q u e n c e s .  
   *   @ p a r a m [ i n ]     p S r c A         p o i n t s   t o   t h e   f i r s t   i n p u t   s e q u e n c e .  
   *   @ p a r a m [ i n ]     s r c A L e n     l e n g t h   o f   t h e   f i r s t   i n p u t   s e q u e n c e .  
   *   @ p a r a m [ i n ]     p S r c B         p o i n t s   t o   t h e   s e c o n d   i n p u t   s e q u e n c e .  
   *   @ p a r a m [ i n ]     s r c B L e n     l e n g t h   o f   t h e   s e c o n d   i n p u t   s e q u e n c e .  
   *   @ p a r a m [ o u t ]   p D s t           p o i n t s   t o   t h e   l o c a t i o n   w h e r e   t h e   o u t p u t   r e s u l t   i s   w r i t t e n .     L e n g t h   s r c A L e n + s r c B L e n - 1 .  
   * /  
     v o i d   a r m _ c o n v _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     f l o a t 3 2 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     f l o a t 3 2 _ t   *   p D s t ) ;  
  
  
     / * *  
       *   @ b r i e f   C o n v o l u t i o n   o f   Q 1 5   s e q u e n c e s .  
       *   @ p a r a m [ i n ]     p S r c A             p o i n t s   t o   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c A L e n         l e n g t h   o f   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     p S r c B             p o i n t s   t o   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c B L e n         l e n g t h   o f   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a     L e n g t h   s r c A L e n + s r c B L e n - 1 .  
       *   @ p a r a m [ i n ]     p S c r a t c h 1     p o i n t s   t o   s c r a t c h   b u f f e r   o f   s i z e   m a x ( s r c A L e n ,   s r c B L e n )   +   2 * m i n ( s r c A L e n ,   s r c B L e n )   -   2 .  
       *   @ p a r a m [ i n ]     p S c r a t c h 2     p o i n t s   t o   s c r a t c h   b u f f e r   o f   s i z e   m i n ( s r c A L e n ,   s r c B L e n ) .  
       * /  
     v o i d   a r m _ c o n v _ o p t _ q 1 5 (  
     q 1 5 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     q 1 5 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     q 1 5 _ t   *   p D s t ,  
     q 1 5 _ t   *   p S c r a t c h 1 ,  
     q 1 5 _ t   *   p S c r a t c h 2 ) ;  
  
  
 / * *  
   *   @ b r i e f   C o n v o l u t i o n   o f   Q 1 5   s e q u e n c e s .  
   *   @ p a r a m [ i n ]     p S r c A         p o i n t s   t o   t h e   f i r s t   i n p u t   s e q u e n c e .  
   *   @ p a r a m [ i n ]     s r c A L e n     l e n g t h   o f   t h e   f i r s t   i n p u t   s e q u e n c e .  
   *   @ p a r a m [ i n ]     p S r c B         p o i n t s   t o   t h e   s e c o n d   i n p u t   s e q u e n c e .  
   *   @ p a r a m [ i n ]     s r c B L e n     l e n g t h   o f   t h e   s e c o n d   i n p u t   s e q u e n c e .  
   *   @ p a r a m [ o u t ]   p D s t           p o i n t s   t o   t h e   l o c a t i o n   w h e r e   t h e   o u t p u t   r e s u l t   i s   w r i t t e n .     L e n g t h   s r c A L e n + s r c B L e n - 1 .  
   * /  
     v o i d   a r m _ c o n v _ q 1 5 (  
     q 1 5 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     q 1 5 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     q 1 5 _ t   *   p D s t ) ;  
  
  
     / * *  
       *   @ b r i e f   C o n v o l u t i o n   o f   Q 1 5   s e q u e n c e s   ( f a s t   v e r s i o n )   f o r   C o r t e x - M 3   a n d   C o r t e x - M 4  
       *   @ p a r a m [ i n ]     p S r c A         p o i n t s   t o   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c A L e n     l e n g t h   o f   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     p S r c B         p o i n t s   t o   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c B L e n     l e n g t h   o f   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ o u t ]   p D s t           p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a     L e n g t h   s r c A L e n + s r c B L e n - 1 .  
       * /  
     v o i d   a r m _ c o n v _ f a s t _ q 1 5 (  
                     q 1 5 _ t   *   p S r c A ,  
                     u i n t 3 2 _ t   s r c A L e n ,  
                     q 1 5 _ t   *   p S r c B ,  
                     u i n t 3 2 _ t   s r c B L e n ,  
                     q 1 5 _ t   *   p D s t ) ;  
  
  
     / * *  
       *   @ b r i e f   C o n v o l u t i o n   o f   Q 1 5   s e q u e n c e s   ( f a s t   v e r s i o n )   f o r   C o r t e x - M 3   a n d   C o r t e x - M 4  
       *   @ p a r a m [ i n ]     p S r c A             p o i n t s   t o   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c A L e n         l e n g t h   o f   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     p S r c B             p o i n t s   t o   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c B L e n         l e n g t h   o f   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a     L e n g t h   s r c A L e n + s r c B L e n - 1 .  
       *   @ p a r a m [ i n ]     p S c r a t c h 1     p o i n t s   t o   s c r a t c h   b u f f e r   o f   s i z e   m a x ( s r c A L e n ,   s r c B L e n )   +   2 * m i n ( s r c A L e n ,   s r c B L e n )   -   2 .  
       *   @ p a r a m [ i n ]     p S c r a t c h 2     p o i n t s   t o   s c r a t c h   b u f f e r   o f   s i z e   m i n ( s r c A L e n ,   s r c B L e n ) .  
       * /  
     v o i d   a r m _ c o n v _ f a s t _ o p t _ q 1 5 (  
     q 1 5 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     q 1 5 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     q 1 5 _ t   *   p D s t ,  
     q 1 5 _ t   *   p S c r a t c h 1 ,  
     q 1 5 _ t   *   p S c r a t c h 2 ) ;  
  
  
     / * *  
       *   @ b r i e f   C o n v o l u t i o n   o f   Q 3 1   s e q u e n c e s .  
       *   @ p a r a m [ i n ]     p S r c A         p o i n t s   t o   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c A L e n     l e n g t h   o f   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     p S r c B         p o i n t s   t o   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c B L e n     l e n g t h   o f   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ o u t ]   p D s t           p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a     L e n g t h   s r c A L e n + s r c B L e n - 1 .  
       * /  
     v o i d   a r m _ c o n v _ q 3 1 (  
     q 3 1 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     q 3 1 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     q 3 1 _ t   *   p D s t ) ;  
  
  
     / * *  
       *   @ b r i e f   C o n v o l u t i o n   o f   Q 3 1   s e q u e n c e s   ( f a s t   v e r s i o n )   f o r   C o r t e x - M 3   a n d   C o r t e x - M 4  
       *   @ p a r a m [ i n ]     p S r c A         p o i n t s   t o   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c A L e n     l e n g t h   o f   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     p S r c B         p o i n t s   t o   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c B L e n     l e n g t h   o f   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ o u t ]   p D s t           p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a     L e n g t h   s r c A L e n + s r c B L e n - 1 .  
       * /  
     v o i d   a r m _ c o n v _ f a s t _ q 3 1 (  
     q 3 1 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     q 3 1 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     q 3 1 _ t   *   p D s t ) ;  
  
  
         / * *  
       *   @ b r i e f   C o n v o l u t i o n   o f   Q 7   s e q u e n c e s .  
       *   @ p a r a m [ i n ]     p S r c A             p o i n t s   t o   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c A L e n         l e n g t h   o f   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     p S r c B             p o i n t s   t o   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c B L e n         l e n g t h   o f   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a     L e n g t h   s r c A L e n + s r c B L e n - 1 .  
       *   @ p a r a m [ i n ]     p S c r a t c h 1     p o i n t s   t o   s c r a t c h   b u f f e r ( o f   t y p e   q 1 5 _ t )   o f   s i z e   m a x ( s r c A L e n ,   s r c B L e n )   +   2 * m i n ( s r c A L e n ,   s r c B L e n )   -   2 .  
       *   @ p a r a m [ i n ]     p S c r a t c h 2     p o i n t s   t o   s c r a t c h   b u f f e r   ( o f   t y p e   q 1 5 _ t )   o f   s i z e   m i n ( s r c A L e n ,   s r c B L e n ) .  
       * /  
     v o i d   a r m _ c o n v _ o p t _ q 7 (  
     q 7 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     q 7 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     q 7 _ t   *   p D s t ,  
     q 1 5 _ t   *   p S c r a t c h 1 ,  
     q 1 5 _ t   *   p S c r a t c h 2 ) ;  
  
  
     / * *  
       *   @ b r i e f   C o n v o l u t i o n   o f   Q 7   s e q u e n c e s .  
       *   @ p a r a m [ i n ]     p S r c A         p o i n t s   t o   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c A L e n     l e n g t h   o f   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     p S r c B         p o i n t s   t o   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c B L e n     l e n g t h   o f   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ o u t ]   p D s t           p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a     L e n g t h   s r c A L e n + s r c B L e n - 1 .  
       * /  
     v o i d   a r m _ c o n v _ q 7 (  
     q 7 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     q 7 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     q 7 _ t   *   p D s t ) ;  
  
  
     / * *  
       *   @ b r i e f   P a r t i a l   c o n v o l u t i o n   o f   f l o a t i n g - p o i n t   s e q u e n c e s .  
       *   @ p a r a m [ i n ]     p S r c A               p o i n t s   t o   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c A L e n           l e n g t h   o f   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     p S r c B               p o i n t s   t o   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c B L e n           l e n g t h   o f   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ o u t ]   p D s t                 p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a  
       *   @ p a r a m [ i n ]     f i r s t I n d e x     i s   t h e   f i r s t   o u t p u t   s a m p l e   t o   s t a r t   w i t h .  
       *   @ p a r a m [ i n ]     n u m P o i n t s       i s   t h e   n u m b e r   o f   o u t p u t   p o i n t s   t o   b e   c o m p u t e d .  
       *   @ r e t u r n     R e t u r n s   e i t h e r   A R M _ M A T H _ S U C C E S S   i f   t h e   f u n c t i o n   c o m p l e t e d   c o r r e c t l y   o r   A R M _ M A T H _ A R G U M E N T _ E R R O R   i f   t h e   r e q u e s t e d   s u b s e t   i s   n o t   i n   t h e   r a n g e   [ 0   s r c A L e n + s r c B L e n - 2 ] .  
       * /  
     a r m _ s t a t u s   a r m _ c o n v _ p a r t i a l _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     f l o a t 3 2 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   f i r s t I n d e x ,  
     u i n t 3 2 _ t   n u m P o i n t s ) ;  
  
  
     / * *  
       *   @ b r i e f   P a r t i a l   c o n v o l u t i o n   o f   Q 1 5   s e q u e n c e s .  
       *   @ p a r a m [ i n ]     p S r c A               p o i n t s   t o   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c A L e n           l e n g t h   o f   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     p S r c B               p o i n t s   t o   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c B L e n           l e n g t h   o f   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ o u t ]   p D s t                 p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a  
       *   @ p a r a m [ i n ]     f i r s t I n d e x     i s   t h e   f i r s t   o u t p u t   s a m p l e   t o   s t a r t   w i t h .  
       *   @ p a r a m [ i n ]     n u m P o i n t s       i s   t h e   n u m b e r   o f   o u t p u t   p o i n t s   t o   b e   c o m p u t e d .  
       *   @ p a r a m [ i n ]     p S c r a t c h 1       p o i n t s   t o   s c r a t c h   b u f f e r   o f   s i z e   m a x ( s r c A L e n ,   s r c B L e n )   +   2 * m i n ( s r c A L e n ,   s r c B L e n )   -   2 .  
       *   @ p a r a m [ i n ]     p S c r a t c h 2       p o i n t s   t o   s c r a t c h   b u f f e r   o f   s i z e   m i n ( s r c A L e n ,   s r c B L e n ) .  
       *   @ r e t u r n     R e t u r n s   e i t h e r   A R M _ M A T H _ S U C C E S S   i f   t h e   f u n c t i o n   c o m p l e t e d   c o r r e c t l y   o r   A R M _ M A T H _ A R G U M E N T _ E R R O R   i f   t h e   r e q u e s t e d   s u b s e t   i s   n o t   i n   t h e   r a n g e   [ 0   s r c A L e n + s r c B L e n - 2 ] .  
       * /  
     a r m _ s t a t u s   a r m _ c o n v _ p a r t i a l _ o p t _ q 1 5 (  
     q 1 5 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     q 1 5 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   f i r s t I n d e x ,  
     u i n t 3 2 _ t   n u m P o i n t s ,  
     q 1 5 _ t   *   p S c r a t c h 1 ,  
     q 1 5 _ t   *   p S c r a t c h 2 ) ;  
  
  
     / * *  
       *   @ b r i e f   P a r t i a l   c o n v o l u t i o n   o f   Q 1 5   s e q u e n c e s .  
       *   @ p a r a m [ i n ]     p S r c A               p o i n t s   t o   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c A L e n           l e n g t h   o f   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     p S r c B               p o i n t s   t o   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c B L e n           l e n g t h   o f   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ o u t ]   p D s t                 p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a  
       *   @ p a r a m [ i n ]     f i r s t I n d e x     i s   t h e   f i r s t   o u t p u t   s a m p l e   t o   s t a r t   w i t h .  
       *   @ p a r a m [ i n ]     n u m P o i n t s       i s   t h e   n u m b e r   o f   o u t p u t   p o i n t s   t o   b e   c o m p u t e d .  
       *   @ r e t u r n     R e t u r n s   e i t h e r   A R M _ M A T H _ S U C C E S S   i f   t h e   f u n c t i o n   c o m p l e t e d   c o r r e c t l y   o r   A R M _ M A T H _ A R G U M E N T _ E R R O R   i f   t h e   r e q u e s t e d   s u b s e t   i s   n o t   i n   t h e   r a n g e   [ 0   s r c A L e n + s r c B L e n - 2 ] .  
       * /  
     a r m _ s t a t u s   a r m _ c o n v _ p a r t i a l _ q 1 5 (  
     q 1 5 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     q 1 5 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   f i r s t I n d e x ,  
     u i n t 3 2 _ t   n u m P o i n t s ) ;  
  
  
     / * *  
       *   @ b r i e f   P a r t i a l   c o n v o l u t i o n   o f   Q 1 5   s e q u e n c e s   ( f a s t   v e r s i o n )   f o r   C o r t e x - M 3   a n d   C o r t e x - M 4  
       *   @ p a r a m [ i n ]     p S r c A               p o i n t s   t o   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c A L e n           l e n g t h   o f   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     p S r c B               p o i n t s   t o   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c B L e n           l e n g t h   o f   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ o u t ]   p D s t                 p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a  
       *   @ p a r a m [ i n ]     f i r s t I n d e x     i s   t h e   f i r s t   o u t p u t   s a m p l e   t o   s t a r t   w i t h .  
       *   @ p a r a m [ i n ]     n u m P o i n t s       i s   t h e   n u m b e r   o f   o u t p u t   p o i n t s   t o   b e   c o m p u t e d .  
       *   @ r e t u r n     R e t u r n s   e i t h e r   A R M _ M A T H _ S U C C E S S   i f   t h e   f u n c t i o n   c o m p l e t e d   c o r r e c t l y   o r   A R M _ M A T H _ A R G U M E N T _ E R R O R   i f   t h e   r e q u e s t e d   s u b s e t   i s   n o t   i n   t h e   r a n g e   [ 0   s r c A L e n + s r c B L e n - 2 ] .  
       * /  
     a r m _ s t a t u s   a r m _ c o n v _ p a r t i a l _ f a s t _ q 1 5 (  
     q 1 5 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     q 1 5 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   f i r s t I n d e x ,  
     u i n t 3 2 _ t   n u m P o i n t s ) ;  
  
  
     / * *  
       *   @ b r i e f   P a r t i a l   c o n v o l u t i o n   o f   Q 1 5   s e q u e n c e s   ( f a s t   v e r s i o n )   f o r   C o r t e x - M 3   a n d   C o r t e x - M 4  
       *   @ p a r a m [ i n ]     p S r c A               p o i n t s   t o   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c A L e n           l e n g t h   o f   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     p S r c B               p o i n t s   t o   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c B L e n           l e n g t h   o f   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ o u t ]   p D s t                 p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a  
       *   @ p a r a m [ i n ]     f i r s t I n d e x     i s   t h e   f i r s t   o u t p u t   s a m p l e   t o   s t a r t   w i t h .  
       *   @ p a r a m [ i n ]     n u m P o i n t s       i s   t h e   n u m b e r   o f   o u t p u t   p o i n t s   t o   b e   c o m p u t e d .  
       *   @ p a r a m [ i n ]     p S c r a t c h 1       p o i n t s   t o   s c r a t c h   b u f f e r   o f   s i z e   m a x ( s r c A L e n ,   s r c B L e n )   +   2 * m i n ( s r c A L e n ,   s r c B L e n )   -   2 .  
       *   @ p a r a m [ i n ]     p S c r a t c h 2       p o i n t s   t o   s c r a t c h   b u f f e r   o f   s i z e   m i n ( s r c A L e n ,   s r c B L e n ) .  
       *   @ r e t u r n     R e t u r n s   e i t h e r   A R M _ M A T H _ S U C C E S S   i f   t h e   f u n c t i o n   c o m p l e t e d   c o r r e c t l y   o r   A R M _ M A T H _ A R G U M E N T _ E R R O R   i f   t h e   r e q u e s t e d   s u b s e t   i s   n o t   i n   t h e   r a n g e   [ 0   s r c A L e n + s r c B L e n - 2 ] .  
       * /  
     a r m _ s t a t u s   a r m _ c o n v _ p a r t i a l _ f a s t _ o p t _ q 1 5 (  
     q 1 5 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     q 1 5 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   f i r s t I n d e x ,  
     u i n t 3 2 _ t   n u m P o i n t s ,  
     q 1 5 _ t   *   p S c r a t c h 1 ,  
     q 1 5 _ t   *   p S c r a t c h 2 ) ;  
  
  
     / * *  
       *   @ b r i e f   P a r t i a l   c o n v o l u t i o n   o f   Q 3 1   s e q u e n c e s .  
       *   @ p a r a m [ i n ]     p S r c A               p o i n t s   t o   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c A L e n           l e n g t h   o f   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     p S r c B               p o i n t s   t o   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c B L e n           l e n g t h   o f   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ o u t ]   p D s t                 p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a  
       *   @ p a r a m [ i n ]     f i r s t I n d e x     i s   t h e   f i r s t   o u t p u t   s a m p l e   t o   s t a r t   w i t h .  
       *   @ p a r a m [ i n ]     n u m P o i n t s       i s   t h e   n u m b e r   o f   o u t p u t   p o i n t s   t o   b e   c o m p u t e d .  
       *   @ r e t u r n     R e t u r n s   e i t h e r   A R M _ M A T H _ S U C C E S S   i f   t h e   f u n c t i o n   c o m p l e t e d   c o r r e c t l y   o r   A R M _ M A T H _ A R G U M E N T _ E R R O R   i f   t h e   r e q u e s t e d   s u b s e t   i s   n o t   i n   t h e   r a n g e   [ 0   s r c A L e n + s r c B L e n - 2 ] .  
       * /  
     a r m _ s t a t u s   a r m _ c o n v _ p a r t i a l _ q 3 1 (  
     q 3 1 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     q 3 1 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   f i r s t I n d e x ,  
     u i n t 3 2 _ t   n u m P o i n t s ) ;  
  
  
     / * *  
       *   @ b r i e f   P a r t i a l   c o n v o l u t i o n   o f   Q 3 1   s e q u e n c e s   ( f a s t   v e r s i o n )   f o r   C o r t e x - M 3   a n d   C o r t e x - M 4  
       *   @ p a r a m [ i n ]     p S r c A               p o i n t s   t o   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c A L e n           l e n g t h   o f   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     p S r c B               p o i n t s   t o   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c B L e n           l e n g t h   o f   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ o u t ]   p D s t                 p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a  
       *   @ p a r a m [ i n ]     f i r s t I n d e x     i s   t h e   f i r s t   o u t p u t   s a m p l e   t o   s t a r t   w i t h .  
       *   @ p a r a m [ i n ]     n u m P o i n t s       i s   t h e   n u m b e r   o f   o u t p u t   p o i n t s   t o   b e   c o m p u t e d .  
       *   @ r e t u r n     R e t u r n s   e i t h e r   A R M _ M A T H _ S U C C E S S   i f   t h e   f u n c t i o n   c o m p l e t e d   c o r r e c t l y   o r   A R M _ M A T H _ A R G U M E N T _ E R R O R   i f   t h e   r e q u e s t e d   s u b s e t   i s   n o t   i n   t h e   r a n g e   [ 0   s r c A L e n + s r c B L e n - 2 ] .  
       * /  
     a r m _ s t a t u s   a r m _ c o n v _ p a r t i a l _ f a s t _ q 3 1 (  
     q 3 1 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     q 3 1 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   f i r s t I n d e x ,  
     u i n t 3 2 _ t   n u m P o i n t s ) ;  
  
  
     / * *  
       *   @ b r i e f   P a r t i a l   c o n v o l u t i o n   o f   Q 7   s e q u e n c e s  
       *   @ p a r a m [ i n ]     p S r c A               p o i n t s   t o   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c A L e n           l e n g t h   o f   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     p S r c B               p o i n t s   t o   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c B L e n           l e n g t h   o f   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ o u t ]   p D s t                 p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a  
       *   @ p a r a m [ i n ]     f i r s t I n d e x     i s   t h e   f i r s t   o u t p u t   s a m p l e   t o   s t a r t   w i t h .  
       *   @ p a r a m [ i n ]     n u m P o i n t s       i s   t h e   n u m b e r   o f   o u t p u t   p o i n t s   t o   b e   c o m p u t e d .  
       *   @ p a r a m [ i n ]     p S c r a t c h 1       p o i n t s   t o   s c r a t c h   b u f f e r ( o f   t y p e   q 1 5 _ t )   o f   s i z e   m a x ( s r c A L e n ,   s r c B L e n )   +   2 * m i n ( s r c A L e n ,   s r c B L e n )   -   2 .  
       *   @ p a r a m [ i n ]     p S c r a t c h 2       p o i n t s   t o   s c r a t c h   b u f f e r   ( o f   t y p e   q 1 5 _ t )   o f   s i z e   m i n ( s r c A L e n ,   s r c B L e n ) .  
       *   @ r e t u r n     R e t u r n s   e i t h e r   A R M _ M A T H _ S U C C E S S   i f   t h e   f u n c t i o n   c o m p l e t e d   c o r r e c t l y   o r   A R M _ M A T H _ A R G U M E N T _ E R R O R   i f   t h e   r e q u e s t e d   s u b s e t   i s   n o t   i n   t h e   r a n g e   [ 0   s r c A L e n + s r c B L e n - 2 ] .  
       * /  
     a r m _ s t a t u s   a r m _ c o n v _ p a r t i a l _ o p t _ q 7 (  
     q 7 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     q 7 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     q 7 _ t   *   p D s t ,  
     u i n t 3 2 _ t   f i r s t I n d e x ,  
     u i n t 3 2 _ t   n u m P o i n t s ,  
     q 1 5 _ t   *   p S c r a t c h 1 ,  
     q 1 5 _ t   *   p S c r a t c h 2 ) ;  
  
  
 / * *  
       *   @ b r i e f   P a r t i a l   c o n v o l u t i o n   o f   Q 7   s e q u e n c e s .  
       *   @ p a r a m [ i n ]     p S r c A               p o i n t s   t o   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c A L e n           l e n g t h   o f   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     p S r c B               p o i n t s   t o   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c B L e n           l e n g t h   o f   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ o u t ]   p D s t                 p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a  
       *   @ p a r a m [ i n ]     f i r s t I n d e x     i s   t h e   f i r s t   o u t p u t   s a m p l e   t o   s t a r t   w i t h .  
       *   @ p a r a m [ i n ]     n u m P o i n t s       i s   t h e   n u m b e r   o f   o u t p u t   p o i n t s   t o   b e   c o m p u t e d .  
       *   @ r e t u r n     R e t u r n s   e i t h e r   A R M _ M A T H _ S U C C E S S   i f   t h e   f u n c t i o n   c o m p l e t e d   c o r r e c t l y   o r   A R M _ M A T H _ A R G U M E N T _ E R R O R   i f   t h e   r e q u e s t e d   s u b s e t   i s   n o t   i n   t h e   r a n g e   [ 0   s r c A L e n + s r c B L e n - 2 ] .  
       * /  
     a r m _ s t a t u s   a r m _ c o n v _ p a r t i a l _ q 7 (  
     q 7 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     q 7 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     q 7 _ t   *   p D s t ,  
     u i n t 3 2 _ t   f i r s t I n d e x ,  
     u i n t 3 2 _ t   n u m P o i n t s ) ;  
  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   Q 1 5   F I R   d e c i m a t o r .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 8 _ t   M ;                                     / * * <   d e c i m a t i o n   f a c t o r .   * /  
         u i n t 1 6 _ t   n u m T a p s ;                       / * * <   n u m b e r   o f   c o e f f i c i e n t s   i n   t h e   f i l t e r .   * /  
         q 1 5 _ t   * p C o e f f s ;                           / * * <   p o i n t s   t o   t h e   c o e f f i c i e n t   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   n u m T a p s . * /  
         q 1 5 _ t   * p S t a t e ;                             / * * <   p o i n t s   t o   t h e   s t a t e   v a r i a b l e   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   n u m T a p s + b l o c k S i z e - 1 .   * /  
     }   a r m _ f i r _ d e c i m a t e _ i n s t a n c e _ q 1 5 ;  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   Q 3 1   F I R   d e c i m a t o r .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 8 _ t   M ;                                     / * * <   d e c i m a t i o n   f a c t o r .   * /  
         u i n t 1 6 _ t   n u m T a p s ;                       / * * <   n u m b e r   o f   c o e f f i c i e n t s   i n   t h e   f i l t e r .   * /  
         q 3 1 _ t   * p C o e f f s ;                           / * * <   p o i n t s   t o   t h e   c o e f f i c i e n t   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   n u m T a p s . * /  
         q 3 1 _ t   * p S t a t e ;                             / * * <   p o i n t s   t o   t h e   s t a t e   v a r i a b l e   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   n u m T a p s + b l o c k S i z e - 1 .   * /  
     }   a r m _ f i r _ d e c i m a t e _ i n s t a n c e _ q 3 1 ;  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   f l o a t i n g - p o i n t   F I R   d e c i m a t o r .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 8 _ t   M ;                                     / * * <   d e c i m a t i o n   f a c t o r .   * /  
         u i n t 1 6 _ t   n u m T a p s ;                       / * * <   n u m b e r   o f   c o e f f i c i e n t s   i n   t h e   f i l t e r .   * /  
         f l o a t 3 2 _ t   * p C o e f f s ;                   / * * <   p o i n t s   t o   t h e   c o e f f i c i e n t   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   n u m T a p s . * /  
         f l o a t 3 2 _ t   * p S t a t e ;                     / * * <   p o i n t s   t o   t h e   s t a t e   v a r i a b l e   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   n u m T a p s + b l o c k S i z e - 1 .   * /  
     }   a r m _ f i r _ d e c i m a t e _ i n s t a n c e _ f 3 2 ;  
  
  
     / * *  
       *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   f l o a t i n g - p o i n t   F I R   d e c i m a t o r .  
       *   @ p a r a m [ i n ]     S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   f l o a t i n g - p o i n t   F I R   d e c i m a t o r   s t r u c t u r e .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   i n p u t   s a m p l e s   t o   p r o c e s s   p e r   c a l l .  
       * /  
     v o i d   a r m _ f i r _ d e c i m a t e _ f 3 2 (  
     c o n s t   a r m _ f i r _ d e c i m a t e _ i n s t a n c e _ f 3 2   *   S ,  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f     I n i t i a l i z a t i o n   f u n c t i o n   f o r   t h e   f l o a t i n g - p o i n t   F I R   d e c i m a t o r .  
       *   @ p a r a m [ i n , o u t ]   S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   f l o a t i n g - p o i n t   F I R   d e c i m a t o r   s t r u c t u r e .  
       *   @ p a r a m [ i n ]           n u m T a p s         n u m b e r   o f   c o e f f i c i e n t s   i n   t h e   f i l t e r .  
       *   @ p a r a m [ i n ]           M                     d e c i m a t i o n   f a c t o r .  
       *   @ p a r a m [ i n ]           p C o e f f s         p o i n t s   t o   t h e   f i l t e r   c o e f f i c i e n t s .  
       *   @ p a r a m [ i n ]           p S t a t e           p o i n t s   t o   t h e   s t a t e   b u f f e r .  
       *   @ p a r a m [ i n ]           b l o c k S i z e     n u m b e r   o f   i n p u t   s a m p l e s   t o   p r o c e s s   p e r   c a l l .  
       *   @ r e t u r n         T h e   f u n c t i o n   r e t u r n s   A R M _ M A T H _ S U C C E S S   i f   i n i t i a l i z a t i o n   i s   s u c c e s s f u l   o r   A R M _ M A T H _ L E N G T H _ E R R O R   i f  
       *   < c o d e > b l o c k S i z e < / c o d e >   i s   n o t   a   m u l t i p l e   o f   < c o d e > M < / c o d e > .  
       * /  
     a r m _ s t a t u s   a r m _ f i r _ d e c i m a t e _ i n i t _ f 3 2 (  
     a r m _ f i r _ d e c i m a t e _ i n s t a n c e _ f 3 2   *   S ,  
     u i n t 1 6 _ t   n u m T a p s ,  
     u i n t 8 _ t   M ,  
     f l o a t 3 2 _ t   *   p C o e f f s ,  
     f l o a t 3 2 _ t   *   p S t a t e ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   Q 1 5   F I R   d e c i m a t o r .  
       *   @ p a r a m [ i n ]     S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 1 5   F I R   d e c i m a t o r   s t r u c t u r e .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   i n p u t   s a m p l e s   t o   p r o c e s s   p e r   c a l l .  
       * /  
     v o i d   a r m _ f i r _ d e c i m a t e _ q 1 5 (  
     c o n s t   a r m _ f i r _ d e c i m a t e _ i n s t a n c e _ q 1 5   *   S ,  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   Q 1 5   F I R   d e c i m a t o r   ( f a s t   v a r i a n t )   f o r   C o r t e x - M 3   a n d   C o r t e x - M 4 .  
       *   @ p a r a m [ i n ]     S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 1 5   F I R   d e c i m a t o r   s t r u c t u r e .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   i n p u t   s a m p l e s   t o   p r o c e s s   p e r   c a l l .  
       * /  
     v o i d   a r m _ f i r _ d e c i m a t e _ f a s t _ q 1 5 (  
     c o n s t   a r m _ f i r _ d e c i m a t e _ i n s t a n c e _ q 1 5   *   S ,  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f     I n i t i a l i z a t i o n   f u n c t i o n   f o r   t h e   Q 1 5   F I R   d e c i m a t o r .  
       *   @ p a r a m [ i n , o u t ]   S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 1 5   F I R   d e c i m a t o r   s t r u c t u r e .  
       *   @ p a r a m [ i n ]           n u m T a p s         n u m b e r   o f   c o e f f i c i e n t s   i n   t h e   f i l t e r .  
       *   @ p a r a m [ i n ]           M                     d e c i m a t i o n   f a c t o r .  
       *   @ p a r a m [ i n ]           p C o e f f s         p o i n t s   t o   t h e   f i l t e r   c o e f f i c i e n t s .  
       *   @ p a r a m [ i n ]           p S t a t e           p o i n t s   t o   t h e   s t a t e   b u f f e r .  
       *   @ p a r a m [ i n ]           b l o c k S i z e     n u m b e r   o f   i n p u t   s a m p l e s   t o   p r o c e s s   p e r   c a l l .  
       *   @ r e t u r n         T h e   f u n c t i o n   r e t u r n s   A R M _ M A T H _ S U C C E S S   i f   i n i t i a l i z a t i o n   i s   s u c c e s s f u l   o r   A R M _ M A T H _ L E N G T H _ E R R O R   i f  
       *   < c o d e > b l o c k S i z e < / c o d e >   i s   n o t   a   m u l t i p l e   o f   < c o d e > M < / c o d e > .  
       * /  
     a r m _ s t a t u s   a r m _ f i r _ d e c i m a t e _ i n i t _ q 1 5 (  
     a r m _ f i r _ d e c i m a t e _ i n s t a n c e _ q 1 5   *   S ,  
     u i n t 1 6 _ t   n u m T a p s ,  
     u i n t 8 _ t   M ,  
     q 1 5 _ t   *   p C o e f f s ,  
     q 1 5 _ t   *   p S t a t e ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   Q 3 1   F I R   d e c i m a t o r .  
       *   @ p a r a m [ i n ]     S           p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 3 1   F I R   d e c i m a t o r   s t r u c t u r e .  
       *   @ p a r a m [ i n ]     p S r c     p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
       *   @ p a r a m [ o u t ]   p D s t     p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a  
       *   @ p a r a m [ i n ]   b l o c k S i z e   n u m b e r   o f   i n p u t   s a m p l e s   t o   p r o c e s s   p e r   c a l l .  
       * /  
     v o i d   a r m _ f i r _ d e c i m a t e _ q 3 1 (  
     c o n s t   a r m _ f i r _ d e c i m a t e _ i n s t a n c e _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
     / * *  
       *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   Q 3 1   F I R   d e c i m a t o r   ( f a s t   v a r i a n t )   f o r   C o r t e x - M 3   a n d   C o r t e x - M 4 .  
       *   @ p a r a m [ i n ]     S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 3 1   F I R   d e c i m a t o r   s t r u c t u r e .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   i n p u t   s a m p l e s   t o   p r o c e s s   p e r   c a l l .  
       * /  
     v o i d   a r m _ f i r _ d e c i m a t e _ f a s t _ q 3 1 (  
     a r m _ f i r _ d e c i m a t e _ i n s t a n c e _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f     I n i t i a l i z a t i o n   f u n c t i o n   f o r   t h e   Q 3 1   F I R   d e c i m a t o r .  
       *   @ p a r a m [ i n , o u t ]   S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 3 1   F I R   d e c i m a t o r   s t r u c t u r e .  
       *   @ p a r a m [ i n ]           n u m T a p s         n u m b e r   o f   c o e f f i c i e n t s   i n   t h e   f i l t e r .  
       *   @ p a r a m [ i n ]           M                     d e c i m a t i o n   f a c t o r .  
       *   @ p a r a m [ i n ]           p C o e f f s         p o i n t s   t o   t h e   f i l t e r   c o e f f i c i e n t s .  
       *   @ p a r a m [ i n ]           p S t a t e           p o i n t s   t o   t h e   s t a t e   b u f f e r .  
       *   @ p a r a m [ i n ]           b l o c k S i z e     n u m b e r   o f   i n p u t   s a m p l e s   t o   p r o c e s s   p e r   c a l l .  
       *   @ r e t u r n         T h e   f u n c t i o n   r e t u r n s   A R M _ M A T H _ S U C C E S S   i f   i n i t i a l i z a t i o n   i s   s u c c e s s f u l   o r   A R M _ M A T H _ L E N G T H _ E R R O R   i f  
       *   < c o d e > b l o c k S i z e < / c o d e >   i s   n o t   a   m u l t i p l e   o f   < c o d e > M < / c o d e > .  
       * /  
     a r m _ s t a t u s   a r m _ f i r _ d e c i m a t e _ i n i t _ q 3 1 (  
     a r m _ f i r _ d e c i m a t e _ i n s t a n c e _ q 3 1   *   S ,  
     u i n t 1 6 _ t   n u m T a p s ,  
     u i n t 8 _ t   M ,  
     q 3 1 _ t   *   p C o e f f s ,  
     q 3 1 _ t   *   p S t a t e ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   Q 1 5   F I R   i n t e r p o l a t o r .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 8 _ t   L ;                                             / * * <   u p s a m p l e   f a c t o r .   * /  
         u i n t 1 6 _ t   p h a s e L e n g t h ;                       / * * <   l e n g t h   o f   e a c h   p o l y p h a s e   f i l t e r   c o m p o n e n t .   * /  
         q 1 5 _ t   * p C o e f f s ;                                   / * * <   p o i n t s   t o   t h e   c o e f f i c i e n t   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   L * p h a s e L e n g t h .   * /  
         q 1 5 _ t   * p S t a t e ;                                     / * * <   p o i n t s   t o   t h e   s t a t e   v a r i a b l e   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   b l o c k S i z e + p h a s e L e n g t h - 1 .   * /  
     }   a r m _ f i r _ i n t e r p o l a t e _ i n s t a n c e _ q 1 5 ;  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   Q 3 1   F I R   i n t e r p o l a t o r .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 8 _ t   L ;                                             / * * <   u p s a m p l e   f a c t o r .   * /  
         u i n t 1 6 _ t   p h a s e L e n g t h ;                       / * * <   l e n g t h   o f   e a c h   p o l y p h a s e   f i l t e r   c o m p o n e n t .   * /  
         q 3 1 _ t   * p C o e f f s ;                                   / * * <   p o i n t s   t o   t h e   c o e f f i c i e n t   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   L * p h a s e L e n g t h .   * /  
         q 3 1 _ t   * p S t a t e ;                                     / * * <   p o i n t s   t o   t h e   s t a t e   v a r i a b l e   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   b l o c k S i z e + p h a s e L e n g t h - 1 .   * /  
     }   a r m _ f i r _ i n t e r p o l a t e _ i n s t a n c e _ q 3 1 ;  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   f l o a t i n g - p o i n t   F I R   i n t e r p o l a t o r .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 8 _ t   L ;                                           / * * <   u p s a m p l e   f a c t o r .   * /  
         u i n t 1 6 _ t   p h a s e L e n g t h ;                     / * * <   l e n g t h   o f   e a c h   p o l y p h a s e   f i l t e r   c o m p o n e n t .   * /  
         f l o a t 3 2 _ t   * p C o e f f s ;                         / * * <   p o i n t s   t o   t h e   c o e f f i c i e n t   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   L * p h a s e L e n g t h .   * /  
         f l o a t 3 2 _ t   * p S t a t e ;                           / * * <   p o i n t s   t o   t h e   s t a t e   v a r i a b l e   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   p h a s e L e n g t h + n u m T a p s - 1 .   * /  
     }   a r m _ f i r _ i n t e r p o l a t e _ i n s t a n c e _ f 3 2 ;  
  
  
     / * *  
       *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   Q 1 5   F I R   i n t e r p o l a t o r .  
       *   @ p a r a m [ i n ]     S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 1 5   F I R   i n t e r p o l a t o r   s t r u c t u r e .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a .  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   i n p u t   s a m p l e s   t o   p r o c e s s   p e r   c a l l .  
       * /  
     v o i d   a r m _ f i r _ i n t e r p o l a t e _ q 1 5 (  
     c o n s t   a r m _ f i r _ i n t e r p o l a t e _ i n s t a n c e _ q 1 5   *   S ,  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f     I n i t i a l i z a t i o n   f u n c t i o n   f o r   t h e   Q 1 5   F I R   i n t e r p o l a t o r .  
       *   @ p a r a m [ i n , o u t ]   S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 1 5   F I R   i n t e r p o l a t o r   s t r u c t u r e .  
       *   @ p a r a m [ i n ]           L                     u p s a m p l e   f a c t o r .  
       *   @ p a r a m [ i n ]           n u m T a p s         n u m b e r   o f   f i l t e r   c o e f f i c i e n t s   i n   t h e   f i l t e r .  
       *   @ p a r a m [ i n ]           p C o e f f s         p o i n t s   t o   t h e   f i l t e r   c o e f f i c i e n t   b u f f e r .  
       *   @ p a r a m [ i n ]           p S t a t e           p o i n t s   t o   t h e   s t a t e   b u f f e r .  
       *   @ p a r a m [ i n ]           b l o c k S i z e     n u m b e r   o f   i n p u t   s a m p l e s   t o   p r o c e s s   p e r   c a l l .  
       *   @ r e t u r n                 T h e   f u n c t i o n   r e t u r n s   A R M _ M A T H _ S U C C E S S   i f   i n i t i a l i z a t i o n   i s   s u c c e s s f u l   o r   A R M _ M A T H _ L E N G T H _ E R R O R   i f  
       *   t h e   f i l t e r   l e n g t h   < c o d e > n u m T a p s < / c o d e >   i s   n o t   a   m u l t i p l e   o f   t h e   i n t e r p o l a t i o n   f a c t o r   < c o d e > L < / c o d e > .  
       * /  
     a r m _ s t a t u s   a r m _ f i r _ i n t e r p o l a t e _ i n i t _ q 1 5 (  
     a r m _ f i r _ i n t e r p o l a t e _ i n s t a n c e _ q 1 5   *   S ,  
     u i n t 8 _ t   L ,  
     u i n t 1 6 _ t   n u m T a p s ,  
     q 1 5 _ t   *   p C o e f f s ,  
     q 1 5 _ t   *   p S t a t e ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   Q 3 1   F I R   i n t e r p o l a t o r .  
       *   @ p a r a m [ i n ]     S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 1 5   F I R   i n t e r p o l a t o r   s t r u c t u r e .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a .  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   i n p u t   s a m p l e s   t o   p r o c e s s   p e r   c a l l .  
       * /  
     v o i d   a r m _ f i r _ i n t e r p o l a t e _ q 3 1 (  
     c o n s t   a r m _ f i r _ i n t e r p o l a t e _ i n s t a n c e _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f     I n i t i a l i z a t i o n   f u n c t i o n   f o r   t h e   Q 3 1   F I R   i n t e r p o l a t o r .  
       *   @ p a r a m [ i n , o u t ]   S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 3 1   F I R   i n t e r p o l a t o r   s t r u c t u r e .  
       *   @ p a r a m [ i n ]           L                     u p s a m p l e   f a c t o r .  
       *   @ p a r a m [ i n ]           n u m T a p s         n u m b e r   o f   f i l t e r   c o e f f i c i e n t s   i n   t h e   f i l t e r .  
       *   @ p a r a m [ i n ]           p C o e f f s         p o i n t s   t o   t h e   f i l t e r   c o e f f i c i e n t   b u f f e r .  
       *   @ p a r a m [ i n ]           p S t a t e           p o i n t s   t o   t h e   s t a t e   b u f f e r .  
       *   @ p a r a m [ i n ]           b l o c k S i z e     n u m b e r   o f   i n p u t   s a m p l e s   t o   p r o c e s s   p e r   c a l l .  
       *   @ r e t u r n                 T h e   f u n c t i o n   r e t u r n s   A R M _ M A T H _ S U C C E S S   i f   i n i t i a l i z a t i o n   i s   s u c c e s s f u l   o r   A R M _ M A T H _ L E N G T H _ E R R O R   i f  
       *   t h e   f i l t e r   l e n g t h   < c o d e > n u m T a p s < / c o d e >   i s   n o t   a   m u l t i p l e   o f   t h e   i n t e r p o l a t i o n   f a c t o r   < c o d e > L < / c o d e > .  
       * /  
     a r m _ s t a t u s   a r m _ f i r _ i n t e r p o l a t e _ i n i t _ q 3 1 (  
     a r m _ f i r _ i n t e r p o l a t e _ i n s t a n c e _ q 3 1   *   S ,  
     u i n t 8 _ t   L ,  
     u i n t 1 6 _ t   n u m T a p s ,  
     q 3 1 _ t   *   p C o e f f s ,  
     q 3 1 _ t   *   p S t a t e ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   f l o a t i n g - p o i n t   F I R   i n t e r p o l a t o r .  
       *   @ p a r a m [ i n ]     S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   f l o a t i n g - p o i n t   F I R   i n t e r p o l a t o r   s t r u c t u r e .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a .  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   i n p u t   s a m p l e s   t o   p r o c e s s   p e r   c a l l .  
       * /  
     v o i d   a r m _ f i r _ i n t e r p o l a t e _ f 3 2 (  
     c o n s t   a r m _ f i r _ i n t e r p o l a t e _ i n s t a n c e _ f 3 2   *   S ,  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f     I n i t i a l i z a t i o n   f u n c t i o n   f o r   t h e   f l o a t i n g - p o i n t   F I R   i n t e r p o l a t o r .  
       *   @ p a r a m [ i n , o u t ]   S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   f l o a t i n g - p o i n t   F I R   i n t e r p o l a t o r   s t r u c t u r e .  
       *   @ p a r a m [ i n ]           L                     u p s a m p l e   f a c t o r .  
       *   @ p a r a m [ i n ]           n u m T a p s         n u m b e r   o f   f i l t e r   c o e f f i c i e n t s   i n   t h e   f i l t e r .  
       *   @ p a r a m [ i n ]           p C o e f f s         p o i n t s   t o   t h e   f i l t e r   c o e f f i c i e n t   b u f f e r .  
       *   @ p a r a m [ i n ]           p S t a t e           p o i n t s   t o   t h e   s t a t e   b u f f e r .  
       *   @ p a r a m [ i n ]           b l o c k S i z e     n u m b e r   o f   i n p u t   s a m p l e s   t o   p r o c e s s   p e r   c a l l .  
       *   @ r e t u r n                 T h e   f u n c t i o n   r e t u r n s   A R M _ M A T H _ S U C C E S S   i f   i n i t i a l i z a t i o n   i s   s u c c e s s f u l   o r   A R M _ M A T H _ L E N G T H _ E R R O R   i f  
       *   t h e   f i l t e r   l e n g t h   < c o d e > n u m T a p s < / c o d e >   i s   n o t   a   m u l t i p l e   o f   t h e   i n t e r p o l a t i o n   f a c t o r   < c o d e > L < / c o d e > .  
       * /  
     a r m _ s t a t u s   a r m _ f i r _ i n t e r p o l a t e _ i n i t _ f 3 2 (  
     a r m _ f i r _ i n t e r p o l a t e _ i n s t a n c e _ f 3 2   *   S ,  
     u i n t 8 _ t   L ,  
     u i n t 1 6 _ t   n u m T a p s ,  
     f l o a t 3 2 _ t   *   p C o e f f s ,  
     f l o a t 3 2 _ t   *   p S t a t e ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   h i g h   p r e c i s i o n   Q 3 1   B i q u a d   c a s c a d e   f i l t e r .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 8 _ t   n u m S t a g e s ;               / * * <   n u m b e r   o f   2 n d   o r d e r   s t a g e s   i n   t h e   f i l t e r .     O v e r a l l   o r d e r   i s   2 * n u m S t a g e s .   * /  
         q 6 3 _ t   * p S t a t e ;                       / * * <   p o i n t s   t o   t h e   a r r a y   o f   s t a t e   c o e f f i c i e n t s .     T h e   a r r a y   i s   o f   l e n g t h   4 * n u m S t a g e s .   * /  
         q 3 1 _ t   * p C o e f f s ;                     / * * <   p o i n t s   t o   t h e   a r r a y   o f   c o e f f i c i e n t s .     T h e   a r r a y   i s   o f   l e n g t h   5 * n u m S t a g e s .   * /  
         u i n t 8 _ t   p o s t S h i f t ;               / * * <   a d d i t i o n a l   s h i f t ,   i n   b i t s ,   a p p l i e d   t o   e a c h   o u t p u t   s a m p l e .   * /  
     }   a r m _ b i q u a d _ c a s _ d f 1 _ 3 2 x 6 4 _ i n s _ q 3 1 ;  
  
  
     / * *  
       *   @ p a r a m [ i n ]     S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   h i g h   p r e c i s i o n   Q 3 1   B i q u a d   c a s c a d e   f i l t e r   s t r u c t u r e .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s .  
       * /  
     v o i d   a r m _ b i q u a d _ c a s _ d f 1 _ 3 2 x 6 4 _ q 3 1 (  
     c o n s t   a r m _ b i q u a d _ c a s _ d f 1 _ 3 2 x 6 4 _ i n s _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ p a r a m [ i n , o u t ]   S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   h i g h   p r e c i s i o n   Q 3 1   B i q u a d   c a s c a d e   f i l t e r   s t r u c t u r e .  
       *   @ p a r a m [ i n ]           n u m S t a g e s     n u m b e r   o f   2 n d   o r d e r   s t a g e s   i n   t h e   f i l t e r .  
       *   @ p a r a m [ i n ]           p C o e f f s         p o i n t s   t o   t h e   f i l t e r   c o e f f i c i e n t s .  
       *   @ p a r a m [ i n ]           p S t a t e           p o i n t s   t o   t h e   s t a t e   b u f f e r .  
       *   @ p a r a m [ i n ]           p o s t S h i f t     s h i f t   t o   b e   a p p l i e d   t o   t h e   o u t p u t .   V a r i e s   a c c o r d i n g   t o   t h e   c o e f f i c i e n t s   f o r m a t  
       * /  
     v o i d   a r m _ b i q u a d _ c a s _ d f 1 _ 3 2 x 6 4 _ i n i t _ q 3 1 (  
     a r m _ b i q u a d _ c a s _ d f 1 _ 3 2 x 6 4 _ i n s _ q 3 1   *   S ,  
     u i n t 8 _ t   n u m S t a g e s ,  
     q 3 1 _ t   *   p C o e f f s ,  
     q 6 3 _ t   *   p S t a t e ,  
     u i n t 8 _ t   p o s t S h i f t ) ;  
  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   f l o a t i n g - p o i n t   t r a n s p o s e d   d i r e c t   f o r m   I I   B i q u a d   c a s c a d e   f i l t e r .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 8 _ t   n u m S t a g e s ;                   / * * <   n u m b e r   o f   2 n d   o r d e r   s t a g e s   i n   t h e   f i l t e r .     O v e r a l l   o r d e r   i s   2 * n u m S t a g e s .   * /  
         f l o a t 3 2 _ t   * p S t a t e ;                   / * * <   p o i n t s   t o   t h e   a r r a y   o f   s t a t e   c o e f f i c i e n t s .     T h e   a r r a y   i s   o f   l e n g t h   2 * n u m S t a g e s .   * /  
         f l o a t 3 2 _ t   * p C o e f f s ;                 / * * <   p o i n t s   t o   t h e   a r r a y   o f   c o e f f i c i e n t s .     T h e   a r r a y   i s   o f   l e n g t h   5 * n u m S t a g e s .   * /  
     }   a r m _ b i q u a d _ c a s c a d e _ d f 2 T _ i n s t a n c e _ f 3 2 ;  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   f l o a t i n g - p o i n t   t r a n s p o s e d   d i r e c t   f o r m   I I   B i q u a d   c a s c a d e   f i l t e r .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 8 _ t   n u m S t a g e s ;                   / * * <   n u m b e r   o f   2 n d   o r d e r   s t a g e s   i n   t h e   f i l t e r .     O v e r a l l   o r d e r   i s   2 * n u m S t a g e s .   * /  
         f l o a t 3 2 _ t   * p S t a t e ;                   / * * <   p o i n t s   t o   t h e   a r r a y   o f   s t a t e   c o e f f i c i e n t s .     T h e   a r r a y   i s   o f   l e n g t h   4 * n u m S t a g e s .   * /  
         f l o a t 3 2 _ t   * p C o e f f s ;                 / * * <   p o i n t s   t o   t h e   a r r a y   o f   c o e f f i c i e n t s .     T h e   a r r a y   i s   o f   l e n g t h   5 * n u m S t a g e s .   * /  
     }   a r m _ b i q u a d _ c a s c a d e _ s t e r e o _ d f 2 T _ i n s t a n c e _ f 3 2 ;  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   f l o a t i n g - p o i n t   t r a n s p o s e d   d i r e c t   f o r m   I I   B i q u a d   c a s c a d e   f i l t e r .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 8 _ t   n u m S t a g e s ;                   / * * <   n u m b e r   o f   2 n d   o r d e r   s t a g e s   i n   t h e   f i l t e r .     O v e r a l l   o r d e r   i s   2 * n u m S t a g e s .   * /  
         f l o a t 6 4 _ t   * p S t a t e ;                   / * * <   p o i n t s   t o   t h e   a r r a y   o f   s t a t e   c o e f f i c i e n t s .     T h e   a r r a y   i s   o f   l e n g t h   2 * n u m S t a g e s .   * /  
         f l o a t 6 4 _ t   * p C o e f f s ;                 / * * <   p o i n t s   t o   t h e   a r r a y   o f   c o e f f i c i e n t s .     T h e   a r r a y   i s   o f   l e n g t h   5 * n u m S t a g e s .   * /  
     }   a r m _ b i q u a d _ c a s c a d e _ d f 2 T _ i n s t a n c e _ f 6 4 ;  
  
  
     / * *  
       *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   f l o a t i n g - p o i n t   t r a n s p o s e d   d i r e c t   f o r m   I I   B i q u a d   c a s c a d e   f i l t e r .  
       *   @ p a r a m [ i n ]     S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   f i l t e r   d a t a   s t r u c t u r e .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s .  
       * /  
     v o i d   a r m _ b i q u a d _ c a s c a d e _ d f 2 T _ f 3 2 (  
     c o n s t   a r m _ b i q u a d _ c a s c a d e _ d f 2 T _ i n s t a n c e _ f 3 2   *   S ,  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   f l o a t i n g - p o i n t   t r a n s p o s e d   d i r e c t   f o r m   I I   B i q u a d   c a s c a d e   f i l t e r .   2   c h a n n e l s  
       *   @ p a r a m [ i n ]     S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   f i l t e r   d a t a   s t r u c t u r e .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s .  
       * /  
     v o i d   a r m _ b i q u a d _ c a s c a d e _ s t e r e o _ d f 2 T _ f 3 2 (  
     c o n s t   a r m _ b i q u a d _ c a s c a d e _ s t e r e o _ d f 2 T _ i n s t a n c e _ f 3 2   *   S ,  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   f l o a t i n g - p o i n t   t r a n s p o s e d   d i r e c t   f o r m   I I   B i q u a d   c a s c a d e   f i l t e r .  
       *   @ p a r a m [ i n ]     S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   f i l t e r   d a t a   s t r u c t u r e .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s .  
       * /  
     v o i d   a r m _ b i q u a d _ c a s c a d e _ d f 2 T _ f 6 4 (  
     c o n s t   a r m _ b i q u a d _ c a s c a d e _ d f 2 T _ i n s t a n c e _ f 6 4   *   S ,  
     f l o a t 6 4 _ t   *   p S r c ,  
     f l o a t 6 4 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f     I n i t i a l i z a t i o n   f u n c t i o n   f o r   t h e   f l o a t i n g - p o i n t   t r a n s p o s e d   d i r e c t   f o r m   I I   B i q u a d   c a s c a d e   f i l t e r .  
       *   @ p a r a m [ i n , o u t ]   S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   f i l t e r   d a t a   s t r u c t u r e .  
       *   @ p a r a m [ i n ]           n u m S t a g e s     n u m b e r   o f   2 n d   o r d e r   s t a g e s   i n   t h e   f i l t e r .  
       *   @ p a r a m [ i n ]           p C o e f f s         p o i n t s   t o   t h e   f i l t e r   c o e f f i c i e n t s .  
       *   @ p a r a m [ i n ]           p S t a t e           p o i n t s   t o   t h e   s t a t e   b u f f e r .  
       * /  
     v o i d   a r m _ b i q u a d _ c a s c a d e _ d f 2 T _ i n i t _ f 3 2 (  
     a r m _ b i q u a d _ c a s c a d e _ d f 2 T _ i n s t a n c e _ f 3 2   *   S ,  
     u i n t 8 _ t   n u m S t a g e s ,  
     f l o a t 3 2 _ t   *   p C o e f f s ,  
     f l o a t 3 2 _ t   *   p S t a t e ) ;  
  
  
     / * *  
       *   @ b r i e f     I n i t i a l i z a t i o n   f u n c t i o n   f o r   t h e   f l o a t i n g - p o i n t   t r a n s p o s e d   d i r e c t   f o r m   I I   B i q u a d   c a s c a d e   f i l t e r .  
       *   @ p a r a m [ i n , o u t ]   S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   f i l t e r   d a t a   s t r u c t u r e .  
       *   @ p a r a m [ i n ]           n u m S t a g e s     n u m b e r   o f   2 n d   o r d e r   s t a g e s   i n   t h e   f i l t e r .  
       *   @ p a r a m [ i n ]           p C o e f f s         p o i n t s   t o   t h e   f i l t e r   c o e f f i c i e n t s .  
       *   @ p a r a m [ i n ]           p S t a t e           p o i n t s   t o   t h e   s t a t e   b u f f e r .  
       * /  
     v o i d   a r m _ b i q u a d _ c a s c a d e _ s t e r e o _ d f 2 T _ i n i t _ f 3 2 (  
     a r m _ b i q u a d _ c a s c a d e _ s t e r e o _ d f 2 T _ i n s t a n c e _ f 3 2   *   S ,  
     u i n t 8 _ t   n u m S t a g e s ,  
     f l o a t 3 2 _ t   *   p C o e f f s ,  
     f l o a t 3 2 _ t   *   p S t a t e ) ;  
  
  
     / * *  
       *   @ b r i e f     I n i t i a l i z a t i o n   f u n c t i o n   f o r   t h e   f l o a t i n g - p o i n t   t r a n s p o s e d   d i r e c t   f o r m   I I   B i q u a d   c a s c a d e   f i l t e r .  
       *   @ p a r a m [ i n , o u t ]   S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   f i l t e r   d a t a   s t r u c t u r e .  
       *   @ p a r a m [ i n ]           n u m S t a g e s     n u m b e r   o f   2 n d   o r d e r   s t a g e s   i n   t h e   f i l t e r .  
       *   @ p a r a m [ i n ]           p C o e f f s         p o i n t s   t o   t h e   f i l t e r   c o e f f i c i e n t s .  
       *   @ p a r a m [ i n ]           p S t a t e           p o i n t s   t o   t h e   s t a t e   b u f f e r .  
       * /  
     v o i d   a r m _ b i q u a d _ c a s c a d e _ d f 2 T _ i n i t _ f 6 4 (  
     a r m _ b i q u a d _ c a s c a d e _ d f 2 T _ i n s t a n c e _ f 6 4   *   S ,  
     u i n t 8 _ t   n u m S t a g e s ,  
     f l o a t 6 4 _ t   *   p C o e f f s ,  
     f l o a t 6 4 _ t   *   p S t a t e ) ;  
  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   Q 1 5   F I R   l a t t i c e   f i l t e r .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 1 6 _ t   n u m S t a g e s ;                                     / * * <   n u m b e r   o f   f i l t e r   s t a g e s .   * /  
         q 1 5 _ t   * p S t a t e ;                                               / * * <   p o i n t s   t o   t h e   s t a t e   v a r i a b l e   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   n u m S t a g e s .   * /  
         q 1 5 _ t   * p C o e f f s ;                                             / * * <   p o i n t s   t o   t h e   c o e f f i c i e n t   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   n u m S t a g e s .   * /  
     }   a r m _ f i r _ l a t t i c e _ i n s t a n c e _ q 1 5 ;  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   Q 3 1   F I R   l a t t i c e   f i l t e r .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 1 6 _ t   n u m S t a g e s ;                                     / * * <   n u m b e r   o f   f i l t e r   s t a g e s .   * /  
         q 3 1 _ t   * p S t a t e ;                                               / * * <   p o i n t s   t o   t h e   s t a t e   v a r i a b l e   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   n u m S t a g e s .   * /  
         q 3 1 _ t   * p C o e f f s ;                                             / * * <   p o i n t s   t o   t h e   c o e f f i c i e n t   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   n u m S t a g e s .   * /  
     }   a r m _ f i r _ l a t t i c e _ i n s t a n c e _ q 3 1 ;  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   f l o a t i n g - p o i n t   F I R   l a t t i c e   f i l t e r .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 1 6 _ t   n u m S t a g e s ;                                     / * * <   n u m b e r   o f   f i l t e r   s t a g e s .   * /  
         f l o a t 3 2 _ t   * p S t a t e ;                                       / * * <   p o i n t s   t o   t h e   s t a t e   v a r i a b l e   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   n u m S t a g e s .   * /  
         f l o a t 3 2 _ t   * p C o e f f s ;                                     / * * <   p o i n t s   t o   t h e   c o e f f i c i e n t   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   n u m S t a g e s .   * /  
     }   a r m _ f i r _ l a t t i c e _ i n s t a n c e _ f 3 2 ;  
  
  
     / * *  
       *   @ b r i e f   I n i t i a l i z a t i o n   f u n c t i o n   f o r   t h e   Q 1 5   F I R   l a t t i c e   f i l t e r .  
       *   @ p a r a m [ i n ]   S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 1 5   F I R   l a t t i c e   s t r u c t u r e .  
       *   @ p a r a m [ i n ]   n u m S t a g e s     n u m b e r   o f   f i l t e r   s t a g e s .  
       *   @ p a r a m [ i n ]   p C o e f f s         p o i n t s   t o   t h e   c o e f f i c i e n t   b u f f e r .     T h e   a r r a y   i s   o f   l e n g t h   n u m S t a g e s .  
       *   @ p a r a m [ i n ]   p S t a t e           p o i n t s   t o   t h e   s t a t e   b u f f e r .     T h e   a r r a y   i s   o f   l e n g t h   n u m S t a g e s .  
       * /  
     v o i d   a r m _ f i r _ l a t t i c e _ i n i t _ q 1 5 (  
     a r m _ f i r _ l a t t i c e _ i n s t a n c e _ q 1 5   *   S ,  
     u i n t 1 6 _ t   n u m S t a g e s ,  
     q 1 5 _ t   *   p C o e f f s ,  
     q 1 5 _ t   *   p S t a t e ) ;  
  
  
     / * *  
       *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   Q 1 5   F I R   l a t t i c e   f i l t e r .  
       *   @ p a r a m [ i n ]     S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 1 5   F I R   l a t t i c e   s t r u c t u r e .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a .  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s .  
       * /  
     v o i d   a r m _ f i r _ l a t t i c e _ q 1 5 (  
     c o n s t   a r m _ f i r _ l a t t i c e _ i n s t a n c e _ q 1 5   *   S ,  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   I n i t i a l i z a t i o n   f u n c t i o n   f o r   t h e   Q 3 1   F I R   l a t t i c e   f i l t e r .  
       *   @ p a r a m [ i n ]   S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 3 1   F I R   l a t t i c e   s t r u c t u r e .  
       *   @ p a r a m [ i n ]   n u m S t a g e s     n u m b e r   o f   f i l t e r   s t a g e s .  
       *   @ p a r a m [ i n ]   p C o e f f s         p o i n t s   t o   t h e   c o e f f i c i e n t   b u f f e r .     T h e   a r r a y   i s   o f   l e n g t h   n u m S t a g e s .  
       *   @ p a r a m [ i n ]   p S t a t e           p o i n t s   t o   t h e   s t a t e   b u f f e r .       T h e   a r r a y   i s   o f   l e n g t h   n u m S t a g e s .  
       * /  
     v o i d   a r m _ f i r _ l a t t i c e _ i n i t _ q 3 1 (  
     a r m _ f i r _ l a t t i c e _ i n s t a n c e _ q 3 1   *   S ,  
     u i n t 1 6 _ t   n u m S t a g e s ,  
     q 3 1 _ t   *   p C o e f f s ,  
     q 3 1 _ t   *   p S t a t e ) ;  
  
  
     / * *  
       *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   Q 3 1   F I R   l a t t i c e   f i l t e r .  
       *   @ p a r a m [ i n ]     S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 3 1   F I R   l a t t i c e   s t r u c t u r e .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s .  
       * /  
     v o i d   a r m _ f i r _ l a t t i c e _ q 3 1 (  
     c o n s t   a r m _ f i r _ l a t t i c e _ i n s t a n c e _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
 / * *  
   *   @ b r i e f   I n i t i a l i z a t i o n   f u n c t i o n   f o r   t h e   f l o a t i n g - p o i n t   F I R   l a t t i c e   f i l t e r .  
   *   @ p a r a m [ i n ]   S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   f l o a t i n g - p o i n t   F I R   l a t t i c e   s t r u c t u r e .  
   *   @ p a r a m [ i n ]   n u m S t a g e s     n u m b e r   o f   f i l t e r   s t a g e s .  
   *   @ p a r a m [ i n ]   p C o e f f s         p o i n t s   t o   t h e   c o e f f i c i e n t   b u f f e r .     T h e   a r r a y   i s   o f   l e n g t h   n u m S t a g e s .  
   *   @ p a r a m [ i n ]   p S t a t e           p o i n t s   t o   t h e   s t a t e   b u f f e r .     T h e   a r r a y   i s   o f   l e n g t h   n u m S t a g e s .  
   * /  
     v o i d   a r m _ f i r _ l a t t i c e _ i n i t _ f 3 2 (  
     a r m _ f i r _ l a t t i c e _ i n s t a n c e _ f 3 2   *   S ,  
     u i n t 1 6 _ t   n u m S t a g e s ,  
     f l o a t 3 2 _ t   *   p C o e f f s ,  
     f l o a t 3 2 _ t   *   p S t a t e ) ;  
  
  
     / * *  
       *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   f l o a t i n g - p o i n t   F I R   l a t t i c e   f i l t e r .  
       *   @ p a r a m [ i n ]     S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   f l o a t i n g - p o i n t   F I R   l a t t i c e   s t r u c t u r e .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s .  
       * /  
     v o i d   a r m _ f i r _ l a t t i c e _ f 3 2 (  
     c o n s t   a r m _ f i r _ l a t t i c e _ i n s t a n c e _ f 3 2   *   S ,  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   Q 1 5   I I R   l a t t i c e   f i l t e r .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 1 6 _ t   n u m S t a g e s ;                                     / * * <   n u m b e r   o f   s t a g e s   i n   t h e   f i l t e r .   * /  
         q 1 5 _ t   * p S t a t e ;                                               / * * <   p o i n t s   t o   t h e   s t a t e   v a r i a b l e   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   n u m S t a g e s + b l o c k S i z e .   * /  
         q 1 5 _ t   * p k C o e f f s ;                                           / * * <   p o i n t s   t o   t h e   r e f l e c t i o n   c o e f f i c i e n t   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   n u m S t a g e s .   * /  
         q 1 5 _ t   * p v C o e f f s ;                                           / * * <   p o i n t s   t o   t h e   l a d d e r   c o e f f i c i e n t   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   n u m S t a g e s + 1 .   * /  
     }   a r m _ i i r _ l a t t i c e _ i n s t a n c e _ q 1 5 ;  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   Q 3 1   I I R   l a t t i c e   f i l t e r .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 1 6 _ t   n u m S t a g e s ;                                     / * * <   n u m b e r   o f   s t a g e s   i n   t h e   f i l t e r .   * /  
         q 3 1 _ t   * p S t a t e ;                                               / * * <   p o i n t s   t o   t h e   s t a t e   v a r i a b l e   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   n u m S t a g e s + b l o c k S i z e .   * /  
         q 3 1 _ t   * p k C o e f f s ;                                           / * * <   p o i n t s   t o   t h e   r e f l e c t i o n   c o e f f i c i e n t   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   n u m S t a g e s .   * /  
         q 3 1 _ t   * p v C o e f f s ;                                           / * * <   p o i n t s   t o   t h e   l a d d e r   c o e f f i c i e n t   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   n u m S t a g e s + 1 .   * /  
     }   a r m _ i i r _ l a t t i c e _ i n s t a n c e _ q 3 1 ;  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   f l o a t i n g - p o i n t   I I R   l a t t i c e   f i l t e r .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 1 6 _ t   n u m S t a g e s ;                                     / * * <   n u m b e r   o f   s t a g e s   i n   t h e   f i l t e r .   * /  
         f l o a t 3 2 _ t   * p S t a t e ;                                       / * * <   p o i n t s   t o   t h e   s t a t e   v a r i a b l e   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   n u m S t a g e s + b l o c k S i z e .   * /  
         f l o a t 3 2 _ t   * p k C o e f f s ;                                   / * * <   p o i n t s   t o   t h e   r e f l e c t i o n   c o e f f i c i e n t   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   n u m S t a g e s .   * /  
         f l o a t 3 2 _ t   * p v C o e f f s ;                                   / * * <   p o i n t s   t o   t h e   l a d d e r   c o e f f i c i e n t   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   n u m S t a g e s + 1 .   * /  
     }   a r m _ i i r _ l a t t i c e _ i n s t a n c e _ f 3 2 ;  
  
  
     / * *  
       *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   f l o a t i n g - p o i n t   I I R   l a t t i c e   f i l t e r .  
       *   @ p a r a m [ i n ]     S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   f l o a t i n g - p o i n t   I I R   l a t t i c e   s t r u c t u r e .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a .  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s .  
       * /  
     v o i d   a r m _ i i r _ l a t t i c e _ f 3 2 (  
     c o n s t   a r m _ i i r _ l a t t i c e _ i n s t a n c e _ f 3 2   *   S ,  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   I n i t i a l i z a t i o n   f u n c t i o n   f o r   t h e   f l o a t i n g - p o i n t   I I R   l a t t i c e   f i l t e r .  
       *   @ p a r a m [ i n ]   S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   f l o a t i n g - p o i n t   I I R   l a t t i c e   s t r u c t u r e .  
       *   @ p a r a m [ i n ]   n u m S t a g e s     n u m b e r   o f   s t a g e s   i n   t h e   f i l t e r .  
       *   @ p a r a m [ i n ]   p k C o e f f s       p o i n t s   t o   t h e   r e f l e c t i o n   c o e f f i c i e n t   b u f f e r .     T h e   a r r a y   i s   o f   l e n g t h   n u m S t a g e s .  
       *   @ p a r a m [ i n ]   p v C o e f f s       p o i n t s   t o   t h e   l a d d e r   c o e f f i c i e n t   b u f f e r .     T h e   a r r a y   i s   o f   l e n g t h   n u m S t a g e s + 1 .  
       *   @ p a r a m [ i n ]   p S t a t e           p o i n t s   t o   t h e   s t a t e   b u f f e r .     T h e   a r r a y   i s   o f   l e n g t h   n u m S t a g e s + b l o c k S i z e - 1 .  
       *   @ p a r a m [ i n ]   b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s .  
       * /  
     v o i d   a r m _ i i r _ l a t t i c e _ i n i t _ f 3 2 (  
     a r m _ i i r _ l a t t i c e _ i n s t a n c e _ f 3 2   *   S ,  
     u i n t 1 6 _ t   n u m S t a g e s ,  
     f l o a t 3 2 _ t   *   p k C o e f f s ,  
     f l o a t 3 2 _ t   *   p v C o e f f s ,  
     f l o a t 3 2 _ t   *   p S t a t e ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   Q 3 1   I I R   l a t t i c e   f i l t e r .  
       *   @ p a r a m [ i n ]     S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 3 1   I I R   l a t t i c e   s t r u c t u r e .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a .  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s .  
       * /  
     v o i d   a r m _ i i r _ l a t t i c e _ q 3 1 (  
     c o n s t   a r m _ i i r _ l a t t i c e _ i n s t a n c e _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   I n i t i a l i z a t i o n   f u n c t i o n   f o r   t h e   Q 3 1   I I R   l a t t i c e   f i l t e r .  
       *   @ p a r a m [ i n ]   S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 3 1   I I R   l a t t i c e   s t r u c t u r e .  
       *   @ p a r a m [ i n ]   n u m S t a g e s     n u m b e r   o f   s t a g e s   i n   t h e   f i l t e r .  
       *   @ p a r a m [ i n ]   p k C o e f f s       p o i n t s   t o   t h e   r e f l e c t i o n   c o e f f i c i e n t   b u f f e r .     T h e   a r r a y   i s   o f   l e n g t h   n u m S t a g e s .  
       *   @ p a r a m [ i n ]   p v C o e f f s       p o i n t s   t o   t h e   l a d d e r   c o e f f i c i e n t   b u f f e r .     T h e   a r r a y   i s   o f   l e n g t h   n u m S t a g e s + 1 .  
       *   @ p a r a m [ i n ]   p S t a t e           p o i n t s   t o   t h e   s t a t e   b u f f e r .     T h e   a r r a y   i s   o f   l e n g t h   n u m S t a g e s + b l o c k S i z e .  
       *   @ p a r a m [ i n ]   b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s .  
       * /  
     v o i d   a r m _ i i r _ l a t t i c e _ i n i t _ q 3 1 (  
     a r m _ i i r _ l a t t i c e _ i n s t a n c e _ q 3 1   *   S ,  
     u i n t 1 6 _ t   n u m S t a g e s ,  
     q 3 1 _ t   *   p k C o e f f s ,  
     q 3 1 _ t   *   p v C o e f f s ,  
     q 3 1 _ t   *   p S t a t e ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   Q 1 5   I I R   l a t t i c e   f i l t e r .  
       *   @ p a r a m [ i n ]     S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 1 5   I I R   l a t t i c e   s t r u c t u r e .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a .  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s .  
       * /  
     v o i d   a r m _ i i r _ l a t t i c e _ q 1 5 (  
     c o n s t   a r m _ i i r _ l a t t i c e _ i n s t a n c e _ q 1 5   *   S ,  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
 / * *  
   *   @ b r i e f   I n i t i a l i z a t i o n   f u n c t i o n   f o r   t h e   Q 1 5   I I R   l a t t i c e   f i l t e r .  
   *   @ p a r a m [ i n ]   S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   f i x e d - p o i n t   Q 1 5   I I R   l a t t i c e   s t r u c t u r e .  
   *   @ p a r a m [ i n ]   n u m S t a g e s     n u m b e r   o f   s t a g e s   i n   t h e   f i l t e r .  
   *   @ p a r a m [ i n ]   p k C o e f f s       p o i n t s   t o   r e f l e c t i o n   c o e f f i c i e n t   b u f f e r .     T h e   a r r a y   i s   o f   l e n g t h   n u m S t a g e s .  
   *   @ p a r a m [ i n ]   p v C o e f f s       p o i n t s   t o   l a d d e r   c o e f f i c i e n t   b u f f e r .     T h e   a r r a y   i s   o f   l e n g t h   n u m S t a g e s + 1 .  
   *   @ p a r a m [ i n ]   p S t a t e           p o i n t s   t o   s t a t e   b u f f e r .     T h e   a r r a y   i s   o f   l e n g t h   n u m S t a g e s + b l o c k S i z e .  
   *   @ p a r a m [ i n ]   b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s   p e r   c a l l .  
   * /  
     v o i d   a r m _ i i r _ l a t t i c e _ i n i t _ q 1 5 (  
     a r m _ i i r _ l a t t i c e _ i n s t a n c e _ q 1 5   *   S ,  
     u i n t 1 6 _ t   n u m S t a g e s ,  
     q 1 5 _ t   *   p k C o e f f s ,  
     q 1 5 _ t   *   p v C o e f f s ,  
     q 1 5 _ t   *   p S t a t e ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   f l o a t i n g - p o i n t   L M S   f i l t e r .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 1 6 _ t   n u m T a p s ;         / * * <   n u m b e r   o f   c o e f f i c i e n t s   i n   t h e   f i l t e r .   * /  
         f l o a t 3 2 _ t   * p S t a t e ;       / * * <   p o i n t s   t o   t h e   s t a t e   v a r i a b l e   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   n u m T a p s + b l o c k S i z e - 1 .   * /  
         f l o a t 3 2 _ t   * p C o e f f s ;     / * * <   p o i n t s   t o   t h e   c o e f f i c i e n t   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   n u m T a p s .   * /  
         f l o a t 3 2 _ t   m u ;                 / * * <   s t e p   s i z e   t h a t   c o n t r o l s   f i l t e r   c o e f f i c i e n t   u p d a t e s .   * /  
     }   a r m _ l m s _ i n s t a n c e _ f 3 2 ;  
  
  
     / * *  
       *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   f l o a t i n g - p o i n t   L M S   f i l t e r .  
       *   @ p a r a m [ i n ]     S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   f l o a t i n g - p o i n t   L M S   f i l t e r   s t r u c t u r e .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
       *   @ p a r a m [ i n ]     p R e f               p o i n t s   t o   t h e   b l o c k   o f   r e f e r e n c e   d a t a .  
       *   @ p a r a m [ o u t ]   p O u t               p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a .  
       *   @ p a r a m [ o u t ]   p E r r               p o i n t s   t o   t h e   b l o c k   o f   e r r o r   d a t a .  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s .  
       * /  
     v o i d   a r m _ l m s _ f 3 2 (  
     c o n s t   a r m _ l m s _ i n s t a n c e _ f 3 2   *   S ,  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p R e f ,  
     f l o a t 3 2 _ t   *   p O u t ,  
     f l o a t 3 2 _ t   *   p E r r ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   I n i t i a l i z a t i o n   f u n c t i o n   f o r   f l o a t i n g - p o i n t   L M S   f i l t e r .  
       *   @ p a r a m [ i n ]   S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   f l o a t i n g - p o i n t   L M S   f i l t e r   s t r u c t u r e .  
       *   @ p a r a m [ i n ]   n u m T a p s         n u m b e r   o f   f i l t e r   c o e f f i c i e n t s .  
       *   @ p a r a m [ i n ]   p C o e f f s         p o i n t s   t o   t h e   c o e f f i c i e n t   b u f f e r .  
       *   @ p a r a m [ i n ]   p S t a t e           p o i n t s   t o   s t a t e   b u f f e r .  
       *   @ p a r a m [ i n ]   m u                   s t e p   s i z e   t h a t   c o n t r o l s   f i l t e r   c o e f f i c i e n t   u p d a t e s .  
       *   @ p a r a m [ i n ]   b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s .  
       * /  
     v o i d   a r m _ l m s _ i n i t _ f 3 2 (  
     a r m _ l m s _ i n s t a n c e _ f 3 2   *   S ,  
     u i n t 1 6 _ t   n u m T a p s ,  
     f l o a t 3 2 _ t   *   p C o e f f s ,  
     f l o a t 3 2 _ t   *   p S t a t e ,  
     f l o a t 3 2 _ t   m u ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   Q 1 5   L M S   f i l t e r .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 1 6 _ t   n u m T a p s ;         / * * <   n u m b e r   o f   c o e f f i c i e n t s   i n   t h e   f i l t e r .   * /  
         q 1 5 _ t   * p S t a t e ;               / * * <   p o i n t s   t o   t h e   s t a t e   v a r i a b l e   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   n u m T a p s + b l o c k S i z e - 1 .   * /  
         q 1 5 _ t   * p C o e f f s ;             / * * <   p o i n t s   t o   t h e   c o e f f i c i e n t   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   n u m T a p s .   * /  
         q 1 5 _ t   m u ;                         / * * <   s t e p   s i z e   t h a t   c o n t r o l s   f i l t e r   c o e f f i c i e n t   u p d a t e s .   * /  
         u i n t 3 2 _ t   p o s t S h i f t ;     / * * <   b i t   s h i f t   a p p l i e d   t o   c o e f f i c i e n t s .   * /  
     }   a r m _ l m s _ i n s t a n c e _ q 1 5 ;  
  
  
     / * *  
       *   @ b r i e f   I n i t i a l i z a t i o n   f u n c t i o n   f o r   t h e   Q 1 5   L M S   f i l t e r .  
       *   @ p a r a m [ i n ]   S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 1 5   L M S   f i l t e r   s t r u c t u r e .  
       *   @ p a r a m [ i n ]   n u m T a p s         n u m b e r   o f   f i l t e r   c o e f f i c i e n t s .  
       *   @ p a r a m [ i n ]   p C o e f f s         p o i n t s   t o   t h e   c o e f f i c i e n t   b u f f e r .  
       *   @ p a r a m [ i n ]   p S t a t e           p o i n t s   t o   t h e   s t a t e   b u f f e r .  
       *   @ p a r a m [ i n ]   m u                   s t e p   s i z e   t h a t   c o n t r o l s   f i l t e r   c o e f f i c i e n t   u p d a t e s .  
       *   @ p a r a m [ i n ]   b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s .  
       *   @ p a r a m [ i n ]   p o s t S h i f t     b i t   s h i f t   a p p l i e d   t o   c o e f f i c i e n t s .  
       * /  
     v o i d   a r m _ l m s _ i n i t _ q 1 5 (  
     a r m _ l m s _ i n s t a n c e _ q 1 5   *   S ,  
     u i n t 1 6 _ t   n u m T a p s ,  
     q 1 5 _ t   *   p C o e f f s ,  
     q 1 5 _ t   *   p S t a t e ,  
     q 1 5 _ t   m u ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     u i n t 3 2 _ t   p o s t S h i f t ) ;  
  
  
     / * *  
       *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   Q 1 5   L M S   f i l t e r .  
       *   @ p a r a m [ i n ]     S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 1 5   L M S   f i l t e r   s t r u c t u r e .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
       *   @ p a r a m [ i n ]     p R e f               p o i n t s   t o   t h e   b l o c k   o f   r e f e r e n c e   d a t a .  
       *   @ p a r a m [ o u t ]   p O u t               p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a .  
       *   @ p a r a m [ o u t ]   p E r r               p o i n t s   t o   t h e   b l o c k   o f   e r r o r   d a t a .  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s .  
       * /  
     v o i d   a r m _ l m s _ q 1 5 (  
     c o n s t   a r m _ l m s _ i n s t a n c e _ q 1 5   *   S ,  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p R e f ,  
     q 1 5 _ t   *   p O u t ,  
     q 1 5 _ t   *   p E r r ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   Q 3 1   L M S   f i l t e r .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 1 6 _ t   n u m T a p s ;         / * * <   n u m b e r   o f   c o e f f i c i e n t s   i n   t h e   f i l t e r .   * /  
         q 3 1 _ t   * p S t a t e ;               / * * <   p o i n t s   t o   t h e   s t a t e   v a r i a b l e   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   n u m T a p s + b l o c k S i z e - 1 .   * /  
         q 3 1 _ t   * p C o e f f s ;             / * * <   p o i n t s   t o   t h e   c o e f f i c i e n t   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   n u m T a p s .   * /  
         q 3 1 _ t   m u ;                         / * * <   s t e p   s i z e   t h a t   c o n t r o l s   f i l t e r   c o e f f i c i e n t   u p d a t e s .   * /  
         u i n t 3 2 _ t   p o s t S h i f t ;     / * * <   b i t   s h i f t   a p p l i e d   t o   c o e f f i c i e n t s .   * /  
     }   a r m _ l m s _ i n s t a n c e _ q 3 1 ;  
  
  
     / * *  
       *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   Q 3 1   L M S   f i l t e r .  
       *   @ p a r a m [ i n ]     S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 1 5   L M S   f i l t e r   s t r u c t u r e .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
       *   @ p a r a m [ i n ]     p R e f               p o i n t s   t o   t h e   b l o c k   o f   r e f e r e n c e   d a t a .  
       *   @ p a r a m [ o u t ]   p O u t               p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a .  
       *   @ p a r a m [ o u t ]   p E r r               p o i n t s   t o   t h e   b l o c k   o f   e r r o r   d a t a .  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s .  
       * /  
     v o i d   a r m _ l m s _ q 3 1 (  
     c o n s t   a r m _ l m s _ i n s t a n c e _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p R e f ,  
     q 3 1 _ t   *   p O u t ,  
     q 3 1 _ t   *   p E r r ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   I n i t i a l i z a t i o n   f u n c t i o n   f o r   Q 3 1   L M S   f i l t e r .  
       *   @ p a r a m [ i n ]   S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 3 1   L M S   f i l t e r   s t r u c t u r e .  
       *   @ p a r a m [ i n ]   n u m T a p s         n u m b e r   o f   f i l t e r   c o e f f i c i e n t s .  
       *   @ p a r a m [ i n ]   p C o e f f s         p o i n t s   t o   c o e f f i c i e n t   b u f f e r .  
       *   @ p a r a m [ i n ]   p S t a t e           p o i n t s   t o   s t a t e   b u f f e r .  
       *   @ p a r a m [ i n ]   m u                   s t e p   s i z e   t h a t   c o n t r o l s   f i l t e r   c o e f f i c i e n t   u p d a t e s .  
       *   @ p a r a m [ i n ]   b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s .  
       *   @ p a r a m [ i n ]   p o s t S h i f t     b i t   s h i f t   a p p l i e d   t o   c o e f f i c i e n t s .  
       * /  
     v o i d   a r m _ l m s _ i n i t _ q 3 1 (  
     a r m _ l m s _ i n s t a n c e _ q 3 1   *   S ,  
     u i n t 1 6 _ t   n u m T a p s ,  
     q 3 1 _ t   *   p C o e f f s ,  
     q 3 1 _ t   *   p S t a t e ,  
     q 3 1 _ t   m u ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     u i n t 3 2 _ t   p o s t S h i f t ) ;  
  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   f l o a t i n g - p o i n t   n o r m a l i z e d   L M S   f i l t e r .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 1 6 _ t   n u m T a p s ;           / * * <   n u m b e r   o f   c o e f f i c i e n t s   i n   t h e   f i l t e r .   * /  
         f l o a t 3 2 _ t   * p S t a t e ;         / * * <   p o i n t s   t o   t h e   s t a t e   v a r i a b l e   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   n u m T a p s + b l o c k S i z e - 1 .   * /  
         f l o a t 3 2 _ t   * p C o e f f s ;       / * * <   p o i n t s   t o   t h e   c o e f f i c i e n t   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   n u m T a p s .   * /  
         f l o a t 3 2 _ t   m u ;                   / * * <   s t e p   s i z e   t h a t   c o n t r o l   f i l t e r   c o e f f i c i e n t   u p d a t e s .   * /  
         f l o a t 3 2 _ t   e n e r g y ;           / * * <   s a v e s   p r e v i o u s   f r a m e   e n e r g y .   * /  
         f l o a t 3 2 _ t   x 0 ;                   / * * <   s a v e s   p r e v i o u s   i n p u t   s a m p l e .   * /  
     }   a r m _ l m s _ n o r m _ i n s t a n c e _ f 3 2 ;  
  
  
     / * *  
       *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   f l o a t i n g - p o i n t   n o r m a l i z e d   L M S   f i l t e r .  
       *   @ p a r a m [ i n ]     S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   f l o a t i n g - p o i n t   n o r m a l i z e d   L M S   f i l t e r   s t r u c t u r e .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
       *   @ p a r a m [ i n ]     p R e f               p o i n t s   t o   t h e   b l o c k   o f   r e f e r e n c e   d a t a .  
       *   @ p a r a m [ o u t ]   p O u t               p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a .  
       *   @ p a r a m [ o u t ]   p E r r               p o i n t s   t o   t h e   b l o c k   o f   e r r o r   d a t a .  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s .  
       * /  
     v o i d   a r m _ l m s _ n o r m _ f 3 2 (  
     a r m _ l m s _ n o r m _ i n s t a n c e _ f 3 2   *   S ,  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p R e f ,  
     f l o a t 3 2 _ t   *   p O u t ,  
     f l o a t 3 2 _ t   *   p E r r ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   I n i t i a l i z a t i o n   f u n c t i o n   f o r   f l o a t i n g - p o i n t   n o r m a l i z e d   L M S   f i l t e r .  
       *   @ p a r a m [ i n ]   S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   f l o a t i n g - p o i n t   L M S   f i l t e r   s t r u c t u r e .  
       *   @ p a r a m [ i n ]   n u m T a p s         n u m b e r   o f   f i l t e r   c o e f f i c i e n t s .  
       *   @ p a r a m [ i n ]   p C o e f f s         p o i n t s   t o   c o e f f i c i e n t   b u f f e r .  
       *   @ p a r a m [ i n ]   p S t a t e           p o i n t s   t o   s t a t e   b u f f e r .  
       *   @ p a r a m [ i n ]   m u                   s t e p   s i z e   t h a t   c o n t r o l s   f i l t e r   c o e f f i c i e n t   u p d a t e s .  
       *   @ p a r a m [ i n ]   b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s .  
       * /  
     v o i d   a r m _ l m s _ n o r m _ i n i t _ f 3 2 (  
     a r m _ l m s _ n o r m _ i n s t a n c e _ f 3 2   *   S ,  
     u i n t 1 6 _ t   n u m T a p s ,  
     f l o a t 3 2 _ t   *   p C o e f f s ,  
     f l o a t 3 2 _ t   *   p S t a t e ,  
     f l o a t 3 2 _ t   m u ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   Q 3 1   n o r m a l i z e d   L M S   f i l t e r .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 1 6 _ t   n u m T a p s ;           / * * <   n u m b e r   o f   c o e f f i c i e n t s   i n   t h e   f i l t e r .   * /  
         q 3 1 _ t   * p S t a t e ;                 / * * <   p o i n t s   t o   t h e   s t a t e   v a r i a b l e   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   n u m T a p s + b l o c k S i z e - 1 .   * /  
         q 3 1 _ t   * p C o e f f s ;               / * * <   p o i n t s   t o   t h e   c o e f f i c i e n t   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   n u m T a p s .   * /  
         q 3 1 _ t   m u ;                           / * * <   s t e p   s i z e   t h a t   c o n t r o l s   f i l t e r   c o e f f i c i e n t   u p d a t e s .   * /  
         u i n t 8 _ t   p o s t S h i f t ;         / * * <   b i t   s h i f t   a p p l i e d   t o   c o e f f i c i e n t s .   * /  
         q 3 1 _ t   * r e c i p T a b l e ;         / * * <   p o i n t s   t o   t h e   r e c i p r o c a l   i n i t i a l   v a l u e   t a b l e .   * /  
         q 3 1 _ t   e n e r g y ;                   / * * <   s a v e s   p r e v i o u s   f r a m e   e n e r g y .   * /  
         q 3 1 _ t   x 0 ;                           / * * <   s a v e s   p r e v i o u s   i n p u t   s a m p l e .   * /  
     }   a r m _ l m s _ n o r m _ i n s t a n c e _ q 3 1 ;  
  
  
     / * *  
       *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   Q 3 1   n o r m a l i z e d   L M S   f i l t e r .  
       *   @ p a r a m [ i n ]     S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 3 1   n o r m a l i z e d   L M S   f i l t e r   s t r u c t u r e .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
       *   @ p a r a m [ i n ]     p R e f               p o i n t s   t o   t h e   b l o c k   o f   r e f e r e n c e   d a t a .  
       *   @ p a r a m [ o u t ]   p O u t               p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a .  
       *   @ p a r a m [ o u t ]   p E r r               p o i n t s   t o   t h e   b l o c k   o f   e r r o r   d a t a .  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s .  
       * /  
     v o i d   a r m _ l m s _ n o r m _ q 3 1 (  
     a r m _ l m s _ n o r m _ i n s t a n c e _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p R e f ,  
     q 3 1 _ t   *   p O u t ,  
     q 3 1 _ t   *   p E r r ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   I n i t i a l i z a t i o n   f u n c t i o n   f o r   Q 3 1   n o r m a l i z e d   L M S   f i l t e r .  
       *   @ p a r a m [ i n ]   S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 3 1   n o r m a l i z e d   L M S   f i l t e r   s t r u c t u r e .  
       *   @ p a r a m [ i n ]   n u m T a p s         n u m b e r   o f   f i l t e r   c o e f f i c i e n t s .  
       *   @ p a r a m [ i n ]   p C o e f f s         p o i n t s   t o   c o e f f i c i e n t   b u f f e r .  
       *   @ p a r a m [ i n ]   p S t a t e           p o i n t s   t o   s t a t e   b u f f e r .  
       *   @ p a r a m [ i n ]   m u                   s t e p   s i z e   t h a t   c o n t r o l s   f i l t e r   c o e f f i c i e n t   u p d a t e s .  
       *   @ p a r a m [ i n ]   b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s .  
       *   @ p a r a m [ i n ]   p o s t S h i f t     b i t   s h i f t   a p p l i e d   t o   c o e f f i c i e n t s .  
       * /  
     v o i d   a r m _ l m s _ n o r m _ i n i t _ q 3 1 (  
     a r m _ l m s _ n o r m _ i n s t a n c e _ q 3 1   *   S ,  
     u i n t 1 6 _ t   n u m T a p s ,  
     q 3 1 _ t   *   p C o e f f s ,  
     q 3 1 _ t   *   p S t a t e ,  
     q 3 1 _ t   m u ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     u i n t 8 _ t   p o s t S h i f t ) ;  
  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   Q 1 5   n o r m a l i z e d   L M S   f i l t e r .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 1 6 _ t   n u m T a p s ;           / * * <   N u m b e r   o f   c o e f f i c i e n t s   i n   t h e   f i l t e r .   * /  
         q 1 5 _ t   * p S t a t e ;                 / * * <   p o i n t s   t o   t h e   s t a t e   v a r i a b l e   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   n u m T a p s + b l o c k S i z e - 1 .   * /  
         q 1 5 _ t   * p C o e f f s ;               / * * <   p o i n t s   t o   t h e   c o e f f i c i e n t   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   n u m T a p s .   * /  
         q 1 5 _ t   m u ;                           / * * <   s t e p   s i z e   t h a t   c o n t r o l s   f i l t e r   c o e f f i c i e n t   u p d a t e s .   * /  
         u i n t 8 _ t   p o s t S h i f t ;         / * * <   b i t   s h i f t   a p p l i e d   t o   c o e f f i c i e n t s .   * /  
         q 1 5 _ t   * r e c i p T a b l e ;         / * * <   P o i n t s   t o   t h e   r e c i p r o c a l   i n i t i a l   v a l u e   t a b l e .   * /  
         q 1 5 _ t   e n e r g y ;                   / * * <   s a v e s   p r e v i o u s   f r a m e   e n e r g y .   * /  
         q 1 5 _ t   x 0 ;                           / * * <   s a v e s   p r e v i o u s   i n p u t   s a m p l e .   * /  
     }   a r m _ l m s _ n o r m _ i n s t a n c e _ q 1 5 ;  
  
  
     / * *  
       *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   Q 1 5   n o r m a l i z e d   L M S   f i l t e r .  
       *   @ p a r a m [ i n ]     S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 1 5   n o r m a l i z e d   L M S   f i l t e r   s t r u c t u r e .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
       *   @ p a r a m [ i n ]     p R e f               p o i n t s   t o   t h e   b l o c k   o f   r e f e r e n c e   d a t a .  
       *   @ p a r a m [ o u t ]   p O u t               p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a .  
       *   @ p a r a m [ o u t ]   p E r r               p o i n t s   t o   t h e   b l o c k   o f   e r r o r   d a t a .  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s .  
       * /  
     v o i d   a r m _ l m s _ n o r m _ q 1 5 (  
     a r m _ l m s _ n o r m _ i n s t a n c e _ q 1 5   *   S ,  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p R e f ,  
     q 1 5 _ t   *   p O u t ,  
     q 1 5 _ t   *   p E r r ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   I n i t i a l i z a t i o n   f u n c t i o n   f o r   Q 1 5   n o r m a l i z e d   L M S   f i l t e r .  
       *   @ p a r a m [ i n ]   S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 1 5   n o r m a l i z e d   L M S   f i l t e r   s t r u c t u r e .  
       *   @ p a r a m [ i n ]   n u m T a p s         n u m b e r   o f   f i l t e r   c o e f f i c i e n t s .  
       *   @ p a r a m [ i n ]   p C o e f f s         p o i n t s   t o   c o e f f i c i e n t   b u f f e r .  
       *   @ p a r a m [ i n ]   p S t a t e           p o i n t s   t o   s t a t e   b u f f e r .  
       *   @ p a r a m [ i n ]   m u                   s t e p   s i z e   t h a t   c o n t r o l s   f i l t e r   c o e f f i c i e n t   u p d a t e s .  
       *   @ p a r a m [ i n ]   b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s .  
       *   @ p a r a m [ i n ]   p o s t S h i f t     b i t   s h i f t   a p p l i e d   t o   c o e f f i c i e n t s .  
       * /  
     v o i d   a r m _ l m s _ n o r m _ i n i t _ q 1 5 (  
     a r m _ l m s _ n o r m _ i n s t a n c e _ q 1 5   *   S ,  
     u i n t 1 6 _ t   n u m T a p s ,  
     q 1 5 _ t   *   p C o e f f s ,  
     q 1 5 _ t   *   p S t a t e ,  
     q 1 5 _ t   m u ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     u i n t 8 _ t   p o s t S h i f t ) ;  
  
  
     / * *  
       *   @ b r i e f   C o r r e l a t i o n   o f   f l o a t i n g - p o i n t   s e q u e n c e s .  
       *   @ p a r a m [ i n ]     p S r c A         p o i n t s   t o   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c A L e n     l e n g t h   o f   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     p S r c B         p o i n t s   t o   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c B L e n     l e n g t h   o f   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ o u t ]   p D s t           p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a     L e n g t h   2   *   m a x ( s r c A L e n ,   s r c B L e n )   -   1 .  
       * /  
     v o i d   a r m _ c o r r e l a t e _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     f l o a t 3 2 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     f l o a t 3 2 _ t   *   p D s t ) ;  
  
  
       / * *  
       *   @ b r i e f   C o r r e l a t i o n   o f   Q 1 5   s e q u e n c e s  
       *   @ p a r a m [ i n ]     p S r c A           p o i n t s   t o   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c A L e n       l e n g t h   o f   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     p S r c B           p o i n t s   t o   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c B L e n       l e n g t h   o f   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ o u t ]   p D s t             p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a     L e n g t h   2   *   m a x ( s r c A L e n ,   s r c B L e n )   -   1 .  
       *   @ p a r a m [ i n ]     p S c r a t c h     p o i n t s   t o   s c r a t c h   b u f f e r   o f   s i z e   m a x ( s r c A L e n ,   s r c B L e n )   +   2 * m i n ( s r c A L e n ,   s r c B L e n )   -   2 .  
       * /  
     v o i d   a r m _ c o r r e l a t e _ o p t _ q 1 5 (  
     q 1 5 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     q 1 5 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     q 1 5 _ t   *   p D s t ,  
     q 1 5 _ t   *   p S c r a t c h ) ;  
  
  
     / * *  
       *   @ b r i e f   C o r r e l a t i o n   o f   Q 1 5   s e q u e n c e s .  
       *   @ p a r a m [ i n ]     p S r c A         p o i n t s   t o   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c A L e n     l e n g t h   o f   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     p S r c B         p o i n t s   t o   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c B L e n     l e n g t h   o f   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ o u t ]   p D s t           p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a     L e n g t h   2   *   m a x ( s r c A L e n ,   s r c B L e n )   -   1 .  
       * /  
  
     v o i d   a r m _ c o r r e l a t e _ q 1 5 (  
     q 1 5 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     q 1 5 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     q 1 5 _ t   *   p D s t ) ;  
  
  
     / * *  
       *   @ b r i e f   C o r r e l a t i o n   o f   Q 1 5   s e q u e n c e s   ( f a s t   v e r s i o n )   f o r   C o r t e x - M 3   a n d   C o r t e x - M 4 .  
       *   @ p a r a m [ i n ]     p S r c A         p o i n t s   t o   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c A L e n     l e n g t h   o f   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     p S r c B         p o i n t s   t o   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c B L e n     l e n g t h   o f   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ o u t ]   p D s t           p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a     L e n g t h   2   *   m a x ( s r c A L e n ,   s r c B L e n )   -   1 .  
       * /  
  
     v o i d   a r m _ c o r r e l a t e _ f a s t _ q 1 5 (  
     q 1 5 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     q 1 5 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     q 1 5 _ t   *   p D s t ) ;  
  
  
     / * *  
       *   @ b r i e f   C o r r e l a t i o n   o f   Q 1 5   s e q u e n c e s   ( f a s t   v e r s i o n )   f o r   C o r t e x - M 3   a n d   C o r t e x - M 4 .  
       *   @ p a r a m [ i n ]     p S r c A           p o i n t s   t o   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c A L e n       l e n g t h   o f   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     p S r c B           p o i n t s   t o   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c B L e n       l e n g t h   o f   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ o u t ]   p D s t             p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a     L e n g t h   2   *   m a x ( s r c A L e n ,   s r c B L e n )   -   1 .  
       *   @ p a r a m [ i n ]     p S c r a t c h     p o i n t s   t o   s c r a t c h   b u f f e r   o f   s i z e   m a x ( s r c A L e n ,   s r c B L e n )   +   2 * m i n ( s r c A L e n ,   s r c B L e n )   -   2 .  
       * /  
     v o i d   a r m _ c o r r e l a t e _ f a s t _ o p t _ q 1 5 (  
     q 1 5 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     q 1 5 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     q 1 5 _ t   *   p D s t ,  
     q 1 5 _ t   *   p S c r a t c h ) ;  
  
  
     / * *  
       *   @ b r i e f   C o r r e l a t i o n   o f   Q 3 1   s e q u e n c e s .  
       *   @ p a r a m [ i n ]     p S r c A         p o i n t s   t o   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c A L e n     l e n g t h   o f   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     p S r c B         p o i n t s   t o   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c B L e n     l e n g t h   o f   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ o u t ]   p D s t           p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a     L e n g t h   2   *   m a x ( s r c A L e n ,   s r c B L e n )   -   1 .  
       * /  
     v o i d   a r m _ c o r r e l a t e _ q 3 1 (  
     q 3 1 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     q 3 1 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     q 3 1 _ t   *   p D s t ) ;  
  
  
     / * *  
       *   @ b r i e f   C o r r e l a t i o n   o f   Q 3 1   s e q u e n c e s   ( f a s t   v e r s i o n )   f o r   C o r t e x - M 3   a n d   C o r t e x - M 4  
       *   @ p a r a m [ i n ]     p S r c A         p o i n t s   t o   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c A L e n     l e n g t h   o f   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     p S r c B         p o i n t s   t o   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c B L e n     l e n g t h   o f   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ o u t ]   p D s t           p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a     L e n g t h   2   *   m a x ( s r c A L e n ,   s r c B L e n )   -   1 .  
       * /  
     v o i d   a r m _ c o r r e l a t e _ f a s t _ q 3 1 (  
     q 3 1 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     q 3 1 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     q 3 1 _ t   *   p D s t ) ;  
  
  
   / * *  
       *   @ b r i e f   C o r r e l a t i o n   o f   Q 7   s e q u e n c e s .  
       *   @ p a r a m [ i n ]     p S r c A             p o i n t s   t o   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c A L e n         l e n g t h   o f   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     p S r c B             p o i n t s   t o   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c B L e n         l e n g t h   o f   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a     L e n g t h   2   *   m a x ( s r c A L e n ,   s r c B L e n )   -   1 .  
       *   @ p a r a m [ i n ]     p S c r a t c h 1     p o i n t s   t o   s c r a t c h   b u f f e r ( o f   t y p e   q 1 5 _ t )   o f   s i z e   m a x ( s r c A L e n ,   s r c B L e n )   +   2 * m i n ( s r c A L e n ,   s r c B L e n )   -   2 .  
       *   @ p a r a m [ i n ]     p S c r a t c h 2     p o i n t s   t o   s c r a t c h   b u f f e r   ( o f   t y p e   q 1 5 _ t )   o f   s i z e   m i n ( s r c A L e n ,   s r c B L e n ) .  
       * /  
     v o i d   a r m _ c o r r e l a t e _ o p t _ q 7 (  
     q 7 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     q 7 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     q 7 _ t   *   p D s t ,  
     q 1 5 _ t   *   p S c r a t c h 1 ,  
     q 1 5 _ t   *   p S c r a t c h 2 ) ;  
  
  
     / * *  
       *   @ b r i e f   C o r r e l a t i o n   o f   Q 7   s e q u e n c e s .  
       *   @ p a r a m [ i n ]     p S r c A         p o i n t s   t o   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c A L e n     l e n g t h   o f   t h e   f i r s t   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     p S r c B         p o i n t s   t o   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ i n ]     s r c B L e n     l e n g t h   o f   t h e   s e c o n d   i n p u t   s e q u e n c e .  
       *   @ p a r a m [ o u t ]   p D s t           p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a     L e n g t h   2   *   m a x ( s r c A L e n ,   s r c B L e n )   -   1 .  
       * /  
     v o i d   a r m _ c o r r e l a t e _ q 7 (  
     q 7 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     q 7 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     q 7 _ t   *   p D s t ) ;  
  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   f l o a t i n g - p o i n t   s p a r s e   F I R   f i l t e r .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 1 6 _ t   n u m T a p s ;                           / * * <   n u m b e r   o f   c o e f f i c i e n t s   i n   t h e   f i l t e r .   * /  
         u i n t 1 6 _ t   s t a t e I n d e x ;                     / * * <   s t a t e   b u f f e r   i n d e x .     P o i n t s   t o   t h e   o l d e s t   s a m p l e   i n   t h e   s t a t e   b u f f e r .   * /  
         f l o a t 3 2 _ t   * p S t a t e ;                         / * * <   p o i n t s   t o   t h e   s t a t e   b u f f e r   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   m a x D e l a y + b l o c k S i z e - 1 .   * /  
         f l o a t 3 2 _ t   * p C o e f f s ;                       / * * <   p o i n t s   t o   t h e   c o e f f i c i e n t   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   n u m T a p s . * /  
         u i n t 1 6 _ t   m a x D e l a y ;                         / * * <   m a x i m u m   o f f s e t   s p e c i f i e d   b y   t h e   p T a p D e l a y   a r r a y .   * /  
         i n t 3 2 _ t   * p T a p D e l a y ;                       / * * <   p o i n t s   t o   t h e   a r r a y   o f   d e l a y   v a l u e s .     T h e   a r r a y   i s   o f   l e n g t h   n u m T a p s .   * /  
     }   a r m _ f i r _ s p a r s e _ i n s t a n c e _ f 3 2 ;  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   Q 3 1   s p a r s e   F I R   f i l t e r .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 1 6 _ t   n u m T a p s ;                           / * * <   n u m b e r   o f   c o e f f i c i e n t s   i n   t h e   f i l t e r .   * /  
         u i n t 1 6 _ t   s t a t e I n d e x ;                     / * * <   s t a t e   b u f f e r   i n d e x .     P o i n t s   t o   t h e   o l d e s t   s a m p l e   i n   t h e   s t a t e   b u f f e r .   * /  
         q 3 1 _ t   * p S t a t e ;                                 / * * <   p o i n t s   t o   t h e   s t a t e   b u f f e r   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   m a x D e l a y + b l o c k S i z e - 1 .   * /  
         q 3 1 _ t   * p C o e f f s ;                               / * * <   p o i n t s   t o   t h e   c o e f f i c i e n t   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   n u m T a p s . * /  
         u i n t 1 6 _ t   m a x D e l a y ;                         / * * <   m a x i m u m   o f f s e t   s p e c i f i e d   b y   t h e   p T a p D e l a y   a r r a y .   * /  
         i n t 3 2 _ t   * p T a p D e l a y ;                       / * * <   p o i n t s   t o   t h e   a r r a y   o f   d e l a y   v a l u e s .     T h e   a r r a y   i s   o f   l e n g t h   n u m T a p s .   * /  
     }   a r m _ f i r _ s p a r s e _ i n s t a n c e _ q 3 1 ;  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   Q 1 5   s p a r s e   F I R   f i l t e r .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 1 6 _ t   n u m T a p s ;                           / * * <   n u m b e r   o f   c o e f f i c i e n t s   i n   t h e   f i l t e r .   * /  
         u i n t 1 6 _ t   s t a t e I n d e x ;                     / * * <   s t a t e   b u f f e r   i n d e x .     P o i n t s   t o   t h e   o l d e s t   s a m p l e   i n   t h e   s t a t e   b u f f e r .   * /  
         q 1 5 _ t   * p S t a t e ;                                 / * * <   p o i n t s   t o   t h e   s t a t e   b u f f e r   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   m a x D e l a y + b l o c k S i z e - 1 .   * /  
         q 1 5 _ t   * p C o e f f s ;                               / * * <   p o i n t s   t o   t h e   c o e f f i c i e n t   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   n u m T a p s . * /  
         u i n t 1 6 _ t   m a x D e l a y ;                         / * * <   m a x i m u m   o f f s e t   s p e c i f i e d   b y   t h e   p T a p D e l a y   a r r a y .   * /  
         i n t 3 2 _ t   * p T a p D e l a y ;                       / * * <   p o i n t s   t o   t h e   a r r a y   o f   d e l a y   v a l u e s .     T h e   a r r a y   i s   o f   l e n g t h   n u m T a p s .   * /  
     }   a r m _ f i r _ s p a r s e _ i n s t a n c e _ q 1 5 ;  
  
     / * *  
       *   @ b r i e f   I n s t a n c e   s t r u c t u r e   f o r   t h e   Q 7   s p a r s e   F I R   f i l t e r .  
       * /  
     t y p e d e f   s t r u c t  
     {  
         u i n t 1 6 _ t   n u m T a p s ;                           / * * <   n u m b e r   o f   c o e f f i c i e n t s   i n   t h e   f i l t e r .   * /  
         u i n t 1 6 _ t   s t a t e I n d e x ;                     / * * <   s t a t e   b u f f e r   i n d e x .     P o i n t s   t o   t h e   o l d e s t   s a m p l e   i n   t h e   s t a t e   b u f f e r .   * /  
         q 7 _ t   * p S t a t e ;                                   / * * <   p o i n t s   t o   t h e   s t a t e   b u f f e r   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   m a x D e l a y + b l o c k S i z e - 1 .   * /  
         q 7 _ t   * p C o e f f s ;                                 / * * <   p o i n t s   t o   t h e   c o e f f i c i e n t   a r r a y .   T h e   a r r a y   i s   o f   l e n g t h   n u m T a p s . * /  
         u i n t 1 6 _ t   m a x D e l a y ;                         / * * <   m a x i m u m   o f f s e t   s p e c i f i e d   b y   t h e   p T a p D e l a y   a r r a y .   * /  
         i n t 3 2 _ t   * p T a p D e l a y ;                       / * * <   p o i n t s   t o   t h e   a r r a y   o f   d e l a y   v a l u e s .     T h e   a r r a y   i s   o f   l e n g t h   n u m T a p s .   * /  
     }   a r m _ f i r _ s p a r s e _ i n s t a n c e _ q 7 ;  
  
  
     / * *  
       *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   f l o a t i n g - p o i n t   s p a r s e   F I R   f i l t e r .  
       *   @ p a r a m [ i n ]     S                       p o i n t s   t o   a n   i n s t a n c e   o f   t h e   f l o a t i n g - p o i n t   s p a r s e   F I R   s t r u c t u r e .  
       *   @ p a r a m [ i n ]     p S r c                 p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
       *   @ p a r a m [ o u t ]   p D s t                 p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a  
       *   @ p a r a m [ i n ]     p S c r a t c h I n     p o i n t s   t o   a   t e m p o r a r y   b u f f e r   o f   s i z e   b l o c k S i z e .  
       *   @ p a r a m [ i n ]     b l o c k S i z e       n u m b e r   o f   i n p u t   s a m p l e s   t o   p r o c e s s   p e r   c a l l .  
       * /  
     v o i d   a r m _ f i r _ s p a r s e _ f 3 2 (  
     a r m _ f i r _ s p a r s e _ i n s t a n c e _ f 3 2   *   S ,  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     f l o a t 3 2 _ t   *   p S c r a t c h I n ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f     I n i t i a l i z a t i o n   f u n c t i o n   f o r   t h e   f l o a t i n g - p o i n t   s p a r s e   F I R   f i l t e r .  
       *   @ p a r a m [ i n , o u t ]   S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   f l o a t i n g - p o i n t   s p a r s e   F I R   s t r u c t u r e .  
       *   @ p a r a m [ i n ]           n u m T a p s         n u m b e r   o f   n o n z e r o   c o e f f i c i e n t s   i n   t h e   f i l t e r .  
       *   @ p a r a m [ i n ]           p C o e f f s         p o i n t s   t o   t h e   a r r a y   o f   f i l t e r   c o e f f i c i e n t s .  
       *   @ p a r a m [ i n ]           p S t a t e           p o i n t s   t o   t h e   s t a t e   b u f f e r .  
       *   @ p a r a m [ i n ]           p T a p D e l a y     p o i n t s   t o   t h e   a r r a y   o f   o f f s e t   t i m e s .  
       *   @ p a r a m [ i n ]           m a x D e l a y       m a x i m u m   o f f s e t   t i m e   s u p p o r t e d .  
       *   @ p a r a m [ i n ]           b l o c k S i z e     n u m b e r   o f   s a m p l e s   t h a t   w i l l   b e   p r o c e s s e d   p e r   b l o c k .  
       * /  
     v o i d   a r m _ f i r _ s p a r s e _ i n i t _ f 3 2 (  
     a r m _ f i r _ s p a r s e _ i n s t a n c e _ f 3 2   *   S ,  
     u i n t 1 6 _ t   n u m T a p s ,  
     f l o a t 3 2 _ t   *   p C o e f f s ,  
     f l o a t 3 2 _ t   *   p S t a t e ,  
     i n t 3 2 _ t   *   p T a p D e l a y ,  
     u i n t 1 6 _ t   m a x D e l a y ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   Q 3 1   s p a r s e   F I R   f i l t e r .  
       *   @ p a r a m [ i n ]     S                       p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 3 1   s p a r s e   F I R   s t r u c t u r e .  
       *   @ p a r a m [ i n ]     p S r c                 p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
       *   @ p a r a m [ o u t ]   p D s t                 p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a  
       *   @ p a r a m [ i n ]     p S c r a t c h I n     p o i n t s   t o   a   t e m p o r a r y   b u f f e r   o f   s i z e   b l o c k S i z e .  
       *   @ p a r a m [ i n ]     b l o c k S i z e       n u m b e r   o f   i n p u t   s a m p l e s   t o   p r o c e s s   p e r   c a l l .  
       * /  
     v o i d   a r m _ f i r _ s p a r s e _ q 3 1 (  
     a r m _ f i r _ s p a r s e _ i n s t a n c e _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     q 3 1 _ t   *   p S c r a t c h I n ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f     I n i t i a l i z a t i o n   f u n c t i o n   f o r   t h e   Q 3 1   s p a r s e   F I R   f i l t e r .  
       *   @ p a r a m [ i n , o u t ]   S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 3 1   s p a r s e   F I R   s t r u c t u r e .  
       *   @ p a r a m [ i n ]           n u m T a p s         n u m b e r   o f   n o n z e r o   c o e f f i c i e n t s   i n   t h e   f i l t e r .  
       *   @ p a r a m [ i n ]           p C o e f f s         p o i n t s   t o   t h e   a r r a y   o f   f i l t e r   c o e f f i c i e n t s .  
       *   @ p a r a m [ i n ]           p S t a t e           p o i n t s   t o   t h e   s t a t e   b u f f e r .  
       *   @ p a r a m [ i n ]           p T a p D e l a y     p o i n t s   t o   t h e   a r r a y   o f   o f f s e t   t i m e s .  
       *   @ p a r a m [ i n ]           m a x D e l a y       m a x i m u m   o f f s e t   t i m e   s u p p o r t e d .  
       *   @ p a r a m [ i n ]           b l o c k S i z e     n u m b e r   o f   s a m p l e s   t h a t   w i l l   b e   p r o c e s s e d   p e r   b l o c k .  
       * /  
     v o i d   a r m _ f i r _ s p a r s e _ i n i t _ q 3 1 (  
     a r m _ f i r _ s p a r s e _ i n s t a n c e _ q 3 1   *   S ,  
     u i n t 1 6 _ t   n u m T a p s ,  
     q 3 1 _ t   *   p C o e f f s ,  
     q 3 1 _ t   *   p S t a t e ,  
     i n t 3 2 _ t   *   p T a p D e l a y ,  
     u i n t 1 6 _ t   m a x D e l a y ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   Q 1 5   s p a r s e   F I R   f i l t e r .  
       *   @ p a r a m [ i n ]     S                         p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 1 5   s p a r s e   F I R   s t r u c t u r e .  
       *   @ p a r a m [ i n ]     p S r c                   p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
       *   @ p a r a m [ o u t ]   p D s t                   p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a  
       *   @ p a r a m [ i n ]     p S c r a t c h I n       p o i n t s   t o   a   t e m p o r a r y   b u f f e r   o f   s i z e   b l o c k S i z e .  
       *   @ p a r a m [ i n ]     p S c r a t c h O u t     p o i n t s   t o   a   t e m p o r a r y   b u f f e r   o f   s i z e   b l o c k S i z e .  
       *   @ p a r a m [ i n ]     b l o c k S i z e         n u m b e r   o f   i n p u t   s a m p l e s   t o   p r o c e s s   p e r   c a l l .  
       * /  
     v o i d   a r m _ f i r _ s p a r s e _ q 1 5 (  
     a r m _ f i r _ s p a r s e _ i n s t a n c e _ q 1 5   *   S ,  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     q 1 5 _ t   *   p S c r a t c h I n ,  
     q 3 1 _ t   *   p S c r a t c h O u t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f     I n i t i a l i z a t i o n   f u n c t i o n   f o r   t h e   Q 1 5   s p a r s e   F I R   f i l t e r .  
       *   @ p a r a m [ i n , o u t ]   S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 1 5   s p a r s e   F I R   s t r u c t u r e .  
       *   @ p a r a m [ i n ]           n u m T a p s         n u m b e r   o f   n o n z e r o   c o e f f i c i e n t s   i n   t h e   f i l t e r .  
       *   @ p a r a m [ i n ]           p C o e f f s         p o i n t s   t o   t h e   a r r a y   o f   f i l t e r   c o e f f i c i e n t s .  
       *   @ p a r a m [ i n ]           p S t a t e           p o i n t s   t o   t h e   s t a t e   b u f f e r .  
       *   @ p a r a m [ i n ]           p T a p D e l a y     p o i n t s   t o   t h e   a r r a y   o f   o f f s e t   t i m e s .  
       *   @ p a r a m [ i n ]           m a x D e l a y       m a x i m u m   o f f s e t   t i m e   s u p p o r t e d .  
       *   @ p a r a m [ i n ]           b l o c k S i z e     n u m b e r   o f   s a m p l e s   t h a t   w i l l   b e   p r o c e s s e d   p e r   b l o c k .  
       * /  
     v o i d   a r m _ f i r _ s p a r s e _ i n i t _ q 1 5 (  
     a r m _ f i r _ s p a r s e _ i n s t a n c e _ q 1 5   *   S ,  
     u i n t 1 6 _ t   n u m T a p s ,  
     q 1 5 _ t   *   p C o e f f s ,  
     q 1 5 _ t   *   p S t a t e ,  
     i n t 3 2 _ t   *   p T a p D e l a y ,  
     u i n t 1 6 _ t   m a x D e l a y ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   Q 7   s p a r s e   F I R   f i l t e r .  
       *   @ p a r a m [ i n ]     S                         p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 7   s p a r s e   F I R   s t r u c t u r e .  
       *   @ p a r a m [ i n ]     p S r c                   p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
       *   @ p a r a m [ o u t ]   p D s t                   p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a  
       *   @ p a r a m [ i n ]     p S c r a t c h I n       p o i n t s   t o   a   t e m p o r a r y   b u f f e r   o f   s i z e   b l o c k S i z e .  
       *   @ p a r a m [ i n ]     p S c r a t c h O u t     p o i n t s   t o   a   t e m p o r a r y   b u f f e r   o f   s i z e   b l o c k S i z e .  
       *   @ p a r a m [ i n ]     b l o c k S i z e         n u m b e r   o f   i n p u t   s a m p l e s   t o   p r o c e s s   p e r   c a l l .  
       * /  
     v o i d   a r m _ f i r _ s p a r s e _ q 7 (  
     a r m _ f i r _ s p a r s e _ i n s t a n c e _ q 7   *   S ,  
     q 7 _ t   *   p S r c ,  
     q 7 _ t   *   p D s t ,  
     q 7 _ t   *   p S c r a t c h I n ,  
     q 3 1 _ t   *   p S c r a t c h O u t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f     I n i t i a l i z a t i o n   f u n c t i o n   f o r   t h e   Q 7   s p a r s e   F I R   f i l t e r .  
       *   @ p a r a m [ i n , o u t ]   S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 7   s p a r s e   F I R   s t r u c t u r e .  
       *   @ p a r a m [ i n ]           n u m T a p s         n u m b e r   o f   n o n z e r o   c o e f f i c i e n t s   i n   t h e   f i l t e r .  
       *   @ p a r a m [ i n ]           p C o e f f s         p o i n t s   t o   t h e   a r r a y   o f   f i l t e r   c o e f f i c i e n t s .  
       *   @ p a r a m [ i n ]           p S t a t e           p o i n t s   t o   t h e   s t a t e   b u f f e r .  
       *   @ p a r a m [ i n ]           p T a p D e l a y     p o i n t s   t o   t h e   a r r a y   o f   o f f s e t   t i m e s .  
       *   @ p a r a m [ i n ]           m a x D e l a y       m a x i m u m   o f f s e t   t i m e   s u p p o r t e d .  
       *   @ p a r a m [ i n ]           b l o c k S i z e     n u m b e r   o f   s a m p l e s   t h a t   w i l l   b e   p r o c e s s e d   p e r   b l o c k .  
       * /  
     v o i d   a r m _ f i r _ s p a r s e _ i n i t _ q 7 (  
     a r m _ f i r _ s p a r s e _ i n s t a n c e _ q 7   *   S ,  
     u i n t 1 6 _ t   n u m T a p s ,  
     q 7 _ t   *   p C o e f f s ,  
     q 7 _ t   *   p S t a t e ,  
     i n t 3 2 _ t   *   p T a p D e l a y ,  
     u i n t 1 6 _ t   m a x D e l a y ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f     F l o a t i n g - p o i n t   s i n _ c o s   f u n c t i o n .  
       *   @ p a r a m [ i n ]     t h e t a       i n p u t   v a l u e   i n   d e g r e e s  
       *   @ p a r a m [ o u t ]   p S i n V a l     p o i n t s   t o   t h e   p r o c e s s e d   s i n e   o u t p u t .  
       *   @ p a r a m [ o u t ]   p C o s V a l     p o i n t s   t o   t h e   p r o c e s s e d   c o s   o u t p u t .  
       * /  
     v o i d   a r m _ s i n _ c o s _ f 3 2 (  
     f l o a t 3 2 _ t   t h e t a ,  
     f l o a t 3 2 _ t   *   p S i n V a l ,  
     f l o a t 3 2 _ t   *   p C o s V a l ) ;  
  
  
     / * *  
       *   @ b r i e f     Q 3 1   s i n _ c o s   f u n c t i o n .  
       *   @ p a r a m [ i n ]     t h e t a         s c a l e d   i n p u t   v a l u e   i n   d e g r e e s  
       *   @ p a r a m [ o u t ]   p S i n V a l     p o i n t s   t o   t h e   p r o c e s s e d   s i n e   o u t p u t .  
       *   @ p a r a m [ o u t ]   p C o s V a l     p o i n t s   t o   t h e   p r o c e s s e d   c o s i n e   o u t p u t .  
       * /  
     v o i d   a r m _ s i n _ c o s _ q 3 1 (  
     q 3 1 _ t   t h e t a ,  
     q 3 1 _ t   *   p S i n V a l ,  
     q 3 1 _ t   *   p C o s V a l ) ;  
  
  
     / * *  
       *   @ b r i e f     F l o a t i n g - p o i n t   c o m p l e x   c o n j u g a t e .  
       *   @ p a r a m [ i n ]     p S r c                 p o i n t s   t o   t h e   i n p u t   v e c t o r  
       *   @ p a r a m [ o u t ]   p D s t                 p o i n t s   t o   t h e   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n ]     n u m S a m p l e s     n u m b e r   o f   c o m p l e x   s a m p l e s   i n   e a c h   v e c t o r  
       * /  
     v o i d   a r m _ c m p l x _ c o n j _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   n u m S a m p l e s ) ;  
  
     / * *  
       *   @ b r i e f     Q 3 1   c o m p l e x   c o n j u g a t e .  
       *   @ p a r a m [ i n ]     p S r c                 p o i n t s   t o   t h e   i n p u t   v e c t o r  
       *   @ p a r a m [ o u t ]   p D s t                 p o i n t s   t o   t h e   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n ]     n u m S a m p l e s     n u m b e r   o f   c o m p l e x   s a m p l e s   i n   e a c h   v e c t o r  
       * /  
     v o i d   a r m _ c m p l x _ c o n j _ q 3 1 (  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   n u m S a m p l e s ) ;  
  
  
     / * *  
       *   @ b r i e f     Q 1 5   c o m p l e x   c o n j u g a t e .  
       *   @ p a r a m [ i n ]     p S r c                 p o i n t s   t o   t h e   i n p u t   v e c t o r  
       *   @ p a r a m [ o u t ]   p D s t                 p o i n t s   t o   t h e   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n ]     n u m S a m p l e s     n u m b e r   o f   c o m p l e x   s a m p l e s   i n   e a c h   v e c t o r  
       * /  
     v o i d   a r m _ c m p l x _ c o n j _ q 1 5 (  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   n u m S a m p l e s ) ;  
  
  
     / * *  
       *   @ b r i e f     F l o a t i n g - p o i n t   c o m p l e x   m a g n i t u d e   s q u a r e d  
       *   @ p a r a m [ i n ]     p S r c                 p o i n t s   t o   t h e   c o m p l e x   i n p u t   v e c t o r  
       *   @ p a r a m [ o u t ]   p D s t                 p o i n t s   t o   t h e   r e a l   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n ]     n u m S a m p l e s     n u m b e r   o f   c o m p l e x   s a m p l e s   i n   t h e   i n p u t   v e c t o r  
       * /  
     v o i d   a r m _ c m p l x _ m a g _ s q u a r e d _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   n u m S a m p l e s ) ;  
  
  
     / * *  
       *   @ b r i e f     Q 3 1   c o m p l e x   m a g n i t u d e   s q u a r e d  
       *   @ p a r a m [ i n ]     p S r c                 p o i n t s   t o   t h e   c o m p l e x   i n p u t   v e c t o r  
       *   @ p a r a m [ o u t ]   p D s t                 p o i n t s   t o   t h e   r e a l   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n ]     n u m S a m p l e s     n u m b e r   o f   c o m p l e x   s a m p l e s   i n   t h e   i n p u t   v e c t o r  
       * /  
     v o i d   a r m _ c m p l x _ m a g _ s q u a r e d _ q 3 1 (  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   n u m S a m p l e s ) ;  
  
  
     / * *  
       *   @ b r i e f     Q 1 5   c o m p l e x   m a g n i t u d e   s q u a r e d  
       *   @ p a r a m [ i n ]     p S r c                 p o i n t s   t o   t h e   c o m p l e x   i n p u t   v e c t o r  
       *   @ p a r a m [ o u t ]   p D s t                 p o i n t s   t o   t h e   r e a l   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n ]     n u m S a m p l e s     n u m b e r   o f   c o m p l e x   s a m p l e s   i n   t h e   i n p u t   v e c t o r  
       * /  
     v o i d   a r m _ c m p l x _ m a g _ s q u a r e d _ q 1 5 (  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   n u m S a m p l e s ) ;  
  
  
   / * *  
       *   @ i n g r o u p   g r o u p C o n t r o l l e r  
       * /  
  
     / * *  
       *   @ d e f g r o u p   P I D   P I D   M o t o r   C o n t r o l  
       *  
       *   A   P r o p o r t i o n a l   I n t e g r a l   D e r i v a t i v e   ( P I D )   c o n t r o l l e r   i s   a   g e n e r i c   f e e d b a c k   c o n t r o l  
       *   l o o p   m e c h a n i s m   w i d e l y   u s e d   i n   i n d u s t r i a l   c o n t r o l   s y s t e m s .  
       *   A   P I D   c o n t r o l l e r   i s   t h e   m o s t   c o m m o n l y   u s e d   t y p e   o f   f e e d b a c k   c o n t r o l l e r .  
       *  
       *   T h i s   s e t   o f   f u n c t i o n s   i m p l e m e n t s   ( P I D )   c o n t r o l l e r s  
       *   f o r   Q 1 5 ,   Q 3 1 ,   a n d   f l o a t i n g - p o i n t   d a t a   t y p e s .     T h e   f u n c t i o n s   o p e r a t e   o n   a   s i n g l e   s a m p l e  
       *   o f   d a t a   a n d   e a c h   c a l l   t o   t h e   f u n c t i o n   r e t u r n s   a   s i n g l e   p r o c e s s e d   v a l u e .  
       *   < c o d e > S < / c o d e >   p o i n t s   t o   a n   i n s t a n c e   o f   t h e   P I D   c o n t r o l   d a t a   s t r u c t u r e .     < c o d e > i n < / c o d e >  
       *   i s   t h e   i n p u t   s a m p l e   v a l u e .   T h e   f u n c t i o n s   r e t u r n   t h e   o u t p u t   v a l u e .  
       *  
       *   \ p a r   A l g o r i t h m :  
       *   < p r e >  
       *         y [ n ]   =   y [ n - 1 ]   +   A 0   *   x [ n ]   +   A 1   *   x [ n - 1 ]   +   A 2   *   x [ n - 2 ]  
       *         A 0   =   K p   +   K i   +   K d  
       *         A 1   =   ( - K p   )   -   ( 2   *   K d   )  
       *         A 2   =   K d     < / p r e >  
       *  
       *   \ p a r  
       *   w h e r e   \ c   K p   i s   p r o p o r t i o n a l   c o n s t a n t ,   \ c   K i   i s   I n t e g r a l   c o n s t a n t   a n d   \ c   K d   i s   D e r i v a t i v e   c o n s t a n t  
       *  
       *   \ p a r  
       *   \ i m a g e   h t m l   P I D . g i f   " P r o p o r t i o n a l   I n t e g r a l   D e r i v a t i v e   C o n t r o l l e r "  
       *  
       *   \ p a r  
       *   T h e   P I D   c o n t r o l l e r   c a l c u l a t e s   a n   " e r r o r "   v a l u e   a s   t h e   d i f f e r e n c e   b e t w e e n  
       *   t h e   m e a s u r e d   o u t p u t   a n d   t h e   r e f e r e n c e   i n p u t .  
       *   T h e   c o n t r o l l e r   a t t e m p t s   t o   m i n i m i z e   t h e   e r r o r   b y   a d j u s t i n g   t h e   p r o c e s s   c o n t r o l   i n p u t s .  
       *   T h e   p r o p o r t i o n a l   v a l u e   d e t e r m i n e s   t h e   r e a c t i o n   t o   t h e   c u r r e n t   e r r o r ,  
       *   t h e   i n t e g r a l   v a l u e   d e t e r m i n e s   t h e   r e a c t i o n   b a s e d   o n   t h e   s u m   o f   r e c e n t   e r r o r s ,  
       *   a n d   t h e   d e r i v a t i v e   v a l u e   d e t e r m i n e s   t h e   r e a c t i o n   b a s e d   o n   t h e   r a t e   a t   w h i c h   t h e   e r r o r   h a s   b e e n   c h a n g i n g .  
       *  
       *   \ p a r   I n s t a n c e   S t r u c t u r e  
       *   T h e   G a i n s   A 0 ,   A 1 ,   A 2   a n d   s t a t e   v a r i a b l e s   f o r   a   P I D   c o n t r o l l e r   a r e   s t o r e d   t o g e t h e r   i n   a n   i n s t a n c e   d a t a   s t r u c t u r e .  
       *   A   s e p a r a t e   i n s t a n c e   s t r u c t u r e   m u s t   b e   d e f i n e d   f o r   e a c h   P I D   C o n t r o l l e r .  
       *   T h e r e   a r e   s e p a r a t e   i n s t a n c e   s t r u c t u r e   d e c l a r a t i o n s   f o r   e a c h   o f   t h e   3   s u p p o r t e d   d a t a   t y p e s .  
       *  
       *   \ p a r   R e s e t   F u n c t i o n s  
       *   T h e r e   i s   a l s o   a n   a s s o c i a t e d   r e s e t   f u n c t i o n   f o r   e a c h   d a t a   t y p e   w h i c h   c l e a r s   t h e   s t a t e   a r r a y .  
       *  
       *   \ p a r   I n i t i a l i z a t i o n   F u n c t i o n s  
       *   T h e r e   i s   a l s o   a n   a s s o c i a t e d   i n i t i a l i z a t i o n   f u n c t i o n   f o r   e a c h   d a t a   t y p e .  
       *   T h e   i n i t i a l i z a t i o n   f u n c t i o n   p e r f o r m s   t h e   f o l l o w i n g   o p e r a t i o n s :  
       *   -   I n i t i a l i z e s   t h e   G a i n s   A 0 ,   A 1 ,   A 2   f r o m   K p , K i ,   K d   g a i n s .  
       *   -   Z e r o s   o u t   t h e   v a l u e s   i n   t h e   s t a t e   b u f f e r .  
       *  
       *   \ p a r  
       *   I n s t a n c e   s t r u c t u r e   c a n n o t   b e   p l a c e d   i n t o   a   c o n s t   d a t a   s e c t i o n   a n d   i t   i s   r e c o m m e n d e d   t o   u s e   t h e   i n i t i a l i z a t i o n   f u n c t i o n .  
       *  
       *   \ p a r   F i x e d - P o i n t   B e h a v i o r  
       *   C a r e   m u s t   b e   t a k e n   w h e n   u s i n g   t h e   f i x e d - p o i n t   v e r s i o n s   o f   t h e   P I D   C o n t r o l l e r   f u n c t i o n s .  
       *   I n   p a r t i c u l a r ,   t h e   o v e r f l o w   a n d   s a t u r a t i o n   b e h a v i o r   o f   t h e   a c c u m u l a t o r   u s e d   i n   e a c h   f u n c t i o n   m u s t   b e   c o n s i d e r e d .  
       *   R e f e r   t o   t h e   f u n c t i o n   s p e c i f i c   d o c u m e n t a t i o n   b e l o w   f o r   u s a g e   g u i d e l i n e s .  
       * /  
  
     / * *  
       *   @ a d d t o g r o u p   P I D  
       *   @ {  
       * /  
  
     / * *  
       *   @ b r i e f     P r o c e s s   f u n c t i o n   f o r   t h e   f l o a t i n g - p o i n t   P I D   C o n t r o l .  
       *   @ p a r a m [ i n , o u t ]   S       i s   a n   i n s t a n c e   o f   t h e   f l o a t i n g - p o i n t   P I D   C o n t r o l   s t r u c t u r e  
       *   @ p a r a m [ i n ]           i n     i n p u t   s a m p l e   t o   p r o c e s s  
       *   @ r e t u r n   o u t   p r o c e s s e d   o u t p u t   s a m p l e .  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   f l o a t 3 2 _ t   a r m _ p i d _ f 3 2 (  
     a r m _ p i d _ i n s t a n c e _ f 3 2   *   S ,  
     f l o a t 3 2 _ t   i n )  
     {  
         f l o a t 3 2 _ t   o u t ;  
  
         / *   y [ n ]   =   y [ n - 1 ]   +   A 0   *   x [ n ]   +   A 1   *   x [ n - 1 ]   +   A 2   *   x [ n - 2 ]     * /  
         o u t   =   ( S - > A 0   *   i n )   +  
             ( S - > A 1   *   S - > s t a t e [ 0 ] )   +   ( S - > A 2   *   S - > s t a t e [ 1 ] )   +   ( S - > s t a t e [ 2 ] ) ;  
  
         / *   U p d a t e   s t a t e   * /  
         S - > s t a t e [ 1 ]   =   S - > s t a t e [ 0 ] ;  
         S - > s t a t e [ 0 ]   =   i n ;  
         S - > s t a t e [ 2 ]   =   o u t ;  
  
         / *   r e t u r n   t o   a p p l i c a t i o n   * /  
         r e t u r n   ( o u t ) ;  
  
     }  
  
     / * *  
       *   @ b r i e f     P r o c e s s   f u n c t i o n   f o r   t h e   Q 3 1   P I D   C o n t r o l .  
       *   @ p a r a m [ i n , o u t ]   S     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 3 1   P I D   C o n t r o l   s t r u c t u r e  
       *   @ p a r a m [ i n ]           i n     i n p u t   s a m p l e   t o   p r o c e s s  
       *   @ r e t u r n   o u t   p r o c e s s e d   o u t p u t   s a m p l e .  
       *  
       *   < b > S c a l i n g   a n d   O v e r f l o w   B e h a v i o r : < / b >  
       *   \ p a r  
       *   T h e   f u n c t i o n   i s   i m p l e m e n t e d   u s i n g   a n   i n t e r n a l   6 4 - b i t   a c c u m u l a t o r .  
       *   T h e   a c c u m u l a t o r   h a s   a   2 . 6 2   f o r m a t   a n d   m a i n t a i n s   f u l l   p r e c i s i o n   o f   t h e   i n t e r m e d i a t e   m u l t i p l i c a t i o n   r e s u l t s   b u t   p r o v i d e s   o n l y   a   s i n g l e   g u a r d   b i t .  
       *   T h u s ,   i f   t h e   a c c u m u l a t o r   r e s u l t   o v e r f l o w s   i t   w r a p s   a r o u n d   r a t h e r   t h a n   c l i p .  
       *   I n   o r d e r   t o   a v o i d   o v e r f l o w s   c o m p l e t e l y   t h e   i n p u t   s i g n a l   m u s t   b e   s c a l e d   d o w n   b y   2   b i t s   a s   t h e r e   a r e   f o u r   a d d i t i o n s .  
       *   A f t e r   a l l   m u l t i p l y - a c c u m u l a t e s   a r e   p e r f o r m e d ,   t h e   2 . 6 2   a c c u m u l a t o r   i s   t r u n c a t e d   t o   1 . 3 2   f o r m a t   a n d   t h e n   s a t u r a t e d   t o   1 . 3 1   f o r m a t .  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   q 3 1 _ t   a r m _ p i d _ q 3 1 (  
     a r m _ p i d _ i n s t a n c e _ q 3 1   *   S ,  
     q 3 1 _ t   i n )  
     {  
         q 6 3 _ t   a c c ;  
         q 3 1 _ t   o u t ;  
  
         / *   a c c   =   A 0   *   x [ n ]     * /  
         a c c   =   ( q 6 3 _ t )   S - > A 0   *   i n ;  
  
         / *   a c c   + =   A 1   *   x [ n - 1 ]   * /  
         a c c   + =   ( q 6 3 _ t )   S - > A 1   *   S - > s t a t e [ 0 ] ;  
  
         / *   a c c   + =   A 2   *   x [ n - 2 ]     * /  
         a c c   + =   ( q 6 3 _ t )   S - > A 2   *   S - > s t a t e [ 1 ] ;  
  
         / *   c o n v e r t   o u t p u t   t o   1 . 3 1   f o r m a t   t o   a d d   y [ n - 1 ]   * /  
         o u t   =   ( q 3 1 _ t )   ( a c c   > >   3 1 U ) ;  
  
         / *   o u t   + =   y [ n - 1 ]   * /  
         o u t   + =   S - > s t a t e [ 2 ] ;  
  
         / *   U p d a t e   s t a t e   * /  
         S - > s t a t e [ 1 ]   =   S - > s t a t e [ 0 ] ;  
         S - > s t a t e [ 0 ]   =   i n ;  
         S - > s t a t e [ 2 ]   =   o u t ;  
  
         / *   r e t u r n   t o   a p p l i c a t i o n   * /  
         r e t u r n   ( o u t ) ;  
     }  
  
  
     / * *  
       *   @ b r i e f     P r o c e s s   f u n c t i o n   f o r   t h e   Q 1 5   P I D   C o n t r o l .  
       *   @ p a r a m [ i n , o u t ]   S       p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 1 5   P I D   C o n t r o l   s t r u c t u r e  
       *   @ p a r a m [ i n ]           i n     i n p u t   s a m p l e   t o   p r o c e s s  
       *   @ r e t u r n   o u t   p r o c e s s e d   o u t p u t   s a m p l e .  
       *  
       *   < b > S c a l i n g   a n d   O v e r f l o w   B e h a v i o r : < / b >  
       *   \ p a r  
       *   T h e   f u n c t i o n   i s   i m p l e m e n t e d   u s i n g   a   6 4 - b i t   i n t e r n a l   a c c u m u l a t o r .  
       *   B o t h   G a i n s   a n d   s t a t e   v a r i a b l e s   a r e   r e p r e s e n t e d   i n   1 . 1 5   f o r m a t   a n d   m u l t i p l i c a t i o n s   y i e l d   a   2 . 3 0   r e s u l t .  
       *   T h e   2 . 3 0   i n t e r m e d i a t e   r e s u l t s   a r e   a c c u m u l a t e d   i n   a   6 4 - b i t   a c c u m u l a t o r   i n   3 4 . 3 0   f o r m a t .  
       *   T h e r e   i s   n o   r i s k   o f   i n t e r n a l   o v e r f l o w   w i t h   t h i s   a p p r o a c h   a n d   t h e   f u l l   p r e c i s i o n   o f   i n t e r m e d i a t e   m u l t i p l i c a t i o n s   i s   p r e s e r v e d .  
       *   A f t e r   a l l   a d d i t i o n s   h a v e   b e e n   p e r f o r m e d ,   t h e   a c c u m u l a t o r   i s   t r u n c a t e d   t o   3 4 . 1 5   f o r m a t   b y   d i s c a r d i n g   l o w   1 5   b i t s .  
       *   L a s t l y ,   t h e   a c c u m u l a t o r   i s   s a t u r a t e d   t o   y i e l d   a   r e s u l t   i n   1 . 1 5   f o r m a t .  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   q 1 5 _ t   a r m _ p i d _ q 1 5 (  
     a r m _ p i d _ i n s t a n c e _ q 1 5   *   S ,  
     q 1 5 _ t   i n )  
     {  
         q 6 3 _ t   a c c ;  
         q 1 5 _ t   o u t ;  
  
 # i f   d e f i n e d   ( A R M _ M A T H _ D S P )  
         _ _ S I M D 3 2 _ T Y P E   * v s t a t e ;  
  
         / *   I m p l e m e n t a t i o n   o f   P I D   c o n t r o l l e r   * /  
  
         / *   a c c   =   A 0   *   x [ n ]     * /  
         a c c   =   ( q 3 1 _ t )   _ _ S M U A D ( ( u i n t 3 2 _ t ) S - > A 0 ,   ( u i n t 3 2 _ t ) i n ) ;  
  
         / *   a c c   + =   A 1   *   x [ n - 1 ]   +   A 2   *   x [ n - 2 ]     * /  
         v s t a t e   =   _ _ S I M D 3 2 _ C O N S T ( S - > s t a t e ) ;  
         a c c   =   ( q 6 3 _ t ) _ _ S M L A L D ( ( u i n t 3 2 _ t ) S - > A 1 ,   ( u i n t 3 2 _ t ) * v s t a t e ,   ( u i n t 6 4 _ t ) a c c ) ;  
 # e l s e  
         / *   a c c   =   A 0   *   x [ n ]     * /  
         a c c   =   ( ( q 3 1 _ t )   S - > A 0 )   *   i n ;  
  
         / *   a c c   + =   A 1   *   x [ n - 1 ]   +   A 2   *   x [ n - 2 ]     * /  
         a c c   + =   ( q 3 1 _ t )   S - > A 1   *   S - > s t a t e [ 0 ] ;  
         a c c   + =   ( q 3 1 _ t )   S - > A 2   *   S - > s t a t e [ 1 ] ;  
 # e n d i f  
  
         / *   a c c   + =   y [ n - 1 ]   * /  
         a c c   + =   ( q 3 1 _ t )   S - > s t a t e [ 2 ]   < <   1 5 ;  
  
         / *   s a t u r a t e   t h e   o u t p u t   * /  
         o u t   =   ( q 1 5 _ t )   ( _ _ S S A T ( ( a c c   > >   1 5 ) ,   1 6 ) ) ;  
  
         / *   U p d a t e   s t a t e   * /  
         S - > s t a t e [ 1 ]   =   S - > s t a t e [ 0 ] ;  
         S - > s t a t e [ 0 ]   =   i n ;  
         S - > s t a t e [ 2 ]   =   o u t ;  
  
         / *   r e t u r n   t o   a p p l i c a t i o n   * /  
         r e t u r n   ( o u t ) ;  
     }  
  
     / * *  
       *   @ }   e n d   o f   P I D   g r o u p  
       * /  
  
  
     / * *  
       *   @ b r i e f   F l o a t i n g - p o i n t   m a t r i x   i n v e r s e .  
       *   @ p a r a m [ i n ]     s r c       p o i n t s   t o   t h e   i n s t a n c e   o f   t h e   i n p u t   f l o a t i n g - p o i n t   m a t r i x   s t r u c t u r e .  
       *   @ p a r a m [ o u t ]   d s t       p o i n t s   t o   t h e   i n s t a n c e   o f   t h e   o u t p u t   f l o a t i n g - p o i n t   m a t r i x   s t r u c t u r e .  
       *   @ r e t u r n   T h e   f u n c t i o n   r e t u r n s   A R M _ M A T H _ S I Z E _ M I S M A T C H ,   i f   t h e   d i m e n s i o n s   d o   n o t   m a t c h .  
       *   I f   t h e   i n p u t   m a t r i x   i s   s i n g u l a r   ( d o e s   n o t   h a v e   a n   i n v e r s e ) ,   t h e n   t h e   a l g o r i t h m   t e r m i n a t e s   a n d   r e t u r n s   e r r o r   s t a t u s   A R M _ M A T H _ S I N G U L A R .  
       * /  
     a r m _ s t a t u s   a r m _ m a t _ i n v e r s e _ f 3 2 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   s r c ,  
     a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   d s t ) ;  
  
  
     / * *  
       *   @ b r i e f   F l o a t i n g - p o i n t   m a t r i x   i n v e r s e .  
       *   @ p a r a m [ i n ]     s r c       p o i n t s   t o   t h e   i n s t a n c e   o f   t h e   i n p u t   f l o a t i n g - p o i n t   m a t r i x   s t r u c t u r e .  
       *   @ p a r a m [ o u t ]   d s t       p o i n t s   t o   t h e   i n s t a n c e   o f   t h e   o u t p u t   f l o a t i n g - p o i n t   m a t r i x   s t r u c t u r e .  
       *   @ r e t u r n   T h e   f u n c t i o n   r e t u r n s   A R M _ M A T H _ S I Z E _ M I S M A T C H ,   i f   t h e   d i m e n s i o n s   d o   n o t   m a t c h .  
       *   I f   t h e   i n p u t   m a t r i x   i s   s i n g u l a r   ( d o e s   n o t   h a v e   a n   i n v e r s e ) ,   t h e n   t h e   a l g o r i t h m   t e r m i n a t e s   a n d   r e t u r n s   e r r o r   s t a t u s   A R M _ M A T H _ S I N G U L A R .  
       * /  
     a r m _ s t a t u s   a r m _ m a t _ i n v e r s e _ f 6 4 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ f 6 4   *   s r c ,  
     a r m _ m a t r i x _ i n s t a n c e _ f 6 4   *   d s t ) ;  
  
  
  
     / * *  
       *   @ i n g r o u p   g r o u p C o n t r o l l e r  
       * /  
  
     / * *  
       *   @ d e f g r o u p   c l a r k e   V e c t o r   C l a r k e   T r a n s f o r m  
       *   F o r w a r d   C l a r k e   t r a n s f o r m   c o n v e r t s   t h e   i n s t a n t a n e o u s   s t a t o r   p h a s e s   i n t o   a   t w o - c o o r d i n a t e   t i m e   i n v a r i a n t   v e c t o r .  
       *   G e n e r a l l y   t h e   C l a r k e   t r a n s f o r m   u s e s   t h r e e - p h a s e   c u r r e n t s   < c o d e > I a ,   I b   a n d   I c < / c o d e >   t o   c a l c u l a t e   c u r r e n t s  
       *   i n   t h e   t w o - p h a s e   o r t h o g o n a l   s t a t o r   a x i s   < c o d e > I a l p h a < / c o d e >   a n d   < c o d e > I b e t a < / c o d e > .  
       *   W h e n   < c o d e > I a l p h a < / c o d e >   i s   s u p e r p o s e d   w i t h   < c o d e > I a < / c o d e >   a s   s h o w n   i n   t h e   f i g u r e   b e l o w  
       *   \ i m a g e   h t m l   c l a r k e . g i f   S t a t o r   c u r r e n t   s p a c e   v e c t o r   a n d   i t s   c o m p o n e n t s   i n   ( a , b ) .  
       *   a n d   < c o d e > I a   +   I b   +   I c   =   0 < / c o d e > ,   i n   t h i s   c o n d i t i o n   < c o d e > I a l p h a < / c o d e >   a n d   < c o d e > I b e t a < / c o d e >  
       *   c a n   b e   c a l c u l a t e d   u s i n g   o n l y   < c o d e > I a < / c o d e >   a n d   < c o d e > I b < / c o d e > .  
       *  
       *   T h e   f u n c t i o n   o p e r a t e s   o n   a   s i n g l e   s a m p l e   o f   d a t a   a n d   e a c h   c a l l   t o   t h e   f u n c t i o n   r e t u r n s   t h e   p r o c e s s e d   o u t p u t .  
       *   T h e   l i b r a r y   p r o v i d e s   s e p a r a t e   f u n c t i o n s   f o r   Q 3 1   a n d   f l o a t i n g - p o i n t   d a t a   t y p e s .  
       *   \ p a r   A l g o r i t h m  
       *   \ i m a g e   h t m l   c l a r k e F o r m u l a . g i f  
       *   w h e r e   < c o d e > I a < / c o d e >   a n d   < c o d e > I b < / c o d e >   a r e   t h e   i n s t a n t a n e o u s   s t a t o r   p h a s e s   a n d  
       *   < c o d e > p I a l p h a < / c o d e >   a n d   < c o d e > p I b e t a < / c o d e >   a r e   t h e   t w o   c o o r d i n a t e s   o f   t i m e   i n v a r i a n t   v e c t o r .  
       *   \ p a r   F i x e d - P o i n t   B e h a v i o r  
       *   C a r e   m u s t   b e   t a k e n   w h e n   u s i n g   t h e   Q 3 1   v e r s i o n   o f   t h e   C l a r k e   t r a n s f o r m .  
       *   I n   p a r t i c u l a r ,   t h e   o v e r f l o w   a n d   s a t u r a t i o n   b e h a v i o r   o f   t h e   a c c u m u l a t o r   u s e d   m u s t   b e   c o n s i d e r e d .  
       *   R e f e r   t o   t h e   f u n c t i o n   s p e c i f i c   d o c u m e n t a t i o n   b e l o w   f o r   u s a g e   g u i d e l i n e s .  
       * /  
  
     / * *  
       *   @ a d d t o g r o u p   c l a r k e  
       *   @ {  
       * /  
  
     / * *  
       *  
       *   @ b r i e f     F l o a t i n g - p o i n t   C l a r k e   t r a n s f o r m  
       *   @ p a r a m [ i n ]     I a               i n p u t   t h r e e - p h a s e   c o o r d i n a t e   < c o d e > a < / c o d e >  
       *   @ p a r a m [ i n ]     I b               i n p u t   t h r e e - p h a s e   c o o r d i n a t e   < c o d e > b < / c o d e >  
       *   @ p a r a m [ o u t ]   p I a l p h a     p o i n t s   t o   o u t p u t   t w o - p h a s e   o r t h o g o n a l   v e c t o r   a x i s   a l p h a  
       *   @ p a r a m [ o u t ]   p I b e t a       p o i n t s   t o   o u t p u t   t w o - p h a s e   o r t h o g o n a l   v e c t o r   a x i s   b e t a  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   v o i d   a r m _ c l a r k e _ f 3 2 (  
     f l o a t 3 2 _ t   I a ,  
     f l o a t 3 2 _ t   I b ,  
     f l o a t 3 2 _ t   *   p I a l p h a ,  
     f l o a t 3 2 _ t   *   p I b e t a )  
     {  
         / *   C a l c u l a t e   p I a l p h a   u s i n g   t h e   e q u a t i o n ,   p I a l p h a   =   I a   * /  
         * p I a l p h a   =   I a ;  
  
         / *   C a l c u l a t e   p I b e t a   u s i n g   t h e   e q u a t i o n ,   p I b e t a   =   ( 1 / s q r t ( 3 ) )   *   I a   +   ( 2 / s q r t ( 3 ) )   *   I b   * /  
         * p I b e t a   =   ( ( f l o a t 3 2 _ t )   0 . 5 7 7 3 5 0 2 6 9 1 9   *   I a   +   ( f l o a t 3 2 _ t )   1 . 1 5 4 7 0 0 5 3 8 3 8   *   I b ) ;  
     }  
  
  
     / * *  
       *   @ b r i e f     C l a r k e   t r a n s f o r m   f o r   Q 3 1   v e r s i o n  
       *   @ p a r a m [ i n ]     I a               i n p u t   t h r e e - p h a s e   c o o r d i n a t e   < c o d e > a < / c o d e >  
       *   @ p a r a m [ i n ]     I b               i n p u t   t h r e e - p h a s e   c o o r d i n a t e   < c o d e > b < / c o d e >  
       *   @ p a r a m [ o u t ]   p I a l p h a     p o i n t s   t o   o u t p u t   t w o - p h a s e   o r t h o g o n a l   v e c t o r   a x i s   a l p h a  
       *   @ p a r a m [ o u t ]   p I b e t a       p o i n t s   t o   o u t p u t   t w o - p h a s e   o r t h o g o n a l   v e c t o r   a x i s   b e t a  
       *  
       *   < b > S c a l i n g   a n d   O v e r f l o w   B e h a v i o r : < / b >  
       *   \ p a r  
       *   T h e   f u n c t i o n   i s   i m p l e m e n t e d   u s i n g   a n   i n t e r n a l   3 2 - b i t   a c c u m u l a t o r .  
       *   T h e   a c c u m u l a t o r   m a i n t a i n s   1 . 3 1   f o r m a t   b y   t r u n c a t i n g   l o w e r   3 1   b i t s   o f   t h e   i n t e r m e d i a t e   m u l t i p l i c a t i o n   i n   2 . 6 2   f o r m a t .  
       *   T h e r e   i s   s a t u r a t i o n   o n   t h e   a d d i t i o n ,   h e n c e   t h e r e   i s   n o   r i s k   o f   o v e r f l o w .  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   v o i d   a r m _ c l a r k e _ q 3 1 (  
     q 3 1 _ t   I a ,  
     q 3 1 _ t   I b ,  
     q 3 1 _ t   *   p I a l p h a ,  
     q 3 1 _ t   *   p I b e t a )  
     {  
         q 3 1 _ t   p r o d u c t 1 ,   p r o d u c t 2 ;                                         / *   T e m p o r a r y   v a r i a b l e s   u s e d   t o   s t o r e   i n t e r m e d i a t e   r e s u l t s   * /  
  
         / *   C a l c u l a t i n g   p I a l p h a   f r o m   I a   b y   e q u a t i o n   p I a l p h a   =   I a   * /  
         * p I a l p h a   =   I a ;  
  
         / *   I n t e r m e d i a t e   p r o d u c t   i s   c a l c u l a t e d   b y   ( 1 / ( s q r t ( 3 ) )   *   I a )   * /  
         p r o d u c t 1   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   I a   *   0 x 2 4 F 3 4 E 8 B )   > >   3 0 ) ;  
  
         / *   I n t e r m e d i a t e   p r o d u c t   i s   c a l c u l a t e d   b y   ( 2 / s q r t ( 3 )   *   I b )   * /  
         p r o d u c t 2   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   I b   *   0 x 4 9 E 6 9 D 1 6 )   > >   3 0 ) ;  
  
         / *   p I b e t a   i s   c a l c u l a t e d   b y   a d d i n g   t h e   i n t e r m e d i a t e   p r o d u c t s   * /  
         * p I b e t a   =   _ _ Q A D D ( p r o d u c t 1 ,   p r o d u c t 2 ) ;  
     }  
  
     / * *  
       *   @ }   e n d   o f   c l a r k e   g r o u p  
       * /  
  
     / * *  
       *   @ b r i e f     C o n v e r t s   t h e   e l e m e n t s   o f   t h e   Q 7   v e c t o r   t o   Q 3 1   v e c t o r .  
       *   @ p a r a m [ i n ]     p S r c               i n p u t   p o i n t e r  
       *   @ p a r a m [ o u t ]   p D s t               o u t p u t   p o i n t e r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s  
       * /  
     v o i d   a r m _ q 7 _ t o _ q 3 1 (  
     q 7 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
  
     / * *  
       *   @ i n g r o u p   g r o u p C o n t r o l l e r  
       * /  
  
     / * *  
       *   @ d e f g r o u p   i n v _ c l a r k e   V e c t o r   I n v e r s e   C l a r k e   T r a n s f o r m  
       *   I n v e r s e   C l a r k e   t r a n s f o r m   c o n v e r t s   t h e   t w o - c o o r d i n a t e   t i m e   i n v a r i a n t   v e c t o r   i n t o   i n s t a n t a n e o u s   s t a t o r   p h a s e s .  
       *  
       *   T h e   f u n c t i o n   o p e r a t e s   o n   a   s i n g l e   s a m p l e   o f   d a t a   a n d   e a c h   c a l l   t o   t h e   f u n c t i o n   r e t u r n s   t h e   p r o c e s s e d   o u t p u t .  
       *   T h e   l i b r a r y   p r o v i d e s   s e p a r a t e   f u n c t i o n s   f o r   Q 3 1   a n d   f l o a t i n g - p o i n t   d a t a   t y p e s .  
       *   \ p a r   A l g o r i t h m  
       *   \ i m a g e   h t m l   c l a r k e I n v F o r m u l a . g i f  
       *   w h e r e   < c o d e > p I a < / c o d e >   a n d   < c o d e > p I b < / c o d e >   a r e   t h e   i n s t a n t a n e o u s   s t a t o r   p h a s e s   a n d  
       *   < c o d e > I a l p h a < / c o d e >   a n d   < c o d e > I b e t a < / c o d e >   a r e   t h e   t w o   c o o r d i n a t e s   o f   t i m e   i n v a r i a n t   v e c t o r .  
       *   \ p a r   F i x e d - P o i n t   B e h a v i o r  
       *   C a r e   m u s t   b e   t a k e n   w h e n   u s i n g   t h e   Q 3 1   v e r s i o n   o f   t h e   C l a r k e   t r a n s f o r m .  
       *   I n   p a r t i c u l a r ,   t h e   o v e r f l o w   a n d   s a t u r a t i o n   b e h a v i o r   o f   t h e   a c c u m u l a t o r   u s e d   m u s t   b e   c o n s i d e r e d .  
       *   R e f e r   t o   t h e   f u n c t i o n   s p e c i f i c   d o c u m e n t a t i o n   b e l o w   f o r   u s a g e   g u i d e l i n e s .  
       * /  
  
     / * *  
       *   @ a d d t o g r o u p   i n v _ c l a r k e  
       *   @ {  
       * /  
  
       / * *  
       *   @ b r i e f     F l o a t i n g - p o i n t   I n v e r s e   C l a r k e   t r a n s f o r m  
       *   @ p a r a m [ i n ]     I a l p h a     i n p u t   t w o - p h a s e   o r t h o g o n a l   v e c t o r   a x i s   a l p h a  
       *   @ p a r a m [ i n ]     I b e t a       i n p u t   t w o - p h a s e   o r t h o g o n a l   v e c t o r   a x i s   b e t a  
       *   @ p a r a m [ o u t ]   p I a           p o i n t s   t o   o u t p u t   t h r e e - p h a s e   c o o r d i n a t e   < c o d e > a < / c o d e >  
       *   @ p a r a m [ o u t ]   p I b           p o i n t s   t o   o u t p u t   t h r e e - p h a s e   c o o r d i n a t e   < c o d e > b < / c o d e >  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   v o i d   a r m _ i n v _ c l a r k e _ f 3 2 (  
     f l o a t 3 2 _ t   I a l p h a ,  
     f l o a t 3 2 _ t   I b e t a ,  
     f l o a t 3 2 _ t   *   p I a ,  
     f l o a t 3 2 _ t   *   p I b )  
     {  
         / *   C a l c u l a t i n g   p I a   f r o m   I a l p h a   b y   e q u a t i o n   p I a   =   I a l p h a   * /  
         * p I a   =   I a l p h a ;  
  
         / *   C a l c u l a t i n g   p I b   f r o m   I a l p h a   a n d   I b e t a   b y   e q u a t i o n   p I b   =   - ( 1 / 2 )   *   I a l p h a   +   ( s q r t ( 3 ) / 2 )   *   I b e t a   * /  
         * p I b   =   - 0 . 5 f   *   I a l p h a   +   0 . 8 6 6 0 2 5 4 0 3 9 f   *   I b e t a ;  
     }  
  
  
     / * *  
       *   @ b r i e f     I n v e r s e   C l a r k e   t r a n s f o r m   f o r   Q 3 1   v e r s i o n  
       *   @ p a r a m [ i n ]     I a l p h a     i n p u t   t w o - p h a s e   o r t h o g o n a l   v e c t o r   a x i s   a l p h a  
       *   @ p a r a m [ i n ]     I b e t a       i n p u t   t w o - p h a s e   o r t h o g o n a l   v e c t o r   a x i s   b e t a  
       *   @ p a r a m [ o u t ]   p I a           p o i n t s   t o   o u t p u t   t h r e e - p h a s e   c o o r d i n a t e   < c o d e > a < / c o d e >  
       *   @ p a r a m [ o u t ]   p I b           p o i n t s   t o   o u t p u t   t h r e e - p h a s e   c o o r d i n a t e   < c o d e > b < / c o d e >  
       *  
       *   < b > S c a l i n g   a n d   O v e r f l o w   B e h a v i o r : < / b >  
       *   \ p a r  
       *   T h e   f u n c t i o n   i s   i m p l e m e n t e d   u s i n g   a n   i n t e r n a l   3 2 - b i t   a c c u m u l a t o r .  
       *   T h e   a c c u m u l a t o r   m a i n t a i n s   1 . 3 1   f o r m a t   b y   t r u n c a t i n g   l o w e r   3 1   b i t s   o f   t h e   i n t e r m e d i a t e   m u l t i p l i c a t i o n   i n   2 . 6 2   f o r m a t .  
       *   T h e r e   i s   s a t u r a t i o n   o n   t h e   s u b t r a c t i o n ,   h e n c e   t h e r e   i s   n o   r i s k   o f   o v e r f l o w .  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   v o i d   a r m _ i n v _ c l a r k e _ q 3 1 (  
     q 3 1 _ t   I a l p h a ,  
     q 3 1 _ t   I b e t a ,  
     q 3 1 _ t   *   p I a ,  
     q 3 1 _ t   *   p I b )  
     {  
         q 3 1 _ t   p r o d u c t 1 ,   p r o d u c t 2 ;                                         / *   T e m p o r a r y   v a r i a b l e s   u s e d   t o   s t o r e   i n t e r m e d i a t e   r e s u l t s   * /  
  
         / *   C a l c u l a t i n g   p I a   f r o m   I a l p h a   b y   e q u a t i o n   p I a   =   I a l p h a   * /  
         * p I a   =   I a l p h a ;  
  
         / *   I n t e r m e d i a t e   p r o d u c t   i s   c a l c u l a t e d   b y   ( 1 / ( 2 * s q r t ( 3 ) )   *   I a )   * /  
         p r o d u c t 1   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   ( I a l p h a )   *   ( 0 x 4 0 0 0 0 0 0 0 ) )   > >   3 1 ) ;  
  
         / *   I n t e r m e d i a t e   p r o d u c t   i s   c a l c u l a t e d   b y   ( 1 / s q r t ( 3 )   *   p I b )   * /  
         p r o d u c t 2   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   ( I b e t a )   *   ( 0 x 6 E D 9 E B A 1 ) )   > >   3 1 ) ;  
  
         / *   p I b   i s   c a l c u l a t e d   b y   s u b t r a c t i n g   t h e   p r o d u c t s   * /  
         * p I b   =   _ _ Q S U B ( p r o d u c t 2 ,   p r o d u c t 1 ) ;  
     }  
  
     / * *  
       *   @ }   e n d   o f   i n v _ c l a r k e   g r o u p  
       * /  
  
     / * *  
       *   @ b r i e f     C o n v e r t s   t h e   e l e m e n t s   o f   t h e   Q 7   v e c t o r   t o   Q 1 5   v e c t o r .  
       *   @ p a r a m [ i n ]     p S r c               i n p u t   p o i n t e r  
       *   @ p a r a m [ o u t ]   p D s t               o u t p u t   p o i n t e r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     n u m b e r   o f   s a m p l e s   t o   p r o c e s s  
       * /  
     v o i d   a r m _ q 7 _ t o _ q 1 5 (  
     q 7 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
  
     / * *  
       *   @ i n g r o u p   g r o u p C o n t r o l l e r  
       * /  
  
     / * *  
       *   @ d e f g r o u p   p a r k   V e c t o r   P a r k   T r a n s f o r m  
       *  
       *   F o r w a r d   P a r k   t r a n s f o r m   c o n v e r t s   t h e   i n p u t   t w o - c o o r d i n a t e   v e c t o r   t o   f l u x   a n d   t o r q u e   c o m p o n e n t s .  
       *   T h e   P a r k   t r a n s f o r m   c a n   b e   u s e d   t o   r e a l i z e   t h e   t r a n s f o r m a t i o n   o f   t h e   < c o d e > I a l p h a < / c o d e >   a n d   t h e   < c o d e > I b e t a < / c o d e >   c u r r e n t s  
       *   f r o m   t h e   s t a t i o n a r y   t o   t h e   m o v i n g   r e f e r e n c e   f r a m e   a n d   c o n t r o l   t h e   s p a t i a l   r e l a t i o n s h i p   b e t w e e n  
       *   t h e   s t a t o r   v e c t o r   c u r r e n t   a n d   r o t o r   f l u x   v e c t o r .  
       *   I f   w e   c o n s i d e r   t h e   d   a x i s   a l i g n e d   w i t h   t h e   r o t o r   f l u x ,   t h e   d i a g r a m   b e l o w   s h o w s   t h e  
       *   c u r r e n t   v e c t o r   a n d   t h e   r e l a t i o n s h i p   f r o m   t h e   t w o   r e f e r e n c e   f r a m e s :  
       *   \ i m a g e   h t m l   p a r k . g i f   " S t a t o r   c u r r e n t   s p a c e   v e c t o r   a n d   i t s   c o m p o n e n t   i n   ( a , b )   a n d   i n   t h e   d , q   r o t a t i n g   r e f e r e n c e   f r a m e "  
       *  
       *   T h e   f u n c t i o n   o p e r a t e s   o n   a   s i n g l e   s a m p l e   o f   d a t a   a n d   e a c h   c a l l   t o   t h e   f u n c t i o n   r e t u r n s   t h e   p r o c e s s e d   o u t p u t .  
       *   T h e   l i b r a r y   p r o v i d e s   s e p a r a t e   f u n c t i o n s   f o r   Q 3 1   a n d   f l o a t i n g - p o i n t   d a t a   t y p e s .  
       *   \ p a r   A l g o r i t h m  
       *   \ i m a g e   h t m l   p a r k F o r m u l a . g i f  
       *   w h e r e   < c o d e > I a l p h a < / c o d e >   a n d   < c o d e > I b e t a < / c o d e >   a r e   t h e   s t a t o r   v e c t o r   c o m p o n e n t s ,  
       *   < c o d e > p I d < / c o d e >   a n d   < c o d e > p I q < / c o d e >   a r e   r o t o r   v e c t o r   c o m p o n e n t s   a n d   < c o d e > c o s V a l < / c o d e >   a n d   < c o d e > s i n V a l < / c o d e >   a r e   t h e  
       *   c o s i n e   a n d   s i n e   v a l u e s   o f   t h e t a   ( r o t o r   f l u x   p o s i t i o n ) .  
       *   \ p a r   F i x e d - P o i n t   B e h a v i o r  
       *   C a r e   m u s t   b e   t a k e n   w h e n   u s i n g   t h e   Q 3 1   v e r s i o n   o f   t h e   P a r k   t r a n s f o r m .  
       *   I n   p a r t i c u l a r ,   t h e   o v e r f l o w   a n d   s a t u r a t i o n   b e h a v i o r   o f   t h e   a c c u m u l a t o r   u s e d   m u s t   b e   c o n s i d e r e d .  
       *   R e f e r   t o   t h e   f u n c t i o n   s p e c i f i c   d o c u m e n t a t i o n   b e l o w   f o r   u s a g e   g u i d e l i n e s .  
       * /  
  
     / * *  
       *   @ a d d t o g r o u p   p a r k  
       *   @ {  
       * /  
  
     / * *  
       *   @ b r i e f   F l o a t i n g - p o i n t   P a r k   t r a n s f o r m  
       *   @ p a r a m [ i n ]     I a l p h a     i n p u t   t w o - p h a s e   v e c t o r   c o o r d i n a t e   a l p h a  
       *   @ p a r a m [ i n ]     I b e t a       i n p u t   t w o - p h a s e   v e c t o r   c o o r d i n a t e   b e t a  
       *   @ p a r a m [ o u t ]   p I d           p o i n t s   t o   o u t p u t       r o t o r   r e f e r e n c e   f r a m e   d  
       *   @ p a r a m [ o u t ]   p I q           p o i n t s   t o   o u t p u t       r o t o r   r e f e r e n c e   f r a m e   q  
       *   @ p a r a m [ i n ]     s i n V a l     s i n e   v a l u e   o f   r o t a t i o n   a n g l e   t h e t a  
       *   @ p a r a m [ i n ]     c o s V a l     c o s i n e   v a l u e   o f   r o t a t i o n   a n g l e   t h e t a  
       *  
       *   T h e   f u n c t i o n   i m p l e m e n t s   t h e   f o r w a r d   P a r k   t r a n s f o r m .  
       *  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   v o i d   a r m _ p a r k _ f 3 2 (  
     f l o a t 3 2 _ t   I a l p h a ,  
     f l o a t 3 2 _ t   I b e t a ,  
     f l o a t 3 2 _ t   *   p I d ,  
     f l o a t 3 2 _ t   *   p I q ,  
     f l o a t 3 2 _ t   s i n V a l ,  
     f l o a t 3 2 _ t   c o s V a l )  
     {  
         / *   C a l c u l a t e   p I d   u s i n g   t h e   e q u a t i o n ,   p I d   =   I a l p h a   *   c o s V a l   +   I b e t a   *   s i n V a l   * /  
         * p I d   =   I a l p h a   *   c o s V a l   +   I b e t a   *   s i n V a l ;  
  
         / *   C a l c u l a t e   p I q   u s i n g   t h e   e q u a t i o n ,   p I q   =   -   I a l p h a   *   s i n V a l   +   I b e t a   *   c o s V a l   * /  
         * p I q   =   - I a l p h a   *   s i n V a l   +   I b e t a   *   c o s V a l ;  
     }  
  
  
     / * *  
       *   @ b r i e f     P a r k   t r a n s f o r m   f o r   Q 3 1   v e r s i o n  
       *   @ p a r a m [ i n ]     I a l p h a     i n p u t   t w o - p h a s e   v e c t o r   c o o r d i n a t e   a l p h a  
       *   @ p a r a m [ i n ]     I b e t a       i n p u t   t w o - p h a s e   v e c t o r   c o o r d i n a t e   b e t a  
       *   @ p a r a m [ o u t ]   p I d           p o i n t s   t o   o u t p u t   r o t o r   r e f e r e n c e   f r a m e   d  
       *   @ p a r a m [ o u t ]   p I q           p o i n t s   t o   o u t p u t   r o t o r   r e f e r e n c e   f r a m e   q  
       *   @ p a r a m [ i n ]     s i n V a l     s i n e   v a l u e   o f   r o t a t i o n   a n g l e   t h e t a  
       *   @ p a r a m [ i n ]     c o s V a l     c o s i n e   v a l u e   o f   r o t a t i o n   a n g l e   t h e t a  
       *  
       *   < b > S c a l i n g   a n d   O v e r f l o w   B e h a v i o r : < / b >  
       *   \ p a r  
       *   T h e   f u n c t i o n   i s   i m p l e m e n t e d   u s i n g   a n   i n t e r n a l   3 2 - b i t   a c c u m u l a t o r .  
       *   T h e   a c c u m u l a t o r   m a i n t a i n s   1 . 3 1   f o r m a t   b y   t r u n c a t i n g   l o w e r   3 1   b i t s   o f   t h e   i n t e r m e d i a t e   m u l t i p l i c a t i o n   i n   2 . 6 2   f o r m a t .  
       *   T h e r e   i s   s a t u r a t i o n   o n   t h e   a d d i t i o n   a n d   s u b t r a c t i o n ,   h e n c e   t h e r e   i s   n o   r i s k   o f   o v e r f l o w .  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   v o i d   a r m _ p a r k _ q 3 1 (  
     q 3 1 _ t   I a l p h a ,  
     q 3 1 _ t   I b e t a ,  
     q 3 1 _ t   *   p I d ,  
     q 3 1 _ t   *   p I q ,  
     q 3 1 _ t   s i n V a l ,  
     q 3 1 _ t   c o s V a l )  
     {  
         q 3 1 _ t   p r o d u c t 1 ,   p r o d u c t 2 ;                                         / *   T e m p o r a r y   v a r i a b l e s   u s e d   t o   s t o r e   i n t e r m e d i a t e   r e s u l t s   * /  
         q 3 1 _ t   p r o d u c t 3 ,   p r o d u c t 4 ;                                         / *   T e m p o r a r y   v a r i a b l e s   u s e d   t o   s t o r e   i n t e r m e d i a t e   r e s u l t s   * /  
  
         / *   I n t e r m e d i a t e   p r o d u c t   i s   c a l c u l a t e d   b y   ( I a l p h a   *   c o s V a l )   * /  
         p r o d u c t 1   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   ( I a l p h a )   *   ( c o s V a l ) )   > >   3 1 ) ;  
  
         / *   I n t e r m e d i a t e   p r o d u c t   i s   c a l c u l a t e d   b y   ( I b e t a   *   s i n V a l )   * /  
         p r o d u c t 2   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   ( I b e t a )   *   ( s i n V a l ) )   > >   3 1 ) ;  
  
  
         / *   I n t e r m e d i a t e   p r o d u c t   i s   c a l c u l a t e d   b y   ( I a l p h a   *   s i n V a l )   * /  
         p r o d u c t 3   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   ( I a l p h a )   *   ( s i n V a l ) )   > >   3 1 ) ;  
  
         / *   I n t e r m e d i a t e   p r o d u c t   i s   c a l c u l a t e d   b y   ( I b e t a   *   c o s V a l )   * /  
         p r o d u c t 4   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   ( I b e t a )   *   ( c o s V a l ) )   > >   3 1 ) ;  
  
         / *   C a l c u l a t e   p I d   b y   a d d i n g   t h e   t w o   i n t e r m e d i a t e   p r o d u c t s   1   a n d   2   * /  
         * p I d   =   _ _ Q A D D ( p r o d u c t 1 ,   p r o d u c t 2 ) ;  
  
         / *   C a l c u l a t e   p I q   b y   s u b t r a c t i n g   t h e   t w o   i n t e r m e d i a t e   p r o d u c t s   3   f r o m   4   * /  
         * p I q   =   _ _ Q S U B ( p r o d u c t 4 ,   p r o d u c t 3 ) ;  
     }  
  
     / * *  
       *   @ }   e n d   o f   p a r k   g r o u p  
       * /  
  
     / * *  
       *   @ b r i e f     C o n v e r t s   t h e   e l e m e n t s   o f   t h e   Q 7   v e c t o r   t o   f l o a t i n g - p o i n t   v e c t o r .  
       *   @ p a r a m [ i n ]     p S r c               i s   i n p u t   p o i n t e r  
       *   @ p a r a m [ o u t ]   p D s t               i s   o u t p u t   p o i n t e r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     i s   t h e   n u m b e r   o f   s a m p l e s   t o   p r o c e s s  
       * /  
     v o i d   a r m _ q 7 _ t o _ f l o a t (  
     q 7 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ i n g r o u p   g r o u p C o n t r o l l e r  
       * /  
  
     / * *  
       *   @ d e f g r o u p   i n v _ p a r k   V e c t o r   I n v e r s e   P a r k   t r a n s f o r m  
       *   I n v e r s e   P a r k   t r a n s f o r m   c o n v e r t s   t h e   i n p u t   f l u x   a n d   t o r q u e   c o m p o n e n t s   t o   t w o - c o o r d i n a t e   v e c t o r .  
       *  
       *   T h e   f u n c t i o n   o p e r a t e s   o n   a   s i n g l e   s a m p l e   o f   d a t a   a n d   e a c h   c a l l   t o   t h e   f u n c t i o n   r e t u r n s   t h e   p r o c e s s e d   o u t p u t .  
       *   T h e   l i b r a r y   p r o v i d e s   s e p a r a t e   f u n c t i o n s   f o r   Q 3 1   a n d   f l o a t i n g - p o i n t   d a t a   t y p e s .  
       *   \ p a r   A l g o r i t h m  
       *   \ i m a g e   h t m l   p a r k I n v F o r m u l a . g i f  
       *   w h e r e   < c o d e > p I a l p h a < / c o d e >   a n d   < c o d e > p I b e t a < / c o d e >   a r e   t h e   s t a t o r   v e c t o r   c o m p o n e n t s ,  
       *   < c o d e > I d < / c o d e >   a n d   < c o d e > I q < / c o d e >   a r e   r o t o r   v e c t o r   c o m p o n e n t s   a n d   < c o d e > c o s V a l < / c o d e >   a n d   < c o d e > s i n V a l < / c o d e >   a r e   t h e  
       *   c o s i n e   a n d   s i n e   v a l u e s   o f   t h e t a   ( r o t o r   f l u x   p o s i t i o n ) .  
       *   \ p a r   F i x e d - P o i n t   B e h a v i o r  
       *   C a r e   m u s t   b e   t a k e n   w h e n   u s i n g   t h e   Q 3 1   v e r s i o n   o f   t h e   P a r k   t r a n s f o r m .  
       *   I n   p a r t i c u l a r ,   t h e   o v e r f l o w   a n d   s a t u r a t i o n   b e h a v i o r   o f   t h e   a c c u m u l a t o r   u s e d   m u s t   b e   c o n s i d e r e d .  
       *   R e f e r   t o   t h e   f u n c t i o n   s p e c i f i c   d o c u m e n t a t i o n   b e l o w   f o r   u s a g e   g u i d e l i n e s .  
       * /  
  
     / * *  
       *   @ a d d t o g r o u p   i n v _ p a r k  
       *   @ {  
       * /  
  
       / * *  
       *   @ b r i e f     F l o a t i n g - p o i n t   I n v e r s e   P a r k   t r a n s f o r m  
       *   @ p a r a m [ i n ]     I d               i n p u t   c o o r d i n a t e   o f   r o t o r   r e f e r e n c e   f r a m e   d  
       *   @ p a r a m [ i n ]     I q               i n p u t   c o o r d i n a t e   o f   r o t o r   r e f e r e n c e   f r a m e   q  
       *   @ p a r a m [ o u t ]   p I a l p h a     p o i n t s   t o   o u t p u t   t w o - p h a s e   o r t h o g o n a l   v e c t o r   a x i s   a l p h a  
       *   @ p a r a m [ o u t ]   p I b e t a       p o i n t s   t o   o u t p u t   t w o - p h a s e   o r t h o g o n a l   v e c t o r   a x i s   b e t a  
       *   @ p a r a m [ i n ]     s i n V a l       s i n e   v a l u e   o f   r o t a t i o n   a n g l e   t h e t a  
       *   @ p a r a m [ i n ]     c o s V a l       c o s i n e   v a l u e   o f   r o t a t i o n   a n g l e   t h e t a  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   v o i d   a r m _ i n v _ p a r k _ f 3 2 (  
     f l o a t 3 2 _ t   I d ,  
     f l o a t 3 2 _ t   I q ,  
     f l o a t 3 2 _ t   *   p I a l p h a ,  
     f l o a t 3 2 _ t   *   p I b e t a ,  
     f l o a t 3 2 _ t   s i n V a l ,  
     f l o a t 3 2 _ t   c o s V a l )  
     {  
         / *   C a l c u l a t e   p I a l p h a   u s i n g   t h e   e q u a t i o n ,   p I a l p h a   =   I d   *   c o s V a l   -   I q   *   s i n V a l   * /  
         * p I a l p h a   =   I d   *   c o s V a l   -   I q   *   s i n V a l ;  
  
         / *   C a l c u l a t e   p I b e t a   u s i n g   t h e   e q u a t i o n ,   p I b e t a   =   I d   *   s i n V a l   +   I q   *   c o s V a l   * /  
         * p I b e t a   =   I d   *   s i n V a l   +   I q   *   c o s V a l ;  
     }  
  
  
     / * *  
       *   @ b r i e f     I n v e r s e   P a r k   t r a n s f o r m   f o r       Q 3 1   v e r s i o n  
       *   @ p a r a m [ i n ]     I d               i n p u t   c o o r d i n a t e   o f   r o t o r   r e f e r e n c e   f r a m e   d  
       *   @ p a r a m [ i n ]     I q               i n p u t   c o o r d i n a t e   o f   r o t o r   r e f e r e n c e   f r a m e   q  
       *   @ p a r a m [ o u t ]   p I a l p h a     p o i n t s   t o   o u t p u t   t w o - p h a s e   o r t h o g o n a l   v e c t o r   a x i s   a l p h a  
       *   @ p a r a m [ o u t ]   p I b e t a       p o i n t s   t o   o u t p u t   t w o - p h a s e   o r t h o g o n a l   v e c t o r   a x i s   b e t a  
       *   @ p a r a m [ i n ]     s i n V a l       s i n e   v a l u e   o f   r o t a t i o n   a n g l e   t h e t a  
       *   @ p a r a m [ i n ]     c o s V a l       c o s i n e   v a l u e   o f   r o t a t i o n   a n g l e   t h e t a  
       *  
       *   < b > S c a l i n g   a n d   O v e r f l o w   B e h a v i o r : < / b >  
       *   \ p a r  
       *   T h e   f u n c t i o n   i s   i m p l e m e n t e d   u s i n g   a n   i n t e r n a l   3 2 - b i t   a c c u m u l a t o r .  
       *   T h e   a c c u m u l a t o r   m a i n t a i n s   1 . 3 1   f o r m a t   b y   t r u n c a t i n g   l o w e r   3 1   b i t s   o f   t h e   i n t e r m e d i a t e   m u l t i p l i c a t i o n   i n   2 . 6 2   f o r m a t .  
       *   T h e r e   i s   s a t u r a t i o n   o n   t h e   a d d i t i o n ,   h e n c e   t h e r e   i s   n o   r i s k   o f   o v e r f l o w .  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   v o i d   a r m _ i n v _ p a r k _ q 3 1 (  
     q 3 1 _ t   I d ,  
     q 3 1 _ t   I q ,  
     q 3 1 _ t   *   p I a l p h a ,  
     q 3 1 _ t   *   p I b e t a ,  
     q 3 1 _ t   s i n V a l ,  
     q 3 1 _ t   c o s V a l )  
     {  
         q 3 1 _ t   p r o d u c t 1 ,   p r o d u c t 2 ;                                         / *   T e m p o r a r y   v a r i a b l e s   u s e d   t o   s t o r e   i n t e r m e d i a t e   r e s u l t s   * /  
         q 3 1 _ t   p r o d u c t 3 ,   p r o d u c t 4 ;                                         / *   T e m p o r a r y   v a r i a b l e s   u s e d   t o   s t o r e   i n t e r m e d i a t e   r e s u l t s   * /  
  
         / *   I n t e r m e d i a t e   p r o d u c t   i s   c a l c u l a t e d   b y   ( I d   *   c o s V a l )   * /  
         p r o d u c t 1   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   ( I d )   *   ( c o s V a l ) )   > >   3 1 ) ;  
  
         / *   I n t e r m e d i a t e   p r o d u c t   i s   c a l c u l a t e d   b y   ( I q   *   s i n V a l )   * /  
         p r o d u c t 2   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   ( I q )   *   ( s i n V a l ) )   > >   3 1 ) ;  
  
  
         / *   I n t e r m e d i a t e   p r o d u c t   i s   c a l c u l a t e d   b y   ( I d   *   s i n V a l )   * /  
         p r o d u c t 3   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   ( I d )   *   ( s i n V a l ) )   > >   3 1 ) ;  
  
         / *   I n t e r m e d i a t e   p r o d u c t   i s   c a l c u l a t e d   b y   ( I q   *   c o s V a l )   * /  
         p r o d u c t 4   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   ( I q )   *   ( c o s V a l ) )   > >   3 1 ) ;  
  
         / *   C a l c u l a t e   p I a l p h a   b y   u s i n g   t h e   t w o   i n t e r m e d i a t e   p r o d u c t s   1   a n d   2   * /  
         * p I a l p h a   =   _ _ Q S U B ( p r o d u c t 1 ,   p r o d u c t 2 ) ;  
  
         / *   C a l c u l a t e   p I b e t a   b y   u s i n g   t h e   t w o   i n t e r m e d i a t e   p r o d u c t s   3   a n d   4   * /  
         * p I b e t a   =   _ _ Q A D D ( p r o d u c t 4 ,   p r o d u c t 3 ) ;  
     }  
  
     / * *  
       *   @ }   e n d   o f   I n v e r s e   p a r k   g r o u p  
       * /  
  
  
     / * *  
       *   @ b r i e f     C o n v e r t s   t h e   e l e m e n t s   o f   t h e   Q 3 1   v e c t o r   t o   f l o a t i n g - p o i n t   v e c t o r .  
       *   @ p a r a m [ i n ]     p S r c               i s   i n p u t   p o i n t e r  
       *   @ p a r a m [ o u t ]   p D s t               i s   o u t p u t   p o i n t e r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     i s   t h e   n u m b e r   o f   s a m p l e s   t o   p r o c e s s  
       * /  
     v o i d   a r m _ q 3 1 _ t o _ f l o a t (  
     q 3 1 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
     / * *  
       *   @ i n g r o u p   g r o u p I n t e r p o l a t i o n  
       * /  
  
     / * *  
       *   @ d e f g r o u p   L i n e a r I n t e r p o l a t e   L i n e a r   I n t e r p o l a t i o n  
       *  
       *   L i n e a r   i n t e r p o l a t i o n   i s   a   m e t h o d   o f   c u r v e   f i t t i n g   u s i n g   l i n e a r   p o l y n o m i a l s .  
       *   L i n e a r   i n t e r p o l a t i o n   w o r k s   b y   e f f e c t i v e l y   d r a w i n g   a   s t r a i g h t   l i n e   b e t w e e n   t w o   n e i g h b o r i n g   s a m p l e s   a n d   r e t u r n i n g   t h e   a p p r o p r i a t e   p o i n t   a l o n g   t h a t   l i n e  
       *  
       *   \ p a r  
       *   \ i m a g e   h t m l   L i n e a r I n t e r p . g i f   " L i n e a r   i n t e r p o l a t i o n "  
       *  
       *   \ p a r  
       *   A     L i n e a r   I n t e r p o l a t e   f u n c t i o n   c a l c u l a t e s   a n   o u t p u t   v a l u e ( y ) ,   f o r   t h e   i n p u t ( x )  
       *   u s i n g   l i n e a r   i n t e r p o l a t i o n   o f   t h e   i n p u t   v a l u e s   x 0 ,   x 1 (   n e a r e s t   i n p u t   v a l u e s )   a n d   t h e   o u t p u t   v a l u e s   y 0   a n d   y 1 ( n e a r e s t   o u t p u t   v a l u e s )  
       *  
       *   \ p a r   A l g o r i t h m :  
       *   < p r e >  
       *               y   =   y 0   +   ( x   -   x 0 )   *   ( ( y 1   -   y 0 ) / ( x 1 - x 0 ) )  
       *               w h e r e   x 0 ,   x 1   a r e   n e a r e s t   v a l u e s   o f   i n p u t   x  
       *                           y 0 ,   y 1   a r e   n e a r e s t   v a l u e s   t o   o u t p u t   y  
       *   < / p r e >  
       *  
       *   \ p a r  
       *   T h i s   s e t   o f   f u n c t i o n s   i m p l e m e n t s   L i n e a r   i n t e r p o l a t i o n   p r o c e s s  
       *   f o r   Q 7 ,   Q 1 5 ,   Q 3 1 ,   a n d   f l o a t i n g - p o i n t   d a t a   t y p e s .     T h e   f u n c t i o n s   o p e r a t e   o n   a   s i n g l e  
       *   s a m p l e   o f   d a t a   a n d   e a c h   c a l l   t o   t h e   f u n c t i o n   r e t u r n s   a   s i n g l e   p r o c e s s e d   v a l u e .  
       *   < c o d e > S < / c o d e >   p o i n t s   t o   a n   i n s t a n c e   o f   t h e   L i n e a r   I n t e r p o l a t e   f u n c t i o n   d a t a   s t r u c t u r e .  
       *   < c o d e > x < / c o d e >   i s   t h e   i n p u t   s a m p l e   v a l u e .   T h e   f u n c t i o n s   r e t u r n s   t h e   o u t p u t   v a l u e .  
       *  
       *   \ p a r  
       *   i f   x   i s   o u t s i d e   o f   t h e   t a b l e   b o u n d a r y ,   L i n e a r   i n t e r p o l a t i o n   r e t u r n s   f i r s t   v a l u e   o f   t h e   t a b l e  
       *   i f   x   i s   b e l o w   i n p u t   r a n g e   a n d   r e t u r n s   l a s t   v a l u e   o f   t a b l e   i f   x   i s   a b o v e   r a n g e .  
       * /  
  
     / * *  
       *   @ a d d t o g r o u p   L i n e a r I n t e r p o l a t e  
       *   @ {  
       * /  
  
     / * *  
       *   @ b r i e f     P r o c e s s   f u n c t i o n   f o r   t h e   f l o a t i n g - p o i n t   L i n e a r   I n t e r p o l a t i o n   F u n c t i o n .  
       *   @ p a r a m [ i n , o u t ]   S     i s   a n   i n s t a n c e   o f   t h e   f l o a t i n g - p o i n t   L i n e a r   I n t e r p o l a t i o n   s t r u c t u r e  
       *   @ p a r a m [ i n ]           x     i n p u t   s a m p l e   t o   p r o c e s s  
       *   @ r e t u r n   y   p r o c e s s e d   o u t p u t   s a m p l e .  
       *  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   f l o a t 3 2 _ t   a r m _ l i n e a r _ i n t e r p _ f 3 2 (  
     a r m _ l i n e a r _ i n t e r p _ i n s t a n c e _ f 3 2   *   S ,  
     f l o a t 3 2 _ t   x )  
     {  
         f l o a t 3 2 _ t   y ;  
         f l o a t 3 2 _ t   x 0 ,   x 1 ;                                                         / *   N e a r e s t   i n p u t   v a l u e s   * /  
         f l o a t 3 2 _ t   y 0 ,   y 1 ;                                                         / *   N e a r e s t   o u t p u t   v a l u e s   * /  
         f l o a t 3 2 _ t   x S p a c i n g   =   S - > x S p a c i n g ;                         / *   s p a c i n g   b e t w e e n   i n p u t   v a l u e s   * /  
         i n t 3 2 _ t   i ;                                                                       / *   I n d e x   v a r i a b l e   * /  
         f l o a t 3 2 _ t   * p Y D a t a   =   S - > p Y D a t a ;                               / *   p o i n t e r   t o   o u t p u t   t a b l e   * /  
  
         / *   C a l c u l a t i o n   o f   i n d e x   * /  
         i   =   ( i n t 3 2 _ t )   ( ( x   -   S - > x 1 )   /   x S p a c i n g ) ;  
  
         i f   ( i   <   0 )  
         {  
             / *   I n i a t i l i z e   o u t p u t   f o r   b e l o w   s p e c i f i e d   r a n g e   a s   l e a s t   o u t p u t   v a l u e   o f   t a b l e   * /  
             y   =   p Y D a t a [ 0 ] ;  
         }  
         e l s e   i f   ( ( u i n t 3 2 _ t ) i   > =   S - > n V a l u e s )  
         {  
             / *   I n i a t i l i z e   o u t p u t   f o r   a b o v e   s p e c i f i e d   r a n g e   a s   l a s t   o u t p u t   v a l u e   o f   t a b l e   * /  
             y   =   p Y D a t a [ S - > n V a l u e s   -   1 ] ;  
         }  
         e l s e  
         {  
             / *   C a l c u l a t i o n   o f   n e a r e s t   i n p u t   v a l u e s   * /  
             x 0   =   S - > x 1   +     i             *   x S p a c i n g ;  
             x 1   =   S - > x 1   +   ( i   +   1 )   *   x S p a c i n g ;  
  
             / *   R e a d   o f   n e a r e s t   o u t p u t   v a l u e s   * /  
             y 0   =   p Y D a t a [ i ] ;  
             y 1   =   p Y D a t a [ i   +   1 ] ;  
  
             / *   C a l c u l a t i o n   o f   o u t p u t   * /  
             y   =   y 0   +   ( x   -   x 0 )   *   ( ( y 1   -   y 0 )   /   ( x 1   -   x 0 ) ) ;  
  
         }  
  
         / *   r e t u r n s   o u t p u t   v a l u e   * /  
         r e t u r n   ( y ) ;  
     }  
  
  
       / * *  
       *  
       *   @ b r i e f     P r o c e s s   f u n c t i o n   f o r   t h e   Q 3 1   L i n e a r   I n t e r p o l a t i o n   F u n c t i o n .  
       *   @ p a r a m [ i n ]   p Y D a t a       p o i n t e r   t o   Q 3 1   L i n e a r   I n t e r p o l a t i o n   t a b l e  
       *   @ p a r a m [ i n ]   x                 i n p u t   s a m p l e   t o   p r o c e s s  
       *   @ p a r a m [ i n ]   n V a l u e s     n u m b e r   o f   t a b l e   v a l u e s  
       *   @ r e t u r n   y   p r o c e s s e d   o u t p u t   s a m p l e .  
       *  
       *   \ p a r  
       *   I n p u t   s a m p l e   < c o d e > x < / c o d e >   i s   i n   1 2 . 2 0   f o r m a t   w h i c h   c o n t a i n s   1 2   b i t s   f o r   t a b l e   i n d e x   a n d   2 0   b i t s   f o r   f r a c t i o n a l   p a r t .  
       *   T h i s   f u n c t i o n   c a n   s u p p o r t   m a x i m u m   o f   t a b l e   s i z e   2 ^ 1 2 .  
       *  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   q 3 1 _ t   a r m _ l i n e a r _ i n t e r p _ q 3 1 (  
     q 3 1 _ t   *   p Y D a t a ,  
     q 3 1 _ t   x ,  
     u i n t 3 2 _ t   n V a l u e s )  
     {  
         q 3 1 _ t   y ;                                                                           / *   o u t p u t   * /  
         q 3 1 _ t   y 0 ,   y 1 ;                                                                 / *   N e a r e s t   o u t p u t   v a l u e s   * /  
         q 3 1 _ t   f r a c t ;                                                                   / *   f r a c t i o n a l   p a r t   * /  
         i n t 3 2 _ t   i n d e x ;                                                               / *   I n d e x   t o   r e a d   n e a r e s t   o u t p u t   v a l u e s   * /  
  
         / *   I n p u t   i s   i n   1 2 . 2 0   f o r m a t   * /  
         / *   1 2   b i t s   f o r   t h e   t a b l e   i n d e x   * /  
         / *   I n d e x   v a l u e   c a l c u l a t i o n   * /  
         i n d e x   =   ( ( x   &   ( q 3 1 _ t ) 0 x F F F 0 0 0 0 0 )   > >   2 0 ) ;  
  
         i f   ( i n d e x   > =   ( i n t 3 2 _ t ) ( n V a l u e s   -   1 ) )  
         {  
             r e t u r n   ( p Y D a t a [ n V a l u e s   -   1 ] ) ;  
         }  
         e l s e   i f   ( i n d e x   <   0 )  
         {  
             r e t u r n   ( p Y D a t a [ 0 ] ) ;  
         }  
         e l s e  
         {  
             / *   2 0   b i t s   f o r   t h e   f r a c t i o n a l   p a r t   * /  
             / *   s h i f t   l e f t   b y   1 1   t o   k e e p   f r a c t   i n   1 . 3 1   f o r m a t   * /  
             f r a c t   =   ( x   &   0 x 0 0 0 F F F F F )   < <   1 1 ;  
  
             / *   R e a d   t w o   n e a r e s t   o u t p u t   v a l u e s   f r o m   t h e   i n d e x   i n   1 . 3 1 ( q 3 1 )   f o r m a t   * /  
             y 0   =   p Y D a t a [ i n d e x ] ;  
             y 1   =   p Y D a t a [ i n d e x   +   1 ] ;  
  
             / *   C a l c u l a t i o n   o f   y 0   *   ( 1 - f r a c t )   a n d   y   i s   i n   2 . 3 0   f o r m a t   * /  
             y   =   ( ( q 3 1 _ t )   ( ( q 6 3 _ t )   y 0   *   ( 0 x 7 F F F F F F F   -   f r a c t )   > >   3 2 ) ) ;  
  
             / *   C a l c u l a t i o n   o f   y 0   *   ( 1 - f r a c t )   +   y 1   * f r a c t   a n d   y   i s   i n   2 . 3 0   f o r m a t   * /  
             y   + =   ( ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   y 1   *   f r a c t )   > >   3 2 ) ) ;  
  
             / *   C o n v e r t   y   t o   1 . 3 1   f o r m a t   * /  
             r e t u r n   ( y   < <   1 U ) ;  
         }  
     }  
  
  
     / * *  
       *  
       *   @ b r i e f     P r o c e s s   f u n c t i o n   f o r   t h e   Q 1 5   L i n e a r   I n t e r p o l a t i o n   F u n c t i o n .  
       *   @ p a r a m [ i n ]   p Y D a t a       p o i n t e r   t o   Q 1 5   L i n e a r   I n t e r p o l a t i o n   t a b l e  
       *   @ p a r a m [ i n ]   x                 i n p u t   s a m p l e   t o   p r o c e s s  
       *   @ p a r a m [ i n ]   n V a l u e s     n u m b e r   o f   t a b l e   v a l u e s  
       *   @ r e t u r n   y   p r o c e s s e d   o u t p u t   s a m p l e .  
       *  
       *   \ p a r  
       *   I n p u t   s a m p l e   < c o d e > x < / c o d e >   i s   i n   1 2 . 2 0   f o r m a t   w h i c h   c o n t a i n s   1 2   b i t s   f o r   t a b l e   i n d e x   a n d   2 0   b i t s   f o r   f r a c t i o n a l   p a r t .  
       *   T h i s   f u n c t i o n   c a n   s u p p o r t   m a x i m u m   o f   t a b l e   s i z e   2 ^ 1 2 .  
       *  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   q 1 5 _ t   a r m _ l i n e a r _ i n t e r p _ q 1 5 (  
     q 1 5 _ t   *   p Y D a t a ,  
     q 3 1 _ t   x ,  
     u i n t 3 2 _ t   n V a l u e s )  
     {  
         q 6 3 _ t   y ;                                                                           / *   o u t p u t   * /  
         q 1 5 _ t   y 0 ,   y 1 ;                                                                 / *   N e a r e s t   o u t p u t   v a l u e s   * /  
         q 3 1 _ t   f r a c t ;                                                                   / *   f r a c t i o n a l   p a r t   * /  
         i n t 3 2 _ t   i n d e x ;                                                               / *   I n d e x   t o   r e a d   n e a r e s t   o u t p u t   v a l u e s   * /  
  
         / *   I n p u t   i s   i n   1 2 . 2 0   f o r m a t   * /  
         / *   1 2   b i t s   f o r   t h e   t a b l e   i n d e x   * /  
         / *   I n d e x   v a l u e   c a l c u l a t i o n   * /  
         i n d e x   =   ( ( x   &   ( i n t 3 2 _ t ) 0 x F F F 0 0 0 0 0 )   > >   2 0 ) ;  
  
         i f   ( i n d e x   > =   ( i n t 3 2 _ t ) ( n V a l u e s   -   1 ) )  
         {  
             r e t u r n   ( p Y D a t a [ n V a l u e s   -   1 ] ) ;  
         }  
         e l s e   i f   ( i n d e x   <   0 )  
         {  
             r e t u r n   ( p Y D a t a [ 0 ] ) ;  
         }  
         e l s e  
         {  
             / *   2 0   b i t s   f o r   t h e   f r a c t i o n a l   p a r t   * /  
             / *   f r a c t   i s   i n   1 2 . 2 0   f o r m a t   * /  
             f r a c t   =   ( x   &   0 x 0 0 0 F F F F F ) ;  
  
             / *   R e a d   t w o   n e a r e s t   o u t p u t   v a l u e s   f r o m   t h e   i n d e x   * /  
             y 0   =   p Y D a t a [ i n d e x ] ;  
             y 1   =   p Y D a t a [ i n d e x   +   1 ] ;  
  
             / *   C a l c u l a t i o n   o f   y 0   *   ( 1 - f r a c t )   a n d   y   i s   i n   1 3 . 3 5   f o r m a t   * /  
             y   =   ( ( q 6 3 _ t )   y 0   *   ( 0 x F F F F F   -   f r a c t ) ) ;  
  
             / *   C a l c u l a t i o n   o f   ( y 0   *   ( 1 - f r a c t )   +   y 1   *   f r a c t )   a n d   y   i s   i n   1 3 . 3 5   f o r m a t   * /  
             y   + =   ( ( q 6 3 _ t )   y 1   *   ( f r a c t ) ) ;  
  
             / *   c o n v e r t   y   t o   1 . 1 5   f o r m a t   * /  
             r e t u r n   ( q 1 5 _ t )   ( y   > >   2 0 ) ;  
         }  
     }  
  
  
     / * *  
       *  
       *   @ b r i e f     P r o c e s s   f u n c t i o n   f o r   t h e   Q 7   L i n e a r   I n t e r p o l a t i o n   F u n c t i o n .  
       *   @ p a r a m [ i n ]   p Y D a t a       p o i n t e r   t o   Q 7   L i n e a r   I n t e r p o l a t i o n   t a b l e  
       *   @ p a r a m [ i n ]   x                 i n p u t   s a m p l e   t o   p r o c e s s  
       *   @ p a r a m [ i n ]   n V a l u e s     n u m b e r   o f   t a b l e   v a l u e s  
       *   @ r e t u r n   y   p r o c e s s e d   o u t p u t   s a m p l e .  
       *  
       *   \ p a r  
       *   I n p u t   s a m p l e   < c o d e > x < / c o d e >   i s   i n   1 2 . 2 0   f o r m a t   w h i c h   c o n t a i n s   1 2   b i t s   f o r   t a b l e   i n d e x   a n d   2 0   b i t s   f o r   f r a c t i o n a l   p a r t .  
       *   T h i s   f u n c t i o n   c a n   s u p p o r t   m a x i m u m   o f   t a b l e   s i z e   2 ^ 1 2 .  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   q 7 _ t   a r m _ l i n e a r _ i n t e r p _ q 7 (  
     q 7 _ t   *   p Y D a t a ,  
     q 3 1 _ t   x ,  
     u i n t 3 2 _ t   n V a l u e s )  
     {  
         q 3 1 _ t   y ;                                                                           / *   o u t p u t   * /  
         q 7 _ t   y 0 ,   y 1 ;                                                                   / *   N e a r e s t   o u t p u t   v a l u e s   * /  
         q 3 1 _ t   f r a c t ;                                                                   / *   f r a c t i o n a l   p a r t   * /  
         u i n t 3 2 _ t   i n d e x ;                                                             / *   I n d e x   t o   r e a d   n e a r e s t   o u t p u t   v a l u e s   * /  
  
         / *   I n p u t   i s   i n   1 2 . 2 0   f o r m a t   * /  
         / *   1 2   b i t s   f o r   t h e   t a b l e   i n d e x   * /  
         / *   I n d e x   v a l u e   c a l c u l a t i o n   * /  
         i f   ( x   <   0 )  
         {  
             r e t u r n   ( p Y D a t a [ 0 ] ) ;  
         }  
         i n d e x   =   ( x   > >   2 0 )   &   0 x f f f ;  
  
         i f   ( i n d e x   > =   ( n V a l u e s   -   1 ) )  
         {  
             r e t u r n   ( p Y D a t a [ n V a l u e s   -   1 ] ) ;  
         }  
         e l s e  
         {  
             / *   2 0   b i t s   f o r   t h e   f r a c t i o n a l   p a r t   * /  
             / *   f r a c t   i s   i n   1 2 . 2 0   f o r m a t   * /  
             f r a c t   =   ( x   &   0 x 0 0 0 F F F F F ) ;  
  
             / *   R e a d   t w o   n e a r e s t   o u t p u t   v a l u e s   f r o m   t h e   i n d e x   a n d   a r e   i n   1 . 7 ( q 7 )   f o r m a t   * /  
             y 0   =   p Y D a t a [ i n d e x ] ;  
             y 1   =   p Y D a t a [ i n d e x   +   1 ] ;  
  
             / *   C a l c u l a t i o n   o f   y 0   *   ( 1 - f r a c t   )   a n d   y   i s   i n   1 3 . 2 7 ( q 2 7 )   f o r m a t   * /  
             y   =   ( ( y 0   *   ( 0 x F F F F F   -   f r a c t ) ) ) ;  
  
             / *   C a l c u l a t i o n   o f   y 1   *   f r a c t   +   y 0   *   ( 1 - f r a c t )   a n d   y   i s   i n   1 3 . 2 7 ( q 2 7 )   f o r m a t   * /  
             y   + =   ( y 1   *   f r a c t ) ;  
  
             / *   c o n v e r t   y   t o   1 . 7 ( q 7 )   f o r m a t   * /  
             r e t u r n   ( q 7 _ t )   ( y   > >   2 0 ) ;  
           }  
     }  
  
     / * *  
       *   @ }   e n d   o f   L i n e a r I n t e r p o l a t e   g r o u p  
       * /  
  
     / * *  
       *   @ b r i e f     F a s t   a p p r o x i m a t i o n   t o   t h e   t r i g o n o m e t r i c   s i n e   f u n c t i o n   f o r   f l o a t i n g - p o i n t   d a t a .  
       *   @ p a r a m [ i n ]   x     i n p u t   v a l u e   i n   r a d i a n s .  
       *   @ r e t u r n     s i n ( x ) .  
       * /  
     f l o a t 3 2 _ t   a r m _ s i n _ f 3 2 (  
     f l o a t 3 2 _ t   x ) ;  
  
  
     / * *  
       *   @ b r i e f     F a s t   a p p r o x i m a t i o n   t o   t h e   t r i g o n o m e t r i c   s i n e   f u n c t i o n   f o r   Q 3 1   d a t a .  
       *   @ p a r a m [ i n ]   x     S c a l e d   i n p u t   v a l u e   i n   r a d i a n s .  
       *   @ r e t u r n     s i n ( x ) .  
       * /  
     q 3 1 _ t   a r m _ s i n _ q 3 1 (  
     q 3 1 _ t   x ) ;  
  
  
     / * *  
       *   @ b r i e f     F a s t   a p p r o x i m a t i o n   t o   t h e   t r i g o n o m e t r i c   s i n e   f u n c t i o n   f o r   Q 1 5   d a t a .  
       *   @ p a r a m [ i n ]   x     S c a l e d   i n p u t   v a l u e   i n   r a d i a n s .  
       *   @ r e t u r n     s i n ( x ) .  
       * /  
     q 1 5 _ t   a r m _ s i n _ q 1 5 (  
     q 1 5 _ t   x ) ;  
  
  
     / * *  
       *   @ b r i e f     F a s t   a p p r o x i m a t i o n   t o   t h e   t r i g o n o m e t r i c   c o s i n e   f u n c t i o n   f o r   f l o a t i n g - p o i n t   d a t a .  
       *   @ p a r a m [ i n ]   x     i n p u t   v a l u e   i n   r a d i a n s .  
       *   @ r e t u r n     c o s ( x ) .  
       * /  
     f l o a t 3 2 _ t   a r m _ c o s _ f 3 2 (  
     f l o a t 3 2 _ t   x ) ;  
  
  
     / * *  
       *   @ b r i e f   F a s t   a p p r o x i m a t i o n   t o   t h e   t r i g o n o m e t r i c   c o s i n e   f u n c t i o n   f o r   Q 3 1   d a t a .  
       *   @ p a r a m [ i n ]   x     S c a l e d   i n p u t   v a l u e   i n   r a d i a n s .  
       *   @ r e t u r n     c o s ( x ) .  
       * /  
     q 3 1 _ t   a r m _ c o s _ q 3 1 (  
     q 3 1 _ t   x ) ;  
  
  
     / * *  
       *   @ b r i e f     F a s t   a p p r o x i m a t i o n   t o   t h e   t r i g o n o m e t r i c   c o s i n e   f u n c t i o n   f o r   Q 1 5   d a t a .  
       *   @ p a r a m [ i n ]   x     S c a l e d   i n p u t   v a l u e   i n   r a d i a n s .  
       *   @ r e t u r n     c o s ( x ) .  
       * /  
     q 1 5 _ t   a r m _ c o s _ q 1 5 (  
     q 1 5 _ t   x ) ;  
  
  
     / * *  
       *   @ i n g r o u p   g r o u p F a s t M a t h  
       * /  
  
  
     / * *  
       *   @ d e f g r o u p   S Q R T   S q u a r e   R o o t  
       *  
       *   C o m p u t e s   t h e   s q u a r e   r o o t   o f   a   n u m b e r .  
       *   T h e r e   a r e   s e p a r a t e   f u n c t i o n s   f o r   Q 1 5 ,   Q 3 1 ,   a n d   f l o a t i n g - p o i n t   d a t a   t y p e s .  
       *   T h e   s q u a r e   r o o t   f u n c t i o n   i s   c o m p u t e d   u s i n g   t h e   N e w t o n - R a p h s o n   a l g o r i t h m .  
       *   T h i s   i s   a n   i t e r a t i v e   a l g o r i t h m   o f   t h e   f o r m :  
       *   < p r e >  
       *             x 1   =   x 0   -   f ( x 0 ) / f ' ( x 0 )  
       *   < / p r e >  
       *   w h e r e   < c o d e > x 1 < / c o d e >   i s   t h e   c u r r e n t   e s t i m a t e ,  
       *   < c o d e > x 0 < / c o d e >   i s   t h e   p r e v i o u s   e s t i m a t e ,   a n d  
       *   < c o d e > f ' ( x 0 ) < / c o d e >   i s   t h e   d e r i v a t i v e   o f   < c o d e > f ( ) < / c o d e >   e v a l u a t e d   a t   < c o d e > x 0 < / c o d e > .  
       *   F o r   t h e   s q u a r e   r o o t   f u n c t i o n ,   t h e   a l g o r i t h m   r e d u c e s   t o :  
       *   < p r e >  
       *           x 0   =   i n / 2                                                   [ i n i t i a l   g u e s s ]  
       *           x 1   =   1 / 2   *   (   x 0   +   i n   /   x 0 )                 [ e a c h   i t e r a t i o n ]  
       *   < / p r e >  
       * /  
  
  
     / * *  
       *   @ a d d t o g r o u p   S Q R T  
       *   @ {  
       * /  
  
     / * *  
       *   @ b r i e f     F l o a t i n g - p o i n t   s q u a r e   r o o t   f u n c t i o n .  
       *   @ p a r a m [ i n ]     i n         i n p u t   v a l u e .  
       *   @ p a r a m [ o u t ]   p O u t     s q u a r e   r o o t   o f   i n p u t   v a l u e .  
       *   @ r e t u r n   T h e   f u n c t i o n   r e t u r n s   A R M _ M A T H _ S U C C E S S   i f   i n p u t   v a l u e   i s   p o s i t i v e   v a l u e   o r   A R M _ M A T H _ A R G U M E N T _ E R R O R   i f  
       *   < c o d e > i n < / c o d e >   i s   n e g a t i v e   v a l u e   a n d   r e t u r n s   z e r o   o u t p u t   f o r   n e g a t i v e   v a l u e s .  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   a r m _ s t a t u s   a r m _ s q r t _ f 3 2 (  
     f l o a t 3 2 _ t   i n ,  
     f l o a t 3 2 _ t   *   p O u t )  
     {  
         i f   ( i n   > =   0 . 0 f )  
         {  
  
 # i f       ( _ _ F P U _ U S E D   = =   1 )   & &   d e f i n e d   (   _ _ C C _ A R M       )  
             * p O u t   =   _ _ s q r t f ( i n ) ;  
 # e l i f   ( _ _ F P U _ U S E D   = =   1 )   & &   ( d e f i n e d ( _ _ A R M C C _ V E R S I O N )   & &   ( _ _ A R M C C _ V E R S I O N   > =   6 0 1 0 0 5 0 ) )  
             * p O u t   =   _ _ b u i l t i n _ s q r t f ( i n ) ;  
 # e l i f   ( _ _ F P U _ U S E D   = =   1 )   & &   d e f i n e d ( _ _ G N U C _ _ )  
             * p O u t   =   _ _ b u i l t i n _ s q r t f ( i n ) ;  
 # e l i f   ( _ _ F P U _ U S E D   = =   1 )   & &   d e f i n e d   (   _ _ I C C A R M _ _   )   & &   ( _ _ V E R _ _   > =   6 0 4 0 0 0 0 )  
             _ _ A S M ( " V S Q R T . F 3 2   % 0 , % 1 "   :   " = t " ( * p O u t )   :   " t " ( i n ) ) ;  
 # e l s e  
             * p O u t   =   s q r t f ( i n ) ;  
 # e n d i f  
  
             r e t u r n   ( A R M _ M A T H _ S U C C E S S ) ;  
         }  
         e l s e  
         {  
             * p O u t   =   0 . 0 f ;  
             r e t u r n   ( A R M _ M A T H _ A R G U M E N T _ E R R O R ) ;  
         }  
     }  
  
  
     / * *  
       *   @ b r i e f   Q 3 1   s q u a r e   r o o t   f u n c t i o n .  
       *   @ p a r a m [ i n ]     i n         i n p u t   v a l u e .     T h e   r a n g e   o f   t h e   i n p u t   v a l u e   i s   [ 0   + 1 )   o r   0 x 0 0 0 0 0 0 0 0   t o   0 x 7 F F F F F F F .  
       *   @ p a r a m [ o u t ]   p O u t     s q u a r e   r o o t   o f   i n p u t   v a l u e .  
       *   @ r e t u r n   T h e   f u n c t i o n   r e t u r n s   A R M _ M A T H _ S U C C E S S   i f   i n p u t   v a l u e   i s   p o s i t i v e   v a l u e   o r   A R M _ M A T H _ A R G U M E N T _ E R R O R   i f  
       *   < c o d e > i n < / c o d e >   i s   n e g a t i v e   v a l u e   a n d   r e t u r n s   z e r o   o u t p u t   f o r   n e g a t i v e   v a l u e s .  
       * /  
     a r m _ s t a t u s   a r m _ s q r t _ q 3 1 (  
     q 3 1 _ t   i n ,  
     q 3 1 _ t   *   p O u t ) ;  
  
  
     / * *  
       *   @ b r i e f     Q 1 5   s q u a r e   r o o t   f u n c t i o n .  
       *   @ p a r a m [ i n ]     i n         i n p u t   v a l u e .     T h e   r a n g e   o f   t h e   i n p u t   v a l u e   i s   [ 0   + 1 )   o r   0 x 0 0 0 0   t o   0 x 7 F F F .  
       *   @ p a r a m [ o u t ]   p O u t     s q u a r e   r o o t   o f   i n p u t   v a l u e .  
       *   @ r e t u r n   T h e   f u n c t i o n   r e t u r n s   A R M _ M A T H _ S U C C E S S   i f   i n p u t   v a l u e   i s   p o s i t i v e   v a l u e   o r   A R M _ M A T H _ A R G U M E N T _ E R R O R   i f  
       *   < c o d e > i n < / c o d e >   i s   n e g a t i v e   v a l u e   a n d   r e t u r n s   z e r o   o u t p u t   f o r   n e g a t i v e   v a l u e s .  
       * /  
     a r m _ s t a t u s   a r m _ s q r t _ q 1 5 (  
     q 1 5 _ t   i n ,  
     q 1 5 _ t   *   p O u t ) ;  
  
     / * *  
       *   @ }   e n d   o f   S Q R T   g r o u p  
       * /  
  
  
     / * *  
       *   @ b r i e f   f l o a t i n g - p o i n t   C i r c u l a r   w r i t e   f u n c t i o n .  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   v o i d   a r m _ c i r c u l a r W r i t e _ f 3 2 (  
     i n t 3 2 _ t   *   c i r c B u f f e r ,  
     i n t 3 2 _ t   L ,  
     u i n t 1 6 _ t   *   w r i t e O f f s e t ,  
     i n t 3 2 _ t   b u f f e r I n c ,  
     c o n s t   i n t 3 2 _ t   *   s r c ,  
     i n t 3 2 _ t   s r c I n c ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
     {  
         u i n t 3 2 _ t   i   =   0 U ;  
         i n t 3 2 _ t   w O f f s e t ;  
  
         / *   C o p y   t h e   v a l u e   o f   I n d e x   p o i n t e r   t h a t   p o i n t s  
           *   t o   t h e   c u r r e n t   l o c a t i o n   w h e r e   t h e   i n p u t   s a m p l e s   t o   b e   c o p i e d   * /  
         w O f f s e t   =   * w r i t e O f f s e t ;  
  
         / *   L o o p   o v e r   t h e   b l o c k S i z e   * /  
         i   =   b l o c k S i z e ;  
  
         w h i l e   ( i   >   0 U )  
         {  
             / *   c o p y   t h e   i n p u t   s a m p l e   t o   t h e   c i r c u l a r   b u f f e r   * /  
             c i r c B u f f e r [ w O f f s e t ]   =   * s r c ;  
  
             / *   U p d a t e   t h e   i n p u t   p o i n t e r   * /  
             s r c   + =   s r c I n c ;  
  
             / *   C i r c u l a r l y   u p d a t e   w O f f s e t .     W a t c h   o u t   f o r   p o s i t i v e   a n d   n e g a t i v e   v a l u e   * /  
             w O f f s e t   + =   b u f f e r I n c ;  
             i f   ( w O f f s e t   > =   L )  
                 w O f f s e t   - =   L ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             i - - ;  
         }  
  
         / *   U p d a t e   t h e   i n d e x   p o i n t e r   * /  
         * w r i t e O f f s e t   =   ( u i n t 1 6 _ t ) w O f f s e t ;  
     }  
  
  
  
     / * *  
       *   @ b r i e f   f l o a t i n g - p o i n t   C i r c u l a r   R e a d   f u n c t i o n .  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   v o i d   a r m _ c i r c u l a r R e a d _ f 3 2 (  
     i n t 3 2 _ t   *   c i r c B u f f e r ,  
     i n t 3 2 _ t   L ,  
     i n t 3 2 _ t   *   r e a d O f f s e t ,  
     i n t 3 2 _ t   b u f f e r I n c ,  
     i n t 3 2 _ t   *   d s t ,  
     i n t 3 2 _ t   *   d s t _ b a s e ,  
     i n t 3 2 _ t   d s t _ l e n g t h ,  
     i n t 3 2 _ t   d s t I n c ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
     {  
         u i n t 3 2 _ t   i   =   0 U ;  
         i n t 3 2 _ t   r O f f s e t ,   d s t _ e n d ;  
  
         / *   C o p y   t h e   v a l u e   o f   I n d e x   p o i n t e r   t h a t   p o i n t s  
           *   t o   t h e   c u r r e n t   l o c a t i o n   f r o m   w h e r e   t h e   i n p u t   s a m p l e s   t o   b e   r e a d   * /  
         r O f f s e t   =   * r e a d O f f s e t ;  
         d s t _ e n d   =   ( i n t 3 2 _ t )   ( d s t _ b a s e   +   d s t _ l e n g t h ) ;  
  
         / *   L o o p   o v e r   t h e   b l o c k S i z e   * /  
         i   =   b l o c k S i z e ;  
  
         w h i l e   ( i   >   0 U )  
         {  
             / *   c o p y   t h e   s a m p l e   f r o m   t h e   c i r c u l a r   b u f f e r   t o   t h e   d e s t i n a t i o n   b u f f e r   * /  
             * d s t   =   c i r c B u f f e r [ r O f f s e t ] ;  
  
             / *   U p d a t e   t h e   i n p u t   p o i n t e r   * /  
             d s t   + =   d s t I n c ;  
  
             i f   ( d s t   = =   ( i n t 3 2 _ t   * )   d s t _ e n d )  
             {  
                 d s t   =   d s t _ b a s e ;  
             }  
  
             / *   C i r c u l a r l y   u p d a t e   r O f f s e t .     W a t c h   o u t   f o r   p o s i t i v e   a n d   n e g a t i v e   v a l u e     * /  
             r O f f s e t   + =   b u f f e r I n c ;  
  
             i f   ( r O f f s e t   > =   L )  
             {  
                 r O f f s e t   - =   L ;  
             }  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             i - - ;  
         }  
  
         / *   U p d a t e   t h e   i n d e x   p o i n t e r   * /  
         * r e a d O f f s e t   =   r O f f s e t ;  
     }  
  
  
     / * *  
       *   @ b r i e f   Q 1 5   C i r c u l a r   w r i t e   f u n c t i o n .  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   v o i d   a r m _ c i r c u l a r W r i t e _ q 1 5 (  
     q 1 5 _ t   *   c i r c B u f f e r ,  
     i n t 3 2 _ t   L ,  
     u i n t 1 6 _ t   *   w r i t e O f f s e t ,  
     i n t 3 2 _ t   b u f f e r I n c ,  
     c o n s t   q 1 5 _ t   *   s r c ,  
     i n t 3 2 _ t   s r c I n c ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
     {  
         u i n t 3 2 _ t   i   =   0 U ;  
         i n t 3 2 _ t   w O f f s e t ;  
  
         / *   C o p y   t h e   v a l u e   o f   I n d e x   p o i n t e r   t h a t   p o i n t s  
           *   t o   t h e   c u r r e n t   l o c a t i o n   w h e r e   t h e   i n p u t   s a m p l e s   t o   b e   c o p i e d   * /  
         w O f f s e t   =   * w r i t e O f f s e t ;  
  
         / *   L o o p   o v e r   t h e   b l o c k S i z e   * /  
         i   =   b l o c k S i z e ;  
  
         w h i l e   ( i   >   0 U )  
         {  
             / *   c o p y   t h e   i n p u t   s a m p l e   t o   t h e   c i r c u l a r   b u f f e r   * /  
             c i r c B u f f e r [ w O f f s e t ]   =   * s r c ;  
  
             / *   U p d a t e   t h e   i n p u t   p o i n t e r   * /  
             s r c   + =   s r c I n c ;  
  
             / *   C i r c u l a r l y   u p d a t e   w O f f s e t .     W a t c h   o u t   f o r   p o s i t i v e   a n d   n e g a t i v e   v a l u e   * /  
             w O f f s e t   + =   b u f f e r I n c ;  
             i f   ( w O f f s e t   > =   L )  
                 w O f f s e t   - =   L ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             i - - ;  
         }  
  
         / *   U p d a t e   t h e   i n d e x   p o i n t e r   * /  
         * w r i t e O f f s e t   =   ( u i n t 1 6 _ t ) w O f f s e t ;  
     }  
  
  
     / * *  
       *   @ b r i e f   Q 1 5   C i r c u l a r   R e a d   f u n c t i o n .  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   v o i d   a r m _ c i r c u l a r R e a d _ q 1 5 (  
     q 1 5 _ t   *   c i r c B u f f e r ,  
     i n t 3 2 _ t   L ,  
     i n t 3 2 _ t   *   r e a d O f f s e t ,  
     i n t 3 2 _ t   b u f f e r I n c ,  
     q 1 5 _ t   *   d s t ,  
     q 1 5 _ t   *   d s t _ b a s e ,  
     i n t 3 2 _ t   d s t _ l e n g t h ,  
     i n t 3 2 _ t   d s t I n c ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
     {  
         u i n t 3 2 _ t   i   =   0 ;  
         i n t 3 2 _ t   r O f f s e t ,   d s t _ e n d ;  
  
         / *   C o p y   t h e   v a l u e   o f   I n d e x   p o i n t e r   t h a t   p o i n t s  
           *   t o   t h e   c u r r e n t   l o c a t i o n   f r o m   w h e r e   t h e   i n p u t   s a m p l e s   t o   b e   r e a d   * /  
         r O f f s e t   =   * r e a d O f f s e t ;  
  
         d s t _ e n d   =   ( i n t 3 2 _ t )   ( d s t _ b a s e   +   d s t _ l e n g t h ) ;  
  
         / *   L o o p   o v e r   t h e   b l o c k S i z e   * /  
         i   =   b l o c k S i z e ;  
  
         w h i l e   ( i   >   0 U )  
         {  
             / *   c o p y   t h e   s a m p l e   f r o m   t h e   c i r c u l a r   b u f f e r   t o   t h e   d e s t i n a t i o n   b u f f e r   * /  
             * d s t   =   c i r c B u f f e r [ r O f f s e t ] ;  
  
             / *   U p d a t e   t h e   i n p u t   p o i n t e r   * /  
             d s t   + =   d s t I n c ;  
  
             i f   ( d s t   = =   ( q 1 5 _ t   * )   d s t _ e n d )  
             {  
                 d s t   =   d s t _ b a s e ;  
             }  
  
             / *   C i r c u l a r l y   u p d a t e   w O f f s e t .     W a t c h   o u t   f o r   p o s i t i v e   a n d   n e g a t i v e   v a l u e   * /  
             r O f f s e t   + =   b u f f e r I n c ;  
  
             i f   ( r O f f s e t   > =   L )  
             {  
                 r O f f s e t   - =   L ;  
             }  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             i - - ;  
         }  
  
         / *   U p d a t e   t h e   i n d e x   p o i n t e r   * /  
         * r e a d O f f s e t   =   r O f f s e t ;  
     }  
  
  
     / * *  
       *   @ b r i e f   Q 7   C i r c u l a r   w r i t e   f u n c t i o n .  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   v o i d   a r m _ c i r c u l a r W r i t e _ q 7 (  
     q 7 _ t   *   c i r c B u f f e r ,  
     i n t 3 2 _ t   L ,  
     u i n t 1 6 _ t   *   w r i t e O f f s e t ,  
     i n t 3 2 _ t   b u f f e r I n c ,  
     c o n s t   q 7 _ t   *   s r c ,  
     i n t 3 2 _ t   s r c I n c ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
     {  
         u i n t 3 2 _ t   i   =   0 U ;  
         i n t 3 2 _ t   w O f f s e t ;  
  
         / *   C o p y   t h e   v a l u e   o f   I n d e x   p o i n t e r   t h a t   p o i n t s  
           *   t o   t h e   c u r r e n t   l o c a t i o n   w h e r e   t h e   i n p u t   s a m p l e s   t o   b e   c o p i e d   * /  
         w O f f s e t   =   * w r i t e O f f s e t ;  
  
         / *   L o o p   o v e r   t h e   b l o c k S i z e   * /  
         i   =   b l o c k S i z e ;  
  
         w h i l e   ( i   >   0 U )  
         {  
             / *   c o p y   t h e   i n p u t   s a m p l e   t o   t h e   c i r c u l a r   b u f f e r   * /  
             c i r c B u f f e r [ w O f f s e t ]   =   * s r c ;  
  
             / *   U p d a t e   t h e   i n p u t   p o i n t e r   * /  
             s r c   + =   s r c I n c ;  
  
             / *   C i r c u l a r l y   u p d a t e   w O f f s e t .     W a t c h   o u t   f o r   p o s i t i v e   a n d   n e g a t i v e   v a l u e   * /  
             w O f f s e t   + =   b u f f e r I n c ;  
             i f   ( w O f f s e t   > =   L )  
                 w O f f s e t   - =   L ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             i - - ;  
         }  
  
         / *   U p d a t e   t h e   i n d e x   p o i n t e r   * /  
         * w r i t e O f f s e t   =   ( u i n t 1 6 _ t ) w O f f s e t ;  
     }  
  
  
     / * *  
       *   @ b r i e f   Q 7   C i r c u l a r   R e a d   f u n c t i o n .  
       * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   v o i d   a r m _ c i r c u l a r R e a d _ q 7 (  
     q 7 _ t   *   c i r c B u f f e r ,  
     i n t 3 2 _ t   L ,  
     i n t 3 2 _ t   *   r e a d O f f s e t ,  
     i n t 3 2 _ t   b u f f e r I n c ,  
     q 7 _ t   *   d s t ,  
     q 7 _ t   *   d s t _ b a s e ,  
     i n t 3 2 _ t   d s t _ l e n g t h ,  
     i n t 3 2 _ t   d s t I n c ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
     {  
         u i n t 3 2 _ t   i   =   0 ;  
         i n t 3 2 _ t   r O f f s e t ,   d s t _ e n d ;  
  
         / *   C o p y   t h e   v a l u e   o f   I n d e x   p o i n t e r   t h a t   p o i n t s  
           *   t o   t h e   c u r r e n t   l o c a t i o n   f r o m   w h e r e   t h e   i n p u t   s a m p l e s   t o   b e   r e a d   * /  
         r O f f s e t   =   * r e a d O f f s e t ;  
  
         d s t _ e n d   =   ( i n t 3 2 _ t )   ( d s t _ b a s e   +   d s t _ l e n g t h ) ;  
  
         / *   L o o p   o v e r   t h e   b l o c k S i z e   * /  
         i   =   b l o c k S i z e ;  
  
         w h i l e   ( i   >   0 U )  
         {  
             / *   c o p y   t h e   s a m p l e   f r o m   t h e   c i r c u l a r   b u f f e r   t o   t h e   d e s t i n a t i o n   b u f f e r   * /  
             * d s t   =   c i r c B u f f e r [ r O f f s e t ] ;  
  
             / *   U p d a t e   t h e   i n p u t   p o i n t e r   * /  
             d s t   + =   d s t I n c ;  
  
             i f   ( d s t   = =   ( q 7 _ t   * )   d s t _ e n d )  
             {  
                 d s t   =   d s t _ b a s e ;  
             }  
  
             / *   C i r c u l a r l y   u p d a t e   r O f f s e t .     W a t c h   o u t   f o r   p o s i t i v e   a n d   n e g a t i v e   v a l u e   * /  
             r O f f s e t   + =   b u f f e r I n c ;  
  
             i f   ( r O f f s e t   > =   L )  
             {  
                 r O f f s e t   - =   L ;  
             }  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             i - - ;  
         }  
  
         / *   U p d a t e   t h e   i n d e x   p o i n t e r   * /  
         * r e a d O f f s e t   =   r O f f s e t ;  
     }  
  
  
     / * *  
       *   @ b r i e f     S u m   o f   t h e   s q u a r e s   o f   t h e   e l e m e n t s   o f   a   Q 3 1   v e c t o r .  
       *   @ p a r a m [ i n ]     p S r c               i s   i n p u t   p o i n t e r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     i s   t h e   n u m b e r   o f   s a m p l e s   t o   p r o c e s s  
       *   @ p a r a m [ o u t ]   p R e s u l t         i s   o u t p u t   v a l u e .  
       * /  
     v o i d   a r m _ p o w e r _ q 3 1 (  
     q 3 1 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 6 3 _ t   *   p R e s u l t ) ;  
  
  
     / * *  
       *   @ b r i e f     S u m   o f   t h e   s q u a r e s   o f   t h e   e l e m e n t s   o f   a   f l o a t i n g - p o i n t   v e c t o r .  
       *   @ p a r a m [ i n ]     p S r c               i s   i n p u t   p o i n t e r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     i s   t h e   n u m b e r   o f   s a m p l e s   t o   p r o c e s s  
       *   @ p a r a m [ o u t ]   p R e s u l t         i s   o u t p u t   v a l u e .  
       * /  
     v o i d   a r m _ p o w e r _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     f l o a t 3 2 _ t   *   p R e s u l t ) ;  
  
  
     / * *  
       *   @ b r i e f     S u m   o f   t h e   s q u a r e s   o f   t h e   e l e m e n t s   o f   a   Q 1 5   v e c t o r .  
       *   @ p a r a m [ i n ]     p S r c               i s   i n p u t   p o i n t e r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     i s   t h e   n u m b e r   o f   s a m p l e s   t o   p r o c e s s  
       *   @ p a r a m [ o u t ]   p R e s u l t         i s   o u t p u t   v a l u e .  
       * /  
     v o i d   a r m _ p o w e r _ q 1 5 (  
     q 1 5 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 6 3 _ t   *   p R e s u l t ) ;  
  
  
     / * *  
       *   @ b r i e f     S u m   o f   t h e   s q u a r e s   o f   t h e   e l e m e n t s   o f   a   Q 7   v e c t o r .  
       *   @ p a r a m [ i n ]     p S r c               i s   i n p u t   p o i n t e r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     i s   t h e   n u m b e r   o f   s a m p l e s   t o   p r o c e s s  
       *   @ p a r a m [ o u t ]   p R e s u l t         i s   o u t p u t   v a l u e .  
       * /  
     v o i d   a r m _ p o w e r _ q 7 (  
     q 7 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 3 1 _ t   *   p R e s u l t ) ;  
  
  
     / * *  
       *   @ b r i e f     M e a n   v a l u e   o f   a   Q 7   v e c t o r .  
       *   @ p a r a m [ i n ]     p S r c               i s   i n p u t   p o i n t e r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     i s   t h e   n u m b e r   o f   s a m p l e s   t o   p r o c e s s  
       *   @ p a r a m [ o u t ]   p R e s u l t         i s   o u t p u t   v a l u e .  
       * /  
     v o i d   a r m _ m e a n _ q 7 (  
     q 7 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 7 _ t   *   p R e s u l t ) ;  
  
  
     / * *  
       *   @ b r i e f     M e a n   v a l u e   o f   a   Q 1 5   v e c t o r .  
       *   @ p a r a m [ i n ]     p S r c               i s   i n p u t   p o i n t e r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     i s   t h e   n u m b e r   o f   s a m p l e s   t o   p r o c e s s  
       *   @ p a r a m [ o u t ]   p R e s u l t         i s   o u t p u t   v a l u e .  
       * /  
     v o i d   a r m _ m e a n _ q 1 5 (  
     q 1 5 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 1 5 _ t   *   p R e s u l t ) ;  
  
  
     / * *  
       *   @ b r i e f     M e a n   v a l u e   o f   a   Q 3 1   v e c t o r .  
       *   @ p a r a m [ i n ]     p S r c               i s   i n p u t   p o i n t e r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     i s   t h e   n u m b e r   o f   s a m p l e s   t o   p r o c e s s  
       *   @ p a r a m [ o u t ]   p R e s u l t         i s   o u t p u t   v a l u e .  
       * /  
     v o i d   a r m _ m e a n _ q 3 1 (  
     q 3 1 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 3 1 _ t   *   p R e s u l t ) ;  
  
  
     / * *  
       *   @ b r i e f     M e a n   v a l u e   o f   a   f l o a t i n g - p o i n t   v e c t o r .  
       *   @ p a r a m [ i n ]     p S r c               i s   i n p u t   p o i n t e r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     i s   t h e   n u m b e r   o f   s a m p l e s   t o   p r o c e s s  
       *   @ p a r a m [ o u t ]   p R e s u l t         i s   o u t p u t   v a l u e .  
       * /  
     v o i d   a r m _ m e a n _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     f l o a t 3 2 _ t   *   p R e s u l t ) ;  
  
  
     / * *  
       *   @ b r i e f     V a r i a n c e   o f   t h e   e l e m e n t s   o f   a   f l o a t i n g - p o i n t   v e c t o r .  
       *   @ p a r a m [ i n ]     p S r c               i s   i n p u t   p o i n t e r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     i s   t h e   n u m b e r   o f   s a m p l e s   t o   p r o c e s s  
       *   @ p a r a m [ o u t ]   p R e s u l t         i s   o u t p u t   v a l u e .  
       * /  
     v o i d   a r m _ v a r _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     f l o a t 3 2 _ t   *   p R e s u l t ) ;  
  
  
     / * *  
       *   @ b r i e f     V a r i a n c e   o f   t h e   e l e m e n t s   o f   a   Q 3 1   v e c t o r .  
       *   @ p a r a m [ i n ]     p S r c               i s   i n p u t   p o i n t e r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     i s   t h e   n u m b e r   o f   s a m p l e s   t o   p r o c e s s  
       *   @ p a r a m [ o u t ]   p R e s u l t         i s   o u t p u t   v a l u e .  
       * /  
     v o i d   a r m _ v a r _ q 3 1 (  
     q 3 1 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 3 1 _ t   *   p R e s u l t ) ;  
  
  
     / * *  
       *   @ b r i e f     V a r i a n c e   o f   t h e   e l e m e n t s   o f   a   Q 1 5   v e c t o r .  
       *   @ p a r a m [ i n ]     p S r c               i s   i n p u t   p o i n t e r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     i s   t h e   n u m b e r   o f   s a m p l e s   t o   p r o c e s s  
       *   @ p a r a m [ o u t ]   p R e s u l t         i s   o u t p u t   v a l u e .  
       * /  
     v o i d   a r m _ v a r _ q 1 5 (  
     q 1 5 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 1 5 _ t   *   p R e s u l t ) ;  
  
  
     / * *  
       *   @ b r i e f     R o o t   M e a n   S q u a r e   o f   t h e   e l e m e n t s   o f   a   f l o a t i n g - p o i n t   v e c t o r .  
       *   @ p a r a m [ i n ]     p S r c               i s   i n p u t   p o i n t e r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     i s   t h e   n u m b e r   o f   s a m p l e s   t o   p r o c e s s  
       *   @ p a r a m [ o u t ]   p R e s u l t         i s   o u t p u t   v a l u e .  
       * /  
     v o i d   a r m _ r m s _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     f l o a t 3 2 _ t   *   p R e s u l t ) ;  
  
  
     / * *  
       *   @ b r i e f     R o o t   M e a n   S q u a r e   o f   t h e   e l e m e n t s   o f   a   Q 3 1   v e c t o r .  
       *   @ p a r a m [ i n ]     p S r c               i s   i n p u t   p o i n t e r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     i s   t h e   n u m b e r   o f   s a m p l e s   t o   p r o c e s s  
       *   @ p a r a m [ o u t ]   p R e s u l t         i s   o u t p u t   v a l u e .  
       * /  
     v o i d   a r m _ r m s _ q 3 1 (  
     q 3 1 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 3 1 _ t   *   p R e s u l t ) ;  
  
  
     / * *  
       *   @ b r i e f     R o o t   M e a n   S q u a r e   o f   t h e   e l e m e n t s   o f   a   Q 1 5   v e c t o r .  
       *   @ p a r a m [ i n ]     p S r c               i s   i n p u t   p o i n t e r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     i s   t h e   n u m b e r   o f   s a m p l e s   t o   p r o c e s s  
       *   @ p a r a m [ o u t ]   p R e s u l t         i s   o u t p u t   v a l u e .  
       * /  
     v o i d   a r m _ r m s _ q 1 5 (  
     q 1 5 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 1 5 _ t   *   p R e s u l t ) ;  
  
  
     / * *  
       *   @ b r i e f     S t a n d a r d   d e v i a t i o n   o f   t h e   e l e m e n t s   o f   a   f l o a t i n g - p o i n t   v e c t o r .  
       *   @ p a r a m [ i n ]     p S r c               i s   i n p u t   p o i n t e r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     i s   t h e   n u m b e r   o f   s a m p l e s   t o   p r o c e s s  
       *   @ p a r a m [ o u t ]   p R e s u l t         i s   o u t p u t   v a l u e .  
       * /  
     v o i d   a r m _ s t d _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     f l o a t 3 2 _ t   *   p R e s u l t ) ;  
  
  
     / * *  
       *   @ b r i e f     S t a n d a r d   d e v i a t i o n   o f   t h e   e l e m e n t s   o f   a   Q 3 1   v e c t o r .  
       *   @ p a r a m [ i n ]     p S r c               i s   i n p u t   p o i n t e r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     i s   t h e   n u m b e r   o f   s a m p l e s   t o   p r o c e s s  
       *   @ p a r a m [ o u t ]   p R e s u l t         i s   o u t p u t   v a l u e .  
       * /  
     v o i d   a r m _ s t d _ q 3 1 (  
     q 3 1 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 3 1 _ t   *   p R e s u l t ) ;  
  
  
     / * *  
       *   @ b r i e f     S t a n d a r d   d e v i a t i o n   o f   t h e   e l e m e n t s   o f   a   Q 1 5   v e c t o r .  
       *   @ p a r a m [ i n ]     p S r c               i s   i n p u t   p o i n t e r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     i s   t h e   n u m b e r   o f   s a m p l e s   t o   p r o c e s s  
       *   @ p a r a m [ o u t ]   p R e s u l t         i s   o u t p u t   v a l u e .  
       * /  
     v o i d   a r m _ s t d _ q 1 5 (  
     q 1 5 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 1 5 _ t   *   p R e s u l t ) ;  
  
  
     / * *  
       *   @ b r i e f     F l o a t i n g - p o i n t   c o m p l e x   m a g n i t u d e  
       *   @ p a r a m [ i n ]     p S r c                 p o i n t s   t o   t h e   c o m p l e x   i n p u t   v e c t o r  
       *   @ p a r a m [ o u t ]   p D s t                 p o i n t s   t o   t h e   r e a l   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n ]     n u m S a m p l e s     n u m b e r   o f   c o m p l e x   s a m p l e s   i n   t h e   i n p u t   v e c t o r  
       * /  
     v o i d   a r m _ c m p l x _ m a g _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   n u m S a m p l e s ) ;  
  
  
     / * *  
       *   @ b r i e f     Q 3 1   c o m p l e x   m a g n i t u d e  
       *   @ p a r a m [ i n ]     p S r c                 p o i n t s   t o   t h e   c o m p l e x   i n p u t   v e c t o r  
       *   @ p a r a m [ o u t ]   p D s t                 p o i n t s   t o   t h e   r e a l   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n ]     n u m S a m p l e s     n u m b e r   o f   c o m p l e x   s a m p l e s   i n   t h e   i n p u t   v e c t o r  
       * /  
     v o i d   a r m _ c m p l x _ m a g _ q 3 1 (  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   n u m S a m p l e s ) ;  
  
  
     / * *  
       *   @ b r i e f     Q 1 5   c o m p l e x   m a g n i t u d e  
       *   @ p a r a m [ i n ]     p S r c                 p o i n t s   t o   t h e   c o m p l e x   i n p u t   v e c t o r  
       *   @ p a r a m [ o u t ]   p D s t                 p o i n t s   t o   t h e   r e a l   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n ]     n u m S a m p l e s     n u m b e r   o f   c o m p l e x   s a m p l e s   i n   t h e   i n p u t   v e c t o r  
       * /  
     v o i d   a r m _ c m p l x _ m a g _ q 1 5 (  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   n u m S a m p l e s ) ;  
  
  
     / * *  
       *   @ b r i e f     Q 1 5   c o m p l e x   d o t   p r o d u c t  
       *   @ p a r a m [ i n ]     p S r c A               p o i n t s   t o   t h e   f i r s t   i n p u t   v e c t o r  
       *   @ p a r a m [ i n ]     p S r c B               p o i n t s   t o   t h e   s e c o n d   i n p u t   v e c t o r  
       *   @ p a r a m [ i n ]     n u m S a m p l e s     n u m b e r   o f   c o m p l e x   s a m p l e s   i n   e a c h   v e c t o r  
       *   @ p a r a m [ o u t ]   r e a l R e s u l t     r e a l   p a r t   o f   t h e   r e s u l t   r e t u r n e d   h e r e  
       *   @ p a r a m [ o u t ]   i m a g R e s u l t     i m a g i n a r y   p a r t   o f   t h e   r e s u l t   r e t u r n e d   h e r e  
       * /  
     v o i d   a r m _ c m p l x _ d o t _ p r o d _ q 1 5 (  
     q 1 5 _ t   *   p S r c A ,  
     q 1 5 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   n u m S a m p l e s ,  
     q 3 1 _ t   *   r e a l R e s u l t ,  
     q 3 1 _ t   *   i m a g R e s u l t ) ;  
  
  
     / * *  
       *   @ b r i e f     Q 3 1   c o m p l e x   d o t   p r o d u c t  
       *   @ p a r a m [ i n ]     p S r c A               p o i n t s   t o   t h e   f i r s t   i n p u t   v e c t o r  
       *   @ p a r a m [ i n ]     p S r c B               p o i n t s   t o   t h e   s e c o n d   i n p u t   v e c t o r  
       *   @ p a r a m [ i n ]     n u m S a m p l e s     n u m b e r   o f   c o m p l e x   s a m p l e s   i n   e a c h   v e c t o r  
       *   @ p a r a m [ o u t ]   r e a l R e s u l t     r e a l   p a r t   o f   t h e   r e s u l t   r e t u r n e d   h e r e  
       *   @ p a r a m [ o u t ]   i m a g R e s u l t     i m a g i n a r y   p a r t   o f   t h e   r e s u l t   r e t u r n e d   h e r e  
       * /  
     v o i d   a r m _ c m p l x _ d o t _ p r o d _ q 3 1 (  
     q 3 1 _ t   *   p S r c A ,  
     q 3 1 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   n u m S a m p l e s ,  
     q 6 3 _ t   *   r e a l R e s u l t ,  
     q 6 3 _ t   *   i m a g R e s u l t ) ;  
  
  
     / * *  
       *   @ b r i e f     F l o a t i n g - p o i n t   c o m p l e x   d o t   p r o d u c t  
       *   @ p a r a m [ i n ]     p S r c A               p o i n t s   t o   t h e   f i r s t   i n p u t   v e c t o r  
       *   @ p a r a m [ i n ]     p S r c B               p o i n t s   t o   t h e   s e c o n d   i n p u t   v e c t o r  
       *   @ p a r a m [ i n ]     n u m S a m p l e s     n u m b e r   o f   c o m p l e x   s a m p l e s   i n   e a c h   v e c t o r  
       *   @ p a r a m [ o u t ]   r e a l R e s u l t     r e a l   p a r t   o f   t h e   r e s u l t   r e t u r n e d   h e r e  
       *   @ p a r a m [ o u t ]   i m a g R e s u l t     i m a g i n a r y   p a r t   o f   t h e   r e s u l t   r e t u r n e d   h e r e  
       * /  
     v o i d   a r m _ c m p l x _ d o t _ p r o d _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c A ,  
     f l o a t 3 2 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   n u m S a m p l e s ,  
     f l o a t 3 2 _ t   *   r e a l R e s u l t ,  
     f l o a t 3 2 _ t   *   i m a g R e s u l t ) ;  
  
  
     / * *  
       *   @ b r i e f     Q 1 5   c o m p l e x - b y - r e a l   m u l t i p l i c a t i o n  
       *   @ p a r a m [ i n ]     p S r c C m p l x       p o i n t s   t o   t h e   c o m p l e x   i n p u t   v e c t o r  
       *   @ p a r a m [ i n ]     p S r c R e a l         p o i n t s   t o   t h e   r e a l   i n p u t   v e c t o r  
       *   @ p a r a m [ o u t ]   p C m p l x D s t       p o i n t s   t o   t h e   c o m p l e x   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n ]     n u m S a m p l e s     n u m b e r   o f   s a m p l e s   i n   e a c h   v e c t o r  
       * /  
     v o i d   a r m _ c m p l x _ m u l t _ r e a l _ q 1 5 (  
     q 1 5 _ t   *   p S r c C m p l x ,  
     q 1 5 _ t   *   p S r c R e a l ,  
     q 1 5 _ t   *   p C m p l x D s t ,  
     u i n t 3 2 _ t   n u m S a m p l e s ) ;  
  
  
     / * *  
       *   @ b r i e f     Q 3 1   c o m p l e x - b y - r e a l   m u l t i p l i c a t i o n  
       *   @ p a r a m [ i n ]     p S r c C m p l x       p o i n t s   t o   t h e   c o m p l e x   i n p u t   v e c t o r  
       *   @ p a r a m [ i n ]     p S r c R e a l         p o i n t s   t o   t h e   r e a l   i n p u t   v e c t o r  
       *   @ p a r a m [ o u t ]   p C m p l x D s t       p o i n t s   t o   t h e   c o m p l e x   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n ]     n u m S a m p l e s     n u m b e r   o f   s a m p l e s   i n   e a c h   v e c t o r  
       * /  
     v o i d   a r m _ c m p l x _ m u l t _ r e a l _ q 3 1 (  
     q 3 1 _ t   *   p S r c C m p l x ,  
     q 3 1 _ t   *   p S r c R e a l ,  
     q 3 1 _ t   *   p C m p l x D s t ,  
     u i n t 3 2 _ t   n u m S a m p l e s ) ;  
  
  
     / * *  
       *   @ b r i e f     F l o a t i n g - p o i n t   c o m p l e x - b y - r e a l   m u l t i p l i c a t i o n  
       *   @ p a r a m [ i n ]     p S r c C m p l x       p o i n t s   t o   t h e   c o m p l e x   i n p u t   v e c t o r  
       *   @ p a r a m [ i n ]     p S r c R e a l         p o i n t s   t o   t h e   r e a l   i n p u t   v e c t o r  
       *   @ p a r a m [ o u t ]   p C m p l x D s t       p o i n t s   t o   t h e   c o m p l e x   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n ]     n u m S a m p l e s     n u m b e r   o f   s a m p l e s   i n   e a c h   v e c t o r  
       * /  
     v o i d   a r m _ c m p l x _ m u l t _ r e a l _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c C m p l x ,  
     f l o a t 3 2 _ t   *   p S r c R e a l ,  
     f l o a t 3 2 _ t   *   p C m p l x D s t ,  
     u i n t 3 2 _ t   n u m S a m p l e s ) ;  
  
  
     / * *  
       *   @ b r i e f     M i n i m u m   v a l u e   o f   a   Q 7   v e c t o r .  
       *   @ p a r a m [ i n ]     p S r c               i s   i n p u t   p o i n t e r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     i s   t h e   n u m b e r   o f   s a m p l e s   t o   p r o c e s s  
       *   @ p a r a m [ o u t ]   r e s u l t           i s   o u t p u t   p o i n t e r  
       *   @ p a r a m [ i n ]     i n d e x             i s   t h e   a r r a y   i n d e x   o f   t h e   m i n i m u m   v a l u e   i n   t h e   i n p u t   b u f f e r .  
       * /  
     v o i d   a r m _ m i n _ q 7 (  
     q 7 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 7 _ t   *   r e s u l t ,  
     u i n t 3 2 _ t   *   i n d e x ) ;  
  
  
     / * *  
       *   @ b r i e f     M i n i m u m   v a l u e   o f   a   Q 1 5   v e c t o r .  
       *   @ p a r a m [ i n ]     p S r c               i s   i n p u t   p o i n t e r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     i s   t h e   n u m b e r   o f   s a m p l e s   t o   p r o c e s s  
       *   @ p a r a m [ o u t ]   p R e s u l t         i s   o u t p u t   p o i n t e r  
       *   @ p a r a m [ i n ]     p I n d e x           i s   t h e   a r r a y   i n d e x   o f   t h e   m i n i m u m   v a l u e   i n   t h e   i n p u t   b u f f e r .  
       * /  
     v o i d   a r m _ m i n _ q 1 5 (  
     q 1 5 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 1 5 _ t   *   p R e s u l t ,  
     u i n t 3 2 _ t   *   p I n d e x ) ;  
  
  
     / * *  
       *   @ b r i e f     M i n i m u m   v a l u e   o f   a   Q 3 1   v e c t o r .  
       *   @ p a r a m [ i n ]     p S r c               i s   i n p u t   p o i n t e r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     i s   t h e   n u m b e r   o f   s a m p l e s   t o   p r o c e s s  
       *   @ p a r a m [ o u t ]   p R e s u l t         i s   o u t p u t   p o i n t e r  
       *   @ p a r a m [ o u t ]   p I n d e x           i s   t h e   a r r a y   i n d e x   o f   t h e   m i n i m u m   v a l u e   i n   t h e   i n p u t   b u f f e r .  
       * /  
     v o i d   a r m _ m i n _ q 3 1 (  
     q 3 1 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 3 1 _ t   *   p R e s u l t ,  
     u i n t 3 2 _ t   *   p I n d e x ) ;  
  
  
     / * *  
       *   @ b r i e f     M i n i m u m   v a l u e   o f   a   f l o a t i n g - p o i n t   v e c t o r .  
       *   @ p a r a m [ i n ]     p S r c               i s   i n p u t   p o i n t e r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     i s   t h e   n u m b e r   o f   s a m p l e s   t o   p r o c e s s  
       *   @ p a r a m [ o u t ]   p R e s u l t         i s   o u t p u t   p o i n t e r  
       *   @ p a r a m [ o u t ]   p I n d e x           i s   t h e   a r r a y   i n d e x   o f   t h e   m i n i m u m   v a l u e   i n   t h e   i n p u t   b u f f e r .  
       * /  
     v o i d   a r m _ m i n _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     f l o a t 3 2 _ t   *   p R e s u l t ,  
     u i n t 3 2 _ t   *   p I n d e x ) ;  
  
  
 / * *  
   *   @ b r i e f   M a x i m u m   v a l u e   o f   a   Q 7   v e c t o r .  
   *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   i n p u t   b u f f e r  
   *   @ p a r a m [ i n ]     b l o c k S i z e     l e n g t h   o f   t h e   i n p u t   v e c t o r  
   *   @ p a r a m [ o u t ]   p R e s u l t         m a x i m u m   v a l u e   r e t u r n e d   h e r e  
   *   @ p a r a m [ o u t ]   p I n d e x           i n d e x   o f   m a x i m u m   v a l u e   r e t u r n e d   h e r e  
   * /  
     v o i d   a r m _ m a x _ q 7 (  
     q 7 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 7 _ t   *   p R e s u l t ,  
     u i n t 3 2 _ t   *   p I n d e x ) ;  
  
  
 / * *  
   *   @ b r i e f   M a x i m u m   v a l u e   o f   a   Q 1 5   v e c t o r .  
   *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   i n p u t   b u f f e r  
   *   @ p a r a m [ i n ]     b l o c k S i z e     l e n g t h   o f   t h e   i n p u t   v e c t o r  
   *   @ p a r a m [ o u t ]   p R e s u l t         m a x i m u m   v a l u e   r e t u r n e d   h e r e  
   *   @ p a r a m [ o u t ]   p I n d e x           i n d e x   o f   m a x i m u m   v a l u e   r e t u r n e d   h e r e  
   * /  
     v o i d   a r m _ m a x _ q 1 5 (  
     q 1 5 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 1 5 _ t   *   p R e s u l t ,  
     u i n t 3 2 _ t   *   p I n d e x ) ;  
  
  
 / * *  
   *   @ b r i e f   M a x i m u m   v a l u e   o f   a   Q 3 1   v e c t o r .  
   *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   i n p u t   b u f f e r  
   *   @ p a r a m [ i n ]     b l o c k S i z e     l e n g t h   o f   t h e   i n p u t   v e c t o r  
   *   @ p a r a m [ o u t ]   p R e s u l t         m a x i m u m   v a l u e   r e t u r n e d   h e r e  
   *   @ p a r a m [ o u t ]   p I n d e x           i n d e x   o f   m a x i m u m   v a l u e   r e t u r n e d   h e r e  
   * /  
     v o i d   a r m _ m a x _ q 3 1 (  
     q 3 1 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 3 1 _ t   *   p R e s u l t ,  
     u i n t 3 2 _ t   *   p I n d e x ) ;  
  
  
 / * *  
   *   @ b r i e f   M a x i m u m   v a l u e   o f   a   f l o a t i n g - p o i n t   v e c t o r .  
   *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   i n p u t   b u f f e r  
   *   @ p a r a m [ i n ]     b l o c k S i z e     l e n g t h   o f   t h e   i n p u t   v e c t o r  
   *   @ p a r a m [ o u t ]   p R e s u l t         m a x i m u m   v a l u e   r e t u r n e d   h e r e  
   *   @ p a r a m [ o u t ]   p I n d e x           i n d e x   o f   m a x i m u m   v a l u e   r e t u r n e d   h e r e  
   * /  
     v o i d   a r m _ m a x _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     f l o a t 3 2 _ t   *   p R e s u l t ,  
     u i n t 3 2 _ t   *   p I n d e x ) ;  
  
  
     / * *  
       *   @ b r i e f     Q 1 5   c o m p l e x - b y - c o m p l e x   m u l t i p l i c a t i o n  
       *   @ p a r a m [ i n ]     p S r c A               p o i n t s   t o   t h e   f i r s t   i n p u t   v e c t o r  
       *   @ p a r a m [ i n ]     p S r c B               p o i n t s   t o   t h e   s e c o n d   i n p u t   v e c t o r  
       *   @ p a r a m [ o u t ]   p D s t                 p o i n t s   t o   t h e   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n ]     n u m S a m p l e s     n u m b e r   o f   c o m p l e x   s a m p l e s   i n   e a c h   v e c t o r  
       * /  
     v o i d   a r m _ c m p l x _ m u l t _ c m p l x _ q 1 5 (  
     q 1 5 _ t   *   p S r c A ,  
     q 1 5 _ t   *   p S r c B ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   n u m S a m p l e s ) ;  
  
  
     / * *  
       *   @ b r i e f     Q 3 1   c o m p l e x - b y - c o m p l e x   m u l t i p l i c a t i o n  
       *   @ p a r a m [ i n ]     p S r c A               p o i n t s   t o   t h e   f i r s t   i n p u t   v e c t o r  
       *   @ p a r a m [ i n ]     p S r c B               p o i n t s   t o   t h e   s e c o n d   i n p u t   v e c t o r  
       *   @ p a r a m [ o u t ]   p D s t                 p o i n t s   t o   t h e   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n ]     n u m S a m p l e s     n u m b e r   o f   c o m p l e x   s a m p l e s   i n   e a c h   v e c t o r  
       * /  
     v o i d   a r m _ c m p l x _ m u l t _ c m p l x _ q 3 1 (  
     q 3 1 _ t   *   p S r c A ,  
     q 3 1 _ t   *   p S r c B ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   n u m S a m p l e s ) ;  
  
  
     / * *  
       *   @ b r i e f     F l o a t i n g - p o i n t   c o m p l e x - b y - c o m p l e x   m u l t i p l i c a t i o n  
       *   @ p a r a m [ i n ]     p S r c A               p o i n t s   t o   t h e   f i r s t   i n p u t   v e c t o r  
       *   @ p a r a m [ i n ]     p S r c B               p o i n t s   t o   t h e   s e c o n d   i n p u t   v e c t o r  
       *   @ p a r a m [ o u t ]   p D s t                 p o i n t s   t o   t h e   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n ]     n u m S a m p l e s     n u m b e r   o f   c o m p l e x   s a m p l e s   i n   e a c h   v e c t o r  
       * /  
     v o i d   a r m _ c m p l x _ m u l t _ c m p l x _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c A ,  
     f l o a t 3 2 _ t   *   p S r c B ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   n u m S a m p l e s ) ;  
  
  
     / * *  
       *   @ b r i e f   C o n v e r t s   t h e   e l e m e n t s   o f   t h e   f l o a t i n g - p o i n t   v e c t o r   t o   Q 3 1   v e c t o r .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   f l o a t i n g - p o i n t   i n p u t   v e c t o r  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   Q 3 1   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     l e n g t h   o f   t h e   i n p u t   v e c t o r  
       * /  
     v o i d   a r m _ f l o a t _ t o _ q 3 1 (  
     f l o a t 3 2 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   C o n v e r t s   t h e   e l e m e n t s   o f   t h e   f l o a t i n g - p o i n t   v e c t o r   t o   Q 1 5   v e c t o r .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   f l o a t i n g - p o i n t   i n p u t   v e c t o r  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   Q 1 5   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     l e n g t h   o f   t h e   i n p u t   v e c t o r  
       * /  
     v o i d   a r m _ f l o a t _ t o _ q 1 5 (  
     f l o a t 3 2 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f   C o n v e r t s   t h e   e l e m e n t s   o f   t h e   f l o a t i n g - p o i n t   v e c t o r   t o   Q 7   v e c t o r .  
       *   @ p a r a m [ i n ]     p S r c               p o i n t s   t o   t h e   f l o a t i n g - p o i n t   i n p u t   v e c t o r  
       *   @ p a r a m [ o u t ]   p D s t               p o i n t s   t o   t h e   Q 7   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     l e n g t h   o f   t h e   i n p u t   v e c t o r  
       * /  
     v o i d   a r m _ f l o a t _ t o _ q 7 (  
     f l o a t 3 2 _ t   *   p S r c ,  
     q 7 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f     C o n v e r t s   t h e   e l e m e n t s   o f   t h e   Q 3 1   v e c t o r   t o   Q 1 5   v e c t o r .  
       *   @ p a r a m [ i n ]     p S r c               i s   i n p u t   p o i n t e r  
       *   @ p a r a m [ o u t ]   p D s t               i s   o u t p u t   p o i n t e r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     i s   t h e   n u m b e r   o f   s a m p l e s   t o   p r o c e s s  
       * /  
     v o i d   a r m _ q 3 1 _ t o _ q 1 5 (  
     q 3 1 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f     C o n v e r t s   t h e   e l e m e n t s   o f   t h e   Q 3 1   v e c t o r   t o   Q 7   v e c t o r .  
       *   @ p a r a m [ i n ]     p S r c               i s   i n p u t   p o i n t e r  
       *   @ p a r a m [ o u t ]   p D s t               i s   o u t p u t   p o i n t e r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     i s   t h e   n u m b e r   o f   s a m p l e s   t o   p r o c e s s  
       * /  
     v o i d   a r m _ q 3 1 _ t o _ q 7 (  
     q 3 1 _ t   *   p S r c ,  
     q 7 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f     C o n v e r t s   t h e   e l e m e n t s   o f   t h e   Q 1 5   v e c t o r   t o   f l o a t i n g - p o i n t   v e c t o r .  
       *   @ p a r a m [ i n ]     p S r c               i s   i n p u t   p o i n t e r  
       *   @ p a r a m [ o u t ]   p D s t               i s   o u t p u t   p o i n t e r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     i s   t h e   n u m b e r   o f   s a m p l e s   t o   p r o c e s s  
       * /  
     v o i d   a r m _ q 1 5 _ t o _ f l o a t (  
     q 1 5 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f     C o n v e r t s   t h e   e l e m e n t s   o f   t h e   Q 1 5   v e c t o r   t o   Q 3 1   v e c t o r .  
       *   @ p a r a m [ i n ]     p S r c               i s   i n p u t   p o i n t e r  
       *   @ p a r a m [ o u t ]   p D s t               i s   o u t p u t   p o i n t e r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     i s   t h e   n u m b e r   o f   s a m p l e s   t o   p r o c e s s  
       * /  
     v o i d   a r m _ q 1 5 _ t o _ q 3 1 (  
     q 1 5 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ b r i e f     C o n v e r t s   t h e   e l e m e n t s   o f   t h e   Q 1 5   v e c t o r   t o   Q 7   v e c t o r .  
       *   @ p a r a m [ i n ]     p S r c               i s   i n p u t   p o i n t e r  
       *   @ p a r a m [ o u t ]   p D s t               i s   o u t p u t   p o i n t e r  
       *   @ p a r a m [ i n ]     b l o c k S i z e     i s   t h e   n u m b e r   o f   s a m p l e s   t o   p r o c e s s  
       * /  
     v o i d   a r m _ q 1 5 _ t o _ q 7 (  
     q 1 5 _ t   *   p S r c ,  
     q 7 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
  
     / * *  
       *   @ i n g r o u p   g r o u p I n t e r p o l a t i o n  
       * /  
  
     / * *  
       *   @ d e f g r o u p   B i l i n e a r I n t e r p o l a t e   B i l i n e a r   I n t e r p o l a t i o n  
       *  
       *   B i l i n e a r   i n t e r p o l a t i o n   i s   a n   e x t e n s i o n   o f   l i n e a r   i n t e r p o l a t i o n   a p p l i e d   t o   a   t w o   d i m e n s i o n a l   g r i d .  
       *   T h e   u n d e r l y i n g   f u n c t i o n   < c o d e > f ( x ,   y ) < / c o d e >   i s   s a m p l e d   o n   a   r e g u l a r   g r i d   a n d   t h e   i n t e r p o l a t i o n   p r o c e s s  
       *   d e t e r m i n e s   v a l u e s   b e t w e e n   t h e   g r i d   p o i n t s .  
       *   B i l i n e a r   i n t e r p o l a t i o n   i s   e q u i v a l e n t   t o   t w o   s t e p   l i n e a r   i n t e r p o l a t i o n ,   f i r s t   i n   t h e   x - d i m e n s i o n   a n d   t h e n   i n   t h e   y - d i m e n s i o n .  
       *   B i l i n e a r   i n t e r p o l a t i o n   i s   o f t e n   u s e d   i n   i m a g e   p r o c e s s i n g   t o   r e s c a l e   i m a g e s .  
       *   T h e   C M S I S   D S P   l i b r a r y   p r o v i d e s   b i l i n e a r   i n t e r p o l a t i o n   f u n c t i o n s   f o r   Q 7 ,   Q 1 5 ,   Q 3 1 ,   a n d   f l o a t i n g - p o i n t   d a t a   t y p e s .  
       *  
       *   < b > A l g o r i t h m < / b >  
       *   \ p a r  
       *   T h e   i n s t a n c e   s t r u c t u r e   u s e d   b y   t h e   b i l i n e a r   i n t e r p o l a t i o n   f u n c t i o n s   d e s c r i b e s   a   t w o   d i m e n s i o n a l   d a t a   t a b l e .  
       *   F o r   f l o a t i n g - p o i n t ,   t h e   i n s t a n c e   s t r u c t u r e   i s   d e f i n e d   a s :  
       *   < p r e >  
       *       t y p e d e f   s t r u c t  
       *       {  
       *           u i n t 1 6 _ t   n u m R o w s ;  
       *           u i n t 1 6 _ t   n u m C o l s ;  
       *           f l o a t 3 2 _ t   * p D a t a ;  
       *   }   a r m _ b i l i n e a r _ i n t e r p _ i n s t a n c e _ f 3 2 ;  
       *   < / p r e >  
       *  
       *   \ p a r  
       *   w h e r e   < c o d e > n u m R o w s < / c o d e >   s p e c i f i e s   t h e   n u m b e r   o f   r o w s   i n   t h e   t a b l e ;  
       *   < c o d e > n u m C o l s < / c o d e >   s p e c i f i e s   t h e   n u m b e r   o f   c o l u m n s   i n   t h e   t a b l e ;  
       *   a n d   < c o d e > p D a t a < / c o d e >   p o i n t s   t o   a n   a r r a y   o f   s i z e   < c o d e > n u m R o w s * n u m C o l s < / c o d e >   v a l u e s .  
       *   T h e   d a t a   t a b l e   < c o d e > p T a b l e < / c o d e >   i s   o r g a n i z e d   i n   r o w   o r d e r   a n d   t h e   s u p p l i e d   d a t a   v a l u e s   f a l l   o n   i n t e g e r   i n d e x e s .  
       *   T h a t   i s ,   t a b l e   e l e m e n t   ( x , y )   i s   l o c a t e d   a t   < c o d e > p T a b l e [ x   +   y * n u m C o l s ] < / c o d e >   w h e r e   x   a n d   y   a r e   i n t e g e r s .  
       *  
       *   \ p a r  
       *   L e t   < c o d e > ( x ,   y ) < / c o d e >   s p e c i f y   t h e   d e s i r e d   i n t e r p o l a t i o n   p o i n t .     T h e n   d e f i n e :  
       *   < p r e >  
       *           X F   =   f l o o r ( x )  
       *           Y F   =   f l o o r ( y )  
       *   < / p r e >  
       *   \ p a r  
       *   T h e   i n t e r p o l a t e d   o u t p u t   p o i n t   i s   c o m p u t e d   a s :  
       *   < p r e >  
       *     f ( x ,   y )   =   f ( X F ,   Y F )   *   ( 1 - ( x - X F ) )   *   ( 1 - ( y - Y F ) )  
       *                       +   f ( X F + 1 ,   Y F )   *   ( x - X F ) * ( 1 - ( y - Y F ) )  
       *                       +   f ( X F ,   Y F + 1 )   *   ( 1 - ( x - X F ) ) * ( y - Y F )  
       *                       +   f ( X F + 1 ,   Y F + 1 )   *   ( x - X F ) * ( y - Y F )  
       *   < / p r e >  
       *   N o t e   t h a t   t h e   c o o r d i n a t e s   ( x ,   y )   c o n t a i n   i n t e g e r   a n d   f r a c t i o n a l   c o m p o n e n t s .  
       *   T h e   i n t e g e r   c o m p o n e n t s   s p e c i f y   w h i c h   p o r t i o n   o f   t h e   t a b l e   t o   u s e   w h i l e   t h e  
       *   f r a c t i o n a l   c o m p o n e n t s   c o n t r o l   t h e   i n t e r p o l a t i o n   p r o c e s s o r .  
       *  
       *   \ p a r  
       *   i f   ( x , y )   a r e   o u t s i d e   o f   t h e   t a b l e   b o u n d a r y ,   B i l i n e a r   i n t e r p o l a t i o n   r e t u r n s   z e r o   o u t p u t .  
       * /  
  
     / * *  
       *   @ a d d t o g r o u p   B i l i n e a r I n t e r p o l a t e  
       *   @ {  
       * /  
  
  
     / * *  
     *  
     *   @ b r i e f     F l o a t i n g - p o i n t   b i l i n e a r   i n t e r p o l a t i o n .  
     *   @ p a r a m [ i n , o u t ]   S     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   i n t e r p o l a t i o n   s t r u c t u r e .  
     *   @ p a r a m [ i n ]           X     i n t e r p o l a t i o n   c o o r d i n a t e .  
     *   @ p a r a m [ i n ]           Y     i n t e r p o l a t i o n   c o o r d i n a t e .  
     *   @ r e t u r n   o u t   i n t e r p o l a t e d   v a l u e .  
     * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   f l o a t 3 2 _ t   a r m _ b i l i n e a r _ i n t e r p _ f 3 2 (  
     c o n s t   a r m _ b i l i n e a r _ i n t e r p _ i n s t a n c e _ f 3 2   *   S ,  
     f l o a t 3 2 _ t   X ,  
     f l o a t 3 2 _ t   Y )  
     {  
         f l o a t 3 2 _ t   o u t ;  
         f l o a t 3 2 _ t   f 0 0 ,   f 0 1 ,   f 1 0 ,   f 1 1 ;  
         f l o a t 3 2 _ t   * p D a t a   =   S - > p D a t a ;  
         i n t 3 2 _ t   x I n d e x ,   y I n d e x ,   i n d e x ;  
         f l o a t 3 2 _ t   x d i f f ,   y d i f f ;  
         f l o a t 3 2 _ t   b 1 ,   b 2 ,   b 3 ,   b 4 ;  
  
         x I n d e x   =   ( i n t 3 2 _ t )   X ;  
         y I n d e x   =   ( i n t 3 2 _ t )   Y ;  
  
         / *   C a r e   t a k e n   f o r   t a b l e   o u t s i d e   b o u n d a r y   * /  
         / *   R e t u r n s   z e r o   o u t p u t   w h e n   v a l u e s   a r e   o u t s i d e   t a b l e   b o u n d a r y   * /  
         i f   ( x I n d e x   <   0   | |   x I n d e x   >   ( S - > n u m R o w s   -   1 )   | |   y I n d e x   <   0   | |   y I n d e x   >   ( S - > n u m C o l s   -   1 ) )  
         {  
             r e t u r n   ( 0 ) ;  
         }  
  
         / *   C a l c u l a t i o n   o f   i n d e x   f o r   t w o   n e a r e s t   p o i n t s   i n   X - d i r e c t i o n   * /  
         i n d e x   =   ( x I n d e x   -   1 )   +   ( y I n d e x   -   1 )   *   S - > n u m C o l s ;  
  
  
         / *   R e a d   t w o   n e a r e s t   p o i n t s   i n   X - d i r e c t i o n   * /  
         f 0 0   =   p D a t a [ i n d e x ] ;  
         f 0 1   =   p D a t a [ i n d e x   +   1 ] ;  
  
         / *   C a l c u l a t i o n   o f   i n d e x   f o r   t w o   n e a r e s t   p o i n t s   i n   Y - d i r e c t i o n   * /  
         i n d e x   =   ( x I n d e x   -   1 )   +   ( y I n d e x )   *   S - > n u m C o l s ;  
  
  
         / *   R e a d   t w o   n e a r e s t   p o i n t s   i n   Y - d i r e c t i o n   * /  
         f 1 0   =   p D a t a [ i n d e x ] ;  
         f 1 1   =   p D a t a [ i n d e x   +   1 ] ;  
  
         / *   C a l c u l a t i o n   o f   i n t e r m e d i a t e   v a l u e s   * /  
         b 1   =   f 0 0 ;  
         b 2   =   f 0 1   -   f 0 0 ;  
         b 3   =   f 1 0   -   f 0 0 ;  
         b 4   =   f 0 0   -   f 0 1   -   f 1 0   +   f 1 1 ;  
  
         / *   C a l c u l a t i o n   o f   f r a c t i o n a l   p a r t   i n   X   * /  
         x d i f f   =   X   -   x I n d e x ;  
  
         / *   C a l c u l a t i o n   o f   f r a c t i o n a l   p a r t   i n   Y   * /  
         y d i f f   =   Y   -   y I n d e x ;  
  
         / *   C a l c u l a t i o n   o f   b i - l i n e a r   i n t e r p o l a t e d   o u t p u t   * /  
         o u t   =   b 1   +   b 2   *   x d i f f   +   b 3   *   y d i f f   +   b 4   *   x d i f f   *   y d i f f ;  
  
         / *   r e t u r n   t o   a p p l i c a t i o n   * /  
         r e t u r n   ( o u t ) ;  
     }  
  
  
     / * *  
     *  
     *   @ b r i e f     Q 3 1   b i l i n e a r   i n t e r p o l a t i o n .  
     *   @ p a r a m [ i n , o u t ]   S     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   i n t e r p o l a t i o n   s t r u c t u r e .  
     *   @ p a r a m [ i n ]           X     i n t e r p o l a t i o n   c o o r d i n a t e   i n   1 2 . 2 0   f o r m a t .  
     *   @ p a r a m [ i n ]           Y     i n t e r p o l a t i o n   c o o r d i n a t e   i n   1 2 . 2 0   f o r m a t .  
     *   @ r e t u r n   o u t   i n t e r p o l a t e d   v a l u e .  
     * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   q 3 1 _ t   a r m _ b i l i n e a r _ i n t e r p _ q 3 1 (  
     a r m _ b i l i n e a r _ i n t e r p _ i n s t a n c e _ q 3 1   *   S ,  
     q 3 1 _ t   X ,  
     q 3 1 _ t   Y )  
     {  
         q 3 1 _ t   o u t ;                                                                       / *   T e m p o r a r y   o u t p u t   * /  
         q 3 1 _ t   a c c   =   0 ;                                                               / *   o u t p u t   * /  
         q 3 1 _ t   x f r a c t ,   y f r a c t ;                                                 / *   X ,   Y   f r a c t i o n a l   p a r t s   * /  
         q 3 1 _ t   x 1 ,   x 2 ,   y 1 ,   y 2 ;                                                 / *   N e a r e s t   o u t p u t   v a l u e s   * /  
         i n t 3 2 _ t   r I ,   c I ;                                                             / *   R o w   a n d   c o l u m n   i n d i c e s   * /  
         q 3 1 _ t   * p Y D a t a   =   S - > p D a t a ;                                         / *   p o i n t e r   t o   o u t p u t   t a b l e   v a l u e s   * /  
         u i n t 3 2 _ t   n C o l s   =   S - > n u m C o l s ;                                   / *   n u m   o f   r o w s   * /  
  
         / *   I n p u t   i s   i n   1 2 . 2 0   f o r m a t   * /  
         / *   1 2   b i t s   f o r   t h e   t a b l e   i n d e x   * /  
         / *   I n d e x   v a l u e   c a l c u l a t i o n   * /  
         r I   =   ( ( X   &   ( q 3 1 _ t ) 0 x F F F 0 0 0 0 0 )   > >   2 0 ) ;  
  
         / *   I n p u t   i s   i n   1 2 . 2 0   f o r m a t   * /  
         / *   1 2   b i t s   f o r   t h e   t a b l e   i n d e x   * /  
         / *   I n d e x   v a l u e   c a l c u l a t i o n   * /  
         c I   =   ( ( Y   &   ( q 3 1 _ t ) 0 x F F F 0 0 0 0 0 )   > >   2 0 ) ;  
  
         / *   C a r e   t a k e n   f o r   t a b l e   o u t s i d e   b o u n d a r y   * /  
         / *   R e t u r n s   z e r o   o u t p u t   w h e n   v a l u e s   a r e   o u t s i d e   t a b l e   b o u n d a r y   * /  
         i f   ( r I   <   0   | |   r I   >   ( S - > n u m R o w s   -   1 )   | |   c I   <   0   | |   c I   >   ( S - > n u m C o l s   -   1 ) )  
         {  
             r e t u r n   ( 0 ) ;  
         }  
  
         / *   2 0   b i t s   f o r   t h e   f r a c t i o n a l   p a r t   * /  
         / *   s h i f t   l e f t   x f r a c t   b y   1 1   t o   k e e p   1 . 3 1   f o r m a t   * /  
         x f r a c t   =   ( X   &   0 x 0 0 0 F F F F F )   < <   1 1 U ;  
  
         / *   R e a d   t w o   n e a r e s t   o u t p u t   v a l u e s   f r o m   t h e   i n d e x   * /  
         x 1   =   p Y D a t a [ ( r I )   +   ( i n t 3 2 _ t ) n C o l s   *   ( c I )         ] ;  
         x 2   =   p Y D a t a [ ( r I )   +   ( i n t 3 2 _ t ) n C o l s   *   ( c I )   +   1 ] ;  
  
         / *   2 0   b i t s   f o r   t h e   f r a c t i o n a l   p a r t   * /  
         / *   s h i f t   l e f t   y f r a c t   b y   1 1   t o   k e e p   1 . 3 1   f o r m a t   * /  
         y f r a c t   =   ( Y   &   0 x 0 0 0 F F F F F )   < <   1 1 U ;  
  
         / *   R e a d   t w o   n e a r e s t   o u t p u t   v a l u e s   f r o m   t h e   i n d e x   * /  
         y 1   =   p Y D a t a [ ( r I )   +   ( i n t 3 2 _ t ) n C o l s   *   ( c I   +   1 )         ] ;  
         y 2   =   p Y D a t a [ ( r I )   +   ( i n t 3 2 _ t ) n C o l s   *   ( c I   +   1 )   +   1 ] ;  
  
         / *   C a l c u l a t i o n   o f   x 1   *   ( 1 - x f r a c t   )   *   ( 1 - y f r a c t )   a n d   a c c   i s   i n   3 . 2 9 ( q 2 9 )   f o r m a t   * /  
         o u t   =   ( ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   x 1     *   ( 0 x 7 F F F F F F F   -   x f r a c t ) )   > >   3 2 ) ) ;  
         a c c   =   ( ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   o u t   *   ( 0 x 7 F F F F F F F   -   y f r a c t ) )   > >   3 2 ) ) ;  
  
         / *   x 2   *   ( x f r a c t )   *   ( 1 - y f r a c t )     i n   3 . 2 9 ( q 2 9 )   a n d   a d d i n g   t o   a c c   * /  
         o u t   =   ( ( q 3 1 _ t )   ( ( q 6 3 _ t )   x 2   *   ( 0 x 7 F F F F F F F   -   y f r a c t )   > >   3 2 ) ) ;  
         a c c   + =   ( ( q 3 1 _ t )   ( ( q 6 3 _ t )   o u t   *   ( x f r a c t )   > >   3 2 ) ) ;  
  
         / *   y 1   *   ( 1   -   x f r a c t )   *   ( y f r a c t )     i n   3 . 2 9 ( q 2 9 )   a n d   a d d i n g   t o   a c c   * /  
         o u t   =   ( ( q 3 1 _ t )   ( ( q 6 3 _ t )   y 1   *   ( 0 x 7 F F F F F F F   -   x f r a c t )   > >   3 2 ) ) ;  
         a c c   + =   ( ( q 3 1 _ t )   ( ( q 6 3 _ t )   o u t   *   ( y f r a c t )   > >   3 2 ) ) ;  
  
         / *   y 2   *   ( x f r a c t )   *   ( y f r a c t )     i n   3 . 2 9 ( q 2 9 )   a n d   a d d i n g   t o   a c c   * /  
         o u t   =   ( ( q 3 1 _ t )   ( ( q 6 3 _ t )   y 2   *   ( x f r a c t )   > >   3 2 ) ) ;  
         a c c   + =   ( ( q 3 1 _ t )   ( ( q 6 3 _ t )   o u t   *   ( y f r a c t )   > >   3 2 ) ) ;  
  
         / *   C o n v e r t   a c c   t o   1 . 3 1 ( q 3 1 )   f o r m a t   * /  
         r e t u r n   ( ( q 3 1 _ t ) ( a c c   < <   2 ) ) ;  
     }  
  
  
     / * *  
     *   @ b r i e f     Q 1 5   b i l i n e a r   i n t e r p o l a t i o n .  
     *   @ p a r a m [ i n , o u t ]   S     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   i n t e r p o l a t i o n   s t r u c t u r e .  
     *   @ p a r a m [ i n ]           X     i n t e r p o l a t i o n   c o o r d i n a t e   i n   1 2 . 2 0   f o r m a t .  
     *   @ p a r a m [ i n ]           Y     i n t e r p o l a t i o n   c o o r d i n a t e   i n   1 2 . 2 0   f o r m a t .  
     *   @ r e t u r n   o u t   i n t e r p o l a t e d   v a l u e .  
     * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   q 1 5 _ t   a r m _ b i l i n e a r _ i n t e r p _ q 1 5 (  
     a r m _ b i l i n e a r _ i n t e r p _ i n s t a n c e _ q 1 5   *   S ,  
     q 3 1 _ t   X ,  
     q 3 1 _ t   Y )  
     {  
         q 6 3 _ t   a c c   =   0 ;                                                               / *   o u t p u t   * /  
         q 3 1 _ t   o u t ;                                                                       / *   T e m p o r a r y   o u t p u t   * /  
         q 1 5 _ t   x 1 ,   x 2 ,   y 1 ,   y 2 ;                                                 / *   N e a r e s t   o u t p u t   v a l u e s   * /  
         q 3 1 _ t   x f r a c t ,   y f r a c t ;                                                 / *   X ,   Y   f r a c t i o n a l   p a r t s   * /  
         i n t 3 2 _ t   r I ,   c I ;                                                             / *   R o w   a n d   c o l u m n   i n d i c e s   * /  
         q 1 5 _ t   * p Y D a t a   =   S - > p D a t a ;                                         / *   p o i n t e r   t o   o u t p u t   t a b l e   v a l u e s   * /  
         u i n t 3 2 _ t   n C o l s   =   S - > n u m C o l s ;                                   / *   n u m   o f   r o w s   * /  
  
         / *   I n p u t   i s   i n   1 2 . 2 0   f o r m a t   * /  
         / *   1 2   b i t s   f o r   t h e   t a b l e   i n d e x   * /  
         / *   I n d e x   v a l u e   c a l c u l a t i o n   * /  
         r I   =   ( ( X   &   ( q 3 1 _ t ) 0 x F F F 0 0 0 0 0 )   > >   2 0 ) ;  
  
         / *   I n p u t   i s   i n   1 2 . 2 0   f o r m a t   * /  
         / *   1 2   b i t s   f o r   t h e   t a b l e   i n d e x   * /  
         / *   I n d e x   v a l u e   c a l c u l a t i o n   * /  
         c I   =   ( ( Y   &   ( q 3 1 _ t ) 0 x F F F 0 0 0 0 0 )   > >   2 0 ) ;  
  
         / *   C a r e   t a k e n   f o r   t a b l e   o u t s i d e   b o u n d a r y   * /  
         / *   R e t u r n s   z e r o   o u t p u t   w h e n   v a l u e s   a r e   o u t s i d e   t a b l e   b o u n d a r y   * /  
         i f   ( r I   <   0   | |   r I   >   ( S - > n u m R o w s   -   1 )   | |   c I   <   0   | |   c I   >   ( S - > n u m C o l s   -   1 ) )  
         {  
             r e t u r n   ( 0 ) ;  
         }  
  
         / *   2 0   b i t s   f o r   t h e   f r a c t i o n a l   p a r t   * /  
         / *   x f r a c t   s h o u l d   b e   i n   1 2 . 2 0   f o r m a t   * /  
         x f r a c t   =   ( X   &   0 x 0 0 0 F F F F F ) ;  
  
         / *   R e a d   t w o   n e a r e s t   o u t p u t   v a l u e s   f r o m   t h e   i n d e x   * /  
         x 1   =   p Y D a t a [ ( ( u i n t 3 2 _ t ) r I )   +   n C o l s   *   ( ( u i n t 3 2 _ t ) c I )         ] ;  
         x 2   =   p Y D a t a [ ( ( u i n t 3 2 _ t ) r I )   +   n C o l s   *   ( ( u i n t 3 2 _ t ) c I )   +   1 ] ;  
  
         / *   2 0   b i t s   f o r   t h e   f r a c t i o n a l   p a r t   * /  
         / *   y f r a c t   s h o u l d   b e   i n   1 2 . 2 0   f o r m a t   * /  
         y f r a c t   =   ( Y   &   0 x 0 0 0 F F F F F ) ;  
  
         / *   R e a d   t w o   n e a r e s t   o u t p u t   v a l u e s   f r o m   t h e   i n d e x   * /  
         y 1   =   p Y D a t a [ ( ( u i n t 3 2 _ t ) r I )   +   n C o l s   *   ( ( u i n t 3 2 _ t ) c I   +   1 )         ] ;  
         y 2   =   p Y D a t a [ ( ( u i n t 3 2 _ t ) r I )   +   n C o l s   *   ( ( u i n t 3 2 _ t ) c I   +   1 )   +   1 ] ;  
  
         / *   C a l c u l a t i o n   o f   x 1   *   ( 1 - x f r a c t   )   *   ( 1 - y f r a c t )   a n d   a c c   i s   i n   1 3 . 5 1   f o r m a t   * /  
  
         / *   x 1   i s   i n   1 . 1 5 ( q 1 5 ) ,   x f r a c t   i n   1 2 . 2 0   f o r m a t   a n d   o u t   i s   i n   1 3 . 3 5   f o r m a t   * /  
         / *   c o n v e r t   1 3 . 3 5   t o   1 3 . 3 1   b y   r i g h t   s h i f t i n g     a n d   o u t   i s   i n   1 . 3 1   * /  
         o u t   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   x 1   *   ( 0 x F F F F F   -   x f r a c t ) )   > >   4 U ) ;  
         a c c   =   ( ( q 6 3 _ t )   o u t   *   ( 0 x F F F F F   -   y f r a c t ) ) ;  
  
         / *   x 2   *   ( x f r a c t )   *   ( 1 - y f r a c t )     i n   1 . 5 1   a n d   a d d i n g   t o   a c c   * /  
         o u t   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   x 2   *   ( 0 x F F F F F   -   y f r a c t ) )   > >   4 U ) ;  
         a c c   + =   ( ( q 6 3 _ t )   o u t   *   ( x f r a c t ) ) ;  
  
         / *   y 1   *   ( 1   -   x f r a c t )   *   ( y f r a c t )     i n   1 . 5 1   a n d   a d d i n g   t o   a c c   * /  
         o u t   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   y 1   *   ( 0 x F F F F F   -   x f r a c t ) )   > >   4 U ) ;  
         a c c   + =   ( ( q 6 3 _ t )   o u t   *   ( y f r a c t ) ) ;  
  
         / *   y 2   *   ( x f r a c t )   *   ( y f r a c t )     i n   1 . 5 1   a n d   a d d i n g   t o   a c c   * /  
         o u t   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   y 2   *   ( x f r a c t ) )   > >   4 U ) ;  
         a c c   + =   ( ( q 6 3 _ t )   o u t   *   ( y f r a c t ) ) ;  
  
         / *   a c c   i s   i n   1 3 . 5 1   f o r m a t   a n d   d o w n   s h i f t   a c c   b y   3 6   t i m e s   * /  
         / *   C o n v e r t   o u t   t o   1 . 1 5   f o r m a t   * /  
         r e t u r n   ( ( q 1 5 _ t ) ( a c c   > >   3 6 ) ) ;  
     }  
  
  
     / * *  
     *   @ b r i e f     Q 7   b i l i n e a r   i n t e r p o l a t i o n .  
     *   @ p a r a m [ i n , o u t ]   S     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   i n t e r p o l a t i o n   s t r u c t u r e .  
     *   @ p a r a m [ i n ]           X     i n t e r p o l a t i o n   c o o r d i n a t e   i n   1 2 . 2 0   f o r m a t .  
     *   @ p a r a m [ i n ]           Y     i n t e r p o l a t i o n   c o o r d i n a t e   i n   1 2 . 2 0   f o r m a t .  
     *   @ r e t u r n   o u t   i n t e r p o l a t e d   v a l u e .  
     * /  
     C M S I S _ I N L I N E   _ _ S T A T I C _ I N L I N E   q 7 _ t   a r m _ b i l i n e a r _ i n t e r p _ q 7 (  
     a r m _ b i l i n e a r _ i n t e r p _ i n s t a n c e _ q 7   *   S ,  
     q 3 1 _ t   X ,  
     q 3 1 _ t   Y )  
     {  
         q 6 3 _ t   a c c   =   0 ;                                                               / *   o u t p u t   * /  
         q 3 1 _ t   o u t ;                                                                       / *   T e m p o r a r y   o u t p u t   * /  
         q 3 1 _ t   x f r a c t ,   y f r a c t ;                                                 / *   X ,   Y   f r a c t i o n a l   p a r t s   * /  
         q 7 _ t   x 1 ,   x 2 ,   y 1 ,   y 2 ;                                                   / *   N e a r e s t   o u t p u t   v a l u e s   * /  
         i n t 3 2 _ t   r I ,   c I ;                                                             / *   R o w   a n d   c o l u m n   i n d i c e s   * /  
         q 7 _ t   * p Y D a t a   =   S - > p D a t a ;                                           / *   p o i n t e r   t o   o u t p u t   t a b l e   v a l u e s   * /  
         u i n t 3 2 _ t   n C o l s   =   S - > n u m C o l s ;                                   / *   n u m   o f   r o w s   * /  
  
         / *   I n p u t   i s   i n   1 2 . 2 0   f o r m a t   * /  
         / *   1 2   b i t s   f o r   t h e   t a b l e   i n d e x   * /  
         / *   I n d e x   v a l u e   c a l c u l a t i o n   * /  
         r I   =   ( ( X   &   ( q 3 1 _ t ) 0 x F F F 0 0 0 0 0 )   > >   2 0 ) ;  
  
         / *   I n p u t   i s   i n   1 2 . 2 0   f o r m a t   * /  
         / *   1 2   b i t s   f o r   t h e   t a b l e   i n d e x   * /  
         / *   I n d e x   v a l u e   c a l c u l a t i o n   * /  
         c I   =   ( ( Y   &   ( q 3 1 _ t ) 0 x F F F 0 0 0 0 0 )   > >   2 0 ) ;  
  
         / *   C a r e   t a k e n   f o r   t a b l e   o u t s i d e   b o u n d a r y   * /  
         / *   R e t u r n s   z e r o   o u t p u t   w h e n   v a l u e s   a r e   o u t s i d e   t a b l e   b o u n d a r y   * /  
         i f   ( r I   <   0   | |   r I   >   ( S - > n u m R o w s   -   1 )   | |   c I   <   0   | |   c I   >   ( S - > n u m C o l s   -   1 ) )  
         {  
             r e t u r n   ( 0 ) ;  
         }  
  
         / *   2 0   b i t s   f o r   t h e   f r a c t i o n a l   p a r t   * /  
         / *   x f r a c t   s h o u l d   b e   i n   1 2 . 2 0   f o r m a t   * /  
         x f r a c t   =   ( X   &   ( q 3 1 _ t ) 0 x 0 0 0 F F F F F ) ;  
  
         / *   R e a d   t w o   n e a r e s t   o u t p u t   v a l u e s   f r o m   t h e   i n d e x   * /  
         x 1   =   p Y D a t a [ ( ( u i n t 3 2 _ t ) r I )   +   n C o l s   *   ( ( u i n t 3 2 _ t ) c I )         ] ;  
         x 2   =   p Y D a t a [ ( ( u i n t 3 2 _ t ) r I )   +   n C o l s   *   ( ( u i n t 3 2 _ t ) c I )   +   1 ] ;  
  
         / *   2 0   b i t s   f o r   t h e   f r a c t i o n a l   p a r t   * /  
         / *   y f r a c t   s h o u l d   b e   i n   1 2 . 2 0   f o r m a t   * /  
         y f r a c t   =   ( Y   &   ( q 3 1 _ t ) 0 x 0 0 0 F F F F F ) ;  
  
         / *   R e a d   t w o   n e a r e s t   o u t p u t   v a l u e s   f r o m   t h e   i n d e x   * /  
         y 1   =   p Y D a t a [ ( ( u i n t 3 2 _ t ) r I )   +   n C o l s   *   ( ( u i n t 3 2 _ t ) c I   +   1 )         ] ;  
         y 2   =   p Y D a t a [ ( ( u i n t 3 2 _ t ) r I )   +   n C o l s   *   ( ( u i n t 3 2 _ t ) c I   +   1 )   +   1 ] ;  
  
         / *   C a l c u l a t i o n   o f   x 1   *   ( 1 - x f r a c t   )   *   ( 1 - y f r a c t )   a n d   a c c   i s   i n   1 6 . 4 7   f o r m a t   * /  
         o u t   =   ( ( x 1   *   ( 0 x F F F F F   -   x f r a c t ) ) ) ;  
         a c c   =   ( ( ( q 6 3 _ t )   o u t   *   ( 0 x F F F F F   -   y f r a c t ) ) ) ;  
  
         / *   x 2   *   ( x f r a c t )   *   ( 1 - y f r a c t )     i n   2 . 2 2   a n d   a d d i n g   t o   a c c   * /  
         o u t   =   ( ( x 2   *   ( 0 x F F F F F   -   y f r a c t ) ) ) ;  
         a c c   + =   ( ( ( q 6 3 _ t )   o u t   *   ( x f r a c t ) ) ) ;  
  
         / *   y 1   *   ( 1   -   x f r a c t )   *   ( y f r a c t )     i n   2 . 2 2   a n d   a d d i n g   t o   a c c   * /  
         o u t   =   ( ( y 1   *   ( 0 x F F F F F   -   x f r a c t ) ) ) ;  
         a c c   + =   ( ( ( q 6 3 _ t )   o u t   *   ( y f r a c t ) ) ) ;  
  
         / *   y 2   *   ( x f r a c t )   *   ( y f r a c t )     i n   2 . 2 2   a n d   a d d i n g   t o   a c c   * /  
         o u t   =   ( ( y 2   *   ( y f r a c t ) ) ) ;  
         a c c   + =   ( ( ( q 6 3 _ t )   o u t   *   ( x f r a c t ) ) ) ;  
  
         / *   a c c   i n   1 6 . 4 7   f o r m a t   a n d   d o w n   s h i f t   b y   4 0   t o   c o n v e r t   t o   1 . 7   f o r m a t   * /  
         r e t u r n   ( ( q 7 _ t ) ( a c c   > >   4 0 ) ) ;  
     }  
  
     / * *  
       *   @ }   e n d   o f   B i l i n e a r I n t e r p o l a t e   g r o u p  
       * /  
  
  
 / *   S M M L A R   * /  
 # d e f i n e   m u l t A c c _ 3 2 x 3 2 _ k e e p 3 2 _ R ( a ,   x ,   y )   \  
         a   =   ( q 3 1 _ t )   ( ( ( ( ( q 6 3 _ t )   a )   < <   3 2 )   +   ( ( q 6 3 _ t )   x   *   y )   +   0 x 8 0 0 0 0 0 0 0 L L   )   > >   3 2 )  
  
 / *   S M M L S R   * /  
 # d e f i n e   m u l t S u b _ 3 2 x 3 2 _ k e e p 3 2 _ R ( a ,   x ,   y )   \  
         a   =   ( q 3 1 _ t )   ( ( ( ( ( q 6 3 _ t )   a )   < <   3 2 )   -   ( ( q 6 3 _ t )   x   *   y )   +   0 x 8 0 0 0 0 0 0 0 L L   )   > >   3 2 )  
  
 / *   S M M U L R   * /  
 # d e f i n e   m u l t _ 3 2 x 3 2 _ k e e p 3 2 _ R ( a ,   x ,   y )   \  
         a   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   x   *   y   +   0 x 8 0 0 0 0 0 0 0 L L   )   > >   3 2 )  
  
 / *   S M M L A   * /  
 # d e f i n e   m u l t A c c _ 3 2 x 3 2 _ k e e p 3 2 ( a ,   x ,   y )   \  
         a   + =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   x   *   y )   > >   3 2 )  
  
 / *   S M M L S   * /  
 # d e f i n e   m u l t S u b _ 3 2 x 3 2 _ k e e p 3 2 ( a ,   x ,   y )   \  
         a   - =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   x   *   y )   > >   3 2 )  
  
 / *   S M M U L   * /  
 # d e f i n e   m u l t _ 3 2 x 3 2 _ k e e p 3 2 ( a ,   x ,   y )   \  
         a   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   x   *   y   )   > >   3 2 )  
  
  
 # i f       d e f i n e d   (   _ _ C C _ A R M   )  
     / *   E n t e r   l o w   o p t i m i z a t i o n   r e g i o n   -   p l a c e   d i r e c t l y   a b o v e   f u n c t i o n   d e f i n i t i o n   * /  
     # i f   d e f i n e d (   A R M _ M A T H _ C M 4   )   | |   d e f i n e d (   A R M _ M A T H _ C M 7 )  
         # d e f i n e   L O W _ O P T I M I Z A T I O N _ E N T E R   \  
               _ P r a g m a   ( " p u s h " )                   \  
               _ P r a g m a   ( " O 1 " )  
     # e l s e  
         # d e f i n e   L O W _ O P T I M I Z A T I O N _ E N T E R  
     # e n d i f  
  
     / *   E x i t   l o w   o p t i m i z a t i o n   r e g i o n   -   p l a c e   d i r e c t l y   a f t e r   e n d   o f   f u n c t i o n   d e f i n i t i o n   * /  
     # i f   d e f i n e d   (   A R M _ M A T H _ C M 4   )   | |   d e f i n e d   (   A R M _ M A T H _ C M 7   )  
         # d e f i n e   L O W _ O P T I M I Z A T I O N _ E X I T   \  
               _ P r a g m a   ( " p o p " )  
     # e l s e  
         # d e f i n e   L O W _ O P T I M I Z A T I O N _ E X I T  
     # e n d i f  
  
     / *   E n t e r   l o w   o p t i m i z a t i o n   r e g i o n   -   p l a c e   d i r e c t l y   a b o v e   f u n c t i o n   d e f i n i t i o n   * /  
     # d e f i n e   I A R _ O N L Y _ L O W _ O P T I M I Z A T I O N _ E N T E R  
  
     / *   E x i t   l o w   o p t i m i z a t i o n   r e g i o n   -   p l a c e   d i r e c t l y   a f t e r   e n d   o f   f u n c t i o n   d e f i n i t i o n   * /  
     # d e f i n e   I A R _ O N L Y _ L O W _ O P T I M I Z A T I O N _ E X I T  
  
 # e l i f   d e f i n e d   ( _ _ A R M C C _ V E R S I O N   )   & &   (   _ _ A R M C C _ V E R S I O N   > =   6 0 1 0 0 5 0   )  
     # d e f i n e   L O W _ O P T I M I Z A T I O N _ E N T E R  
     # d e f i n e   L O W _ O P T I M I Z A T I O N _ E X I T  
     # d e f i n e   I A R _ O N L Y _ L O W _ O P T I M I Z A T I O N _ E N T E R  
     # d e f i n e   I A R _ O N L Y _ L O W _ O P T I M I Z A T I O N _ E X I T  
  
 # e l i f   d e f i n e d   (   _ _ G N U C _ _   )  
     # d e f i n e   L O W _ O P T I M I Z A T I O N _ E N T E R   \  
               _ _ a t t r i b u t e _ _ ( (   o p t i m i z e ( " - O 1 " )   ) )  
     # d e f i n e   L O W _ O P T I M I Z A T I O N _ E X I T  
     # d e f i n e   I A R _ O N L Y _ L O W _ O P T I M I Z A T I O N _ E N T E R  
     # d e f i n e   I A R _ O N L Y _ L O W _ O P T I M I Z A T I O N _ E X I T  
  
 # e l i f   d e f i n e d   (   _ _ I C C A R M _ _   )  
     / *   E n t e r   l o w   o p t i m i z a t i o n   r e g i o n   -   p l a c e   d i r e c t l y   a b o v e   f u n c t i o n   d e f i n i t i o n   * /  
     # i f   d e f i n e d   (   A R M _ M A T H _ C M 4   )   | |   d e f i n e d   (   A R M _ M A T H _ C M 7   )  
         # d e f i n e   L O W _ O P T I M I Z A T I O N _ E N T E R   \  
               _ P r a g m a   ( " o p t i m i z e = l o w " )  
     # e l s e  
         # d e f i n e   L O W _ O P T I M I Z A T I O N _ E N T E R  
     # e n d i f  
  
     / *   E x i t   l o w   o p t i m i z a t i o n   r e g i o n   -   p l a c e   d i r e c t l y   a f t e r   e n d   o f   f u n c t i o n   d e f i n i t i o n   * /  
     # d e f i n e   L O W _ O P T I M I Z A T I O N _ E X I T  
  
     / *   E n t e r   l o w   o p t i m i z a t i o n   r e g i o n   -   p l a c e   d i r e c t l y   a b o v e   f u n c t i o n   d e f i n i t i o n   * /  
     # i f   d e f i n e d   (   A R M _ M A T H _ C M 4   )   | |   d e f i n e d   (   A R M _ M A T H _ C M 7   )  
         # d e f i n e   I A R _ O N L Y _ L O W _ O P T I M I Z A T I O N _ E N T E R   \  
               _ P r a g m a   ( " o p t i m i z e = l o w " )  
     # e l s e  
         # d e f i n e   I A R _ O N L Y _ L O W _ O P T I M I Z A T I O N _ E N T E R  
     # e n d i f  
  
     / *   E x i t   l o w   o p t i m i z a t i o n   r e g i o n   -   p l a c e   d i r e c t l y   a f t e r   e n d   o f   f u n c t i o n   d e f i n i t i o n   * /  
     # d e f i n e   I A R _ O N L Y _ L O W _ O P T I M I Z A T I O N _ E X I T  
  
 # e l i f   d e f i n e d   (   _ _ T I _ A R M _ _   )  
     # d e f i n e   L O W _ O P T I M I Z A T I O N _ E N T E R  
     # d e f i n e   L O W _ O P T I M I Z A T I O N _ E X I T  
     # d e f i n e   I A R _ O N L Y _ L O W _ O P T I M I Z A T I O N _ E N T E R  
     # d e f i n e   I A R _ O N L Y _ L O W _ O P T I M I Z A T I O N _ E X I T  
  
 # e l i f   d e f i n e d   (   _ _ C S M C _ _   )  
     # d e f i n e   L O W _ O P T I M I Z A T I O N _ E N T E R  
     # d e f i n e   L O W _ O P T I M I Z A T I O N _ E X I T  
     # d e f i n e   I A R _ O N L Y _ L O W _ O P T I M I Z A T I O N _ E N T E R  
     # d e f i n e   I A R _ O N L Y _ L O W _ O P T I M I Z A T I O N _ E X I T  
  
 # e l i f   d e f i n e d   (   _ _ T A S K I N G _ _   )  
     # d e f i n e   L O W _ O P T I M I Z A T I O N _ E N T E R  
     # d e f i n e   L O W _ O P T I M I Z A T I O N _ E X I T  
     # d e f i n e   I A R _ O N L Y _ L O W _ O P T I M I Z A T I O N _ E N T E R  
     # d e f i n e   I A R _ O N L Y _ L O W _ O P T I M I Z A T I O N _ E X I T  
  
 # e n d i f  
  
  
 # i f d e f       _ _ c p l u s p l u s  
 }  
 # e n d i f  
  
 / *   C o m p i l e r   s p e c i f i c   d i a g n o s t i c   a d j u s t m e n t   * /  
 # i f       d e f i n e d   (   _ _ C C _ A R M   )  
  
 # e l i f   d e f i n e d   (   _ _ A R M C C _ V E R S I O N   )   & &   (   _ _ A R M C C _ V E R S I O N   > =   6 0 1 0 0 5 0   )  
  
 # e l i f   d e f i n e d   (   _ _ G N U C _ _   )  
 # p r a g m a   G C C   d i a g n o s t i c   p o p  
  
 # e l i f   d e f i n e d   (   _ _ I C C A R M _ _   )  
  
 # e l i f   d e f i n e d   (   _ _ T I _ A R M _ _   )  
  
 # e l i f   d e f i n e d   (   _ _ C S M C _ _   )  
  
 # e l i f   d e f i n e d   (   _ _ T A S K I N G _ _   )  
  
 # e l s e  
     # e r r o r   U n k n o w n   c o m p i l e r  
 # e n d i f  
  
 # e n d i f   / *   _ A R M _ M A T H _ H   * /  
  
 / * *  
   *  
   *   E n d   o f   f i l e .  
   * /  