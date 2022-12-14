??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ d c t 4 _ f 3 2 . c  
   *   D e s c r i p t i o n :     P r o c e s s i n g   f u n c t i o n   o f   D C T 4   &   I D C T 4   F 3 2  
   *  
   *   $ D a t e :                 2 7 .   J a n u a r y   2 0 1 7  
   *   $ R e v i s i o n :         V . 1 . 5 . 1  
   *  
   *   T a r g e t   P r o c e s s o r :   C o r t e x - M   c o r e s  
   *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
 / *  
   *   C o p y r i g h t   ( C )   2 0 1 0 - 2 0 1 7   A R M   L i m i t e d   o r   i t s   a f f i l i a t e s .   A l l   r i g h t s   r e s e r v e d .  
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
 # i n c l u d e   " a r m _ m a t h . h "  
  
 / * *  
   *   @ i n g r o u p   g r o u p T r a n s f o r m s  
   * /  
  
 / * *  
   *   @ d e f g r o u p   D C T 4 _ I D C T 4   D C T   T y p e   I V   F u n c t i o n s  
   *   R e p r e s e n t a t i o n   o f   s i g n a l s   b y   m i n i m u m   n u m b e r   o f   v a l u e s   i s   i m p o r t a n t   f o r   s t o r a g e   a n d   t r a n s m i s s i o n .  
   *   T h e   p o s s i b i l i t y   o f   l a r g e   d i s c o n t i n u i t y   b e t w e e n   t h e   b e g i n n i n g   a n d   e n d   o f   a   p e r i o d   o f   a   s i g n a l  
   *   i n   D F T   c a n   b e   a v o i d e d   b y   e x t e n d i n g   t h e   s i g n a l   s o   t h a t   i t   i s   e v e n - s y m m e t r i c .  
   *   D i s c r e t e   C o s i n e   T r a n s f o r m   ( D C T )   i s   c o n s t r u c t e d   s u c h   t h a t   i t s   e n e r g y   i s   h e a v i l y   c o n c e n t r a t e d   i n   t h e   l o w e r   p a r t   o f   t h e  
   *   s p e c t r u m   a n d   i s   v e r y   w i d e l y   u s e d   i n   s i g n a l   a n d   i m a g e   c o d i n g   a p p l i c a t i o n s .  
   *   T h e   f a m i l y   o f   D C T s   ( D C T   t y p e -   1 , 2 , 3 , 4 )   i s   t h e   o u t c o m e   o f   d i f f e r e n t   c o m b i n a t i o n s   o f   h o m o g e n e o u s   b o u n d a r y   c o n d i t i o n s .  
   *   D C T   h a s   a n   e x c e l l e n t   e n e r g y - p a c k i n g   c a p a b i l i t y ,   h e n c e   h a s   m a n y   a p p l i c a t i o n s   a n d   i n   d a t a   c o m p r e s s i o n   i n   p a r t i c u l a r .  
   *  
   *   D C T   i s   e s s e n t i a l l y   t h e   D i s c r e t e   F o u r i e r   T r a n s f o r m ( D F T )   o f   a n   e v e n - e x t e n d e d   r e a l   s i g n a l .  
   *   R e o r d e r i n g   o f   t h e   i n p u t   d a t a   m a k e s   t h e   c o m p u t a t i o n   o f   D C T   j u s t   a   p r o b l e m   o f  
   *   c o m p u t i n g   t h e   D F T   o f   a   r e a l   s i g n a l   w i t h   a   f e w   a d d i t i o n a l   o p e r a t i o n s .  
   *   T h i s   a p p r o a c h   p r o v i d e s   r e g u l a r ,   s i m p l e ,   a n d   v e r y   e f f i c i e n t   D C T   a l g o r i t h m s   f o r   p r a c t i c a l   h a r d w a r e   a n d   s o f t w a r e   i m p l e m e n t a t i o n s .  
   *  
   *   D C T   t y p e - I I   c a n   b e   i m p l e m e n t e d   u s i n g   F a s t   f o u r i e r   t r a n s f o r m   ( F F T )   i n t e r n a l l y ,   a s   t h e   t r a n s f o r m   i s   a p p l i e d   o n   r e a l   v a l u e s ,   R e a l   F F T   c a n   b e   u s e d .  
   *   D C T 4   i s   i m p l e m e n t e d   u s i n g   D C T 2   a s   t h e i r   i m p l e m e n t a t i o n s   a r e   s i m i l a r   e x c e p t   w i t h   s o m e   a d d e d   p r e - p r o c e s s i n g   a n d   p o s t - p r o c e s s i n g .  
   *   D C T 2   i m p l e m e n t a t i o n   c a n   b e   d e s c r i b e d   i n   t h e   f o l l o w i n g   s t e p s :  
   *   -   R e - o r d e r i n g   i n p u t  
   *   -   C a l c u l a t i n g   R e a l   F F T  
   *   -   M u l t i p l i c a t i o n   o f   w e i g h t s   a n d   R e a l   F F T   o u t p u t   a n d   g e t t i n g   r e a l   p a r t   f r o m   t h e   p r o d u c t .  
   *  
   *   T h i s   p r o c e s s   i s   e x p l a i n e d   b y   t h e   b l o c k   d i a g r a m   b e l o w :  
   *   \ i m a g e   h t m l   D C T 4 . g i f   " D i s c r e t e   C o s i n e   T r a n s f o r m   -   t y p e - I V "  
   *  
   *   \ p a r   A l g o r i t h m :  
   *   T h e   N - p o i n t   t y p e - I V   D C T   i s   d e f i n e d   a s   a   r e a l ,   l i n e a r   t r a n s f o r m a t i o n   b y   t h e   f o r m u l a :  
   *   \ i m a g e   h t m l   D C T 4 E q u a t i o n . g i f  
   *   w h e r e   < c o d e > k   =   0 , 1 , 2 , . . . . . N - 1 < / c o d e >  
   * \ p a r  
   *   I t s   i n v e r s e   i s   d e f i n e d   a s   f o l l o w s :  
   *   \ i m a g e   h t m l   I D C T 4 E q u a t i o n . g i f  
   *   w h e r e   < c o d e > n   =   0 , 1 , 2 , . . . . . N - 1 < / c o d e >  
   * \ p a r  
   *   T h e   D C T 4   m a t r i c e s   b e c o m e   i n v o l u t o r y   ( i . e .   t h e y   a r e   s e l f - i n v e r s e )   b y   m u l t i p l y i n g   w i t h   a n   o v e r a l l   s c a l e   f a c t o r   o f   s q r t ( 2 / N ) .  
   *   T h e   s y m m e t r y   o f   t h e   t r a n s f o r m   m a t r i x   i n d i c a t e s   t h a t   t h e   f a s t   a l g o r i t h m s   f o r   t h e   f o r w a r d  
   *   a n d   i n v e r s e   t r a n s f o r m   c o m p u t a t i o n   a r e   i d e n t i c a l .  
   *   N o t e   t h a t   t h e   i m p l e m e n t a t i o n   o f   I n v e r s e   D C T 4   a n d   D C T 4   i s   s a m e ,   h e n c e   s a m e   p r o c e s s   f u n c t i o n   c a n   b e   u s e d   f o r   b o t h .  
   *  
   *   \ p a r   L e n g t h s   s u p p o r t e d   b y   t h e   t r a n s f o r m :  
   *     A s   D C T 4   i n t e r n a l l y   u s e s   R e a l   F F T ,   i t   s u p p o r t s   a l l   t h e   l e n g t h s   1 2 8 ,   5 1 2 ,   2 0 4 8   a n d   8 1 9 2 .  
   *   T h e   l i b r a r y   p r o v i d e s   s e p a r a t e   f u n c t i o n s   f o r   Q 1 5 ,   Q 3 1 ,   a n d   f l o a t i n g - p o i n t   d a t a   t y p e s .  
   *   \ p a r   I n s t a n c e   S t r u c t u r e  
   *   T h e   i n s t a n c e s   f o r   R e a l   F F T   a n d   F F T ,   c o s i n e   v a l u e s   t a b l e   a n d   t w i d d l e   f a c t o r   t a b l e   a r e   s t o r e d   i n   a n   i n s t a n c e   d a t a   s t r u c t u r e .  
   *   A   s e p a r a t e   i n s t a n c e   s t r u c t u r e   m u s t   b e   d e f i n e d   f o r   e a c h   t r a n s f o r m .  
   *   T h e r e   a r e   s e p a r a t e   i n s t a n c e   s t r u c t u r e   d e c l a r a t i o n s   f o r   e a c h   o f   t h e   3   s u p p o r t e d   d a t a   t y p e s .  
   *  
   *   \ p a r   I n i t i a l i z a t i o n   F u n c t i o n s  
   *   T h e r e   i s   a l s o   a n   a s s o c i a t e d   i n i t i a l i z a t i o n   f u n c t i o n   f o r   e a c h   d a t a   t y p e .  
   *   T h e   i n i t i a l i z a t i o n   f u n c t i o n   p e r f o r m s   t h e   f o l l o w i n g   o p e r a t i o n s :  
   *   -   S e t s   t h e   v a l u e s   o f   t h e   i n t e r n a l   s t r u c t u r e   f i e l d s .  
   *   -   I n i t i a l i z e s   R e a l   F F T   a s   i t s   p r o c e s s   f u n c t i o n   i s   u s e d   i n t e r n a l l y   i n   D C T 4 ,   b y   c a l l i n g   a r m _ r f f t _ i n i t _ f 3 2 ( ) .  
   *   \ p a r  
   *   U s e   o f   t h e   i n i t i a l i z a t i o n   f u n c t i o n   i s   o p t i o n a l .  
   *   H o w e v e r ,   i f   t h e   i n i t i a l i z a t i o n   f u n c t i o n   i s   u s e d ,   t h e n   t h e   i n s t a n c e   s t r u c t u r e   c a n n o t   b e   p l a c e d   i n t o   a   c o n s t   d a t a   s e c t i o n .  
   *   T o   p l a c e   a n   i n s t a n c e   s t r u c t u r e   i n t o   a   c o n s t   d a t a   s e c t i o n ,   t h e   i n s t a n c e   s t r u c t u r e   m u s t   b e   m a n u a l l y   i n i t i a l i z e d .  
   *   M a n u a l l y   i n i t i a l i z e   t h e   i n s t a n c e   s t r u c t u r e   a s   f o l l o w s :  
   *   < p r e >  
   * a r m _ d c t 4 _ i n s t a n c e _ f 3 2   S   =   { N ,   N b y 2 ,   n o r m a l i z e ,   p T w i d d l e ,   p C o s F a c t o r ,   p R f f t ,   p C f f t } ;  
   * a r m _ d c t 4 _ i n s t a n c e _ q 3 1   S   =   { N ,   N b y 2 ,   n o r m a l i z e ,   p T w i d d l e ,   p C o s F a c t o r ,   p R f f t ,   p C f f t } ;  
   * a r m _ d c t 4 _ i n s t a n c e _ q 1 5   S   =   { N ,   N b y 2 ,   n o r m a l i z e ,   p T w i d d l e ,   p C o s F a c t o r ,   p R f f t ,   p C f f t } ;  
   *   < / p r e >  
   *   w h e r e   \ c   N   i s   t h e   l e n g t h   o f   t h e   D C T 4 ;   \ c   N b y 2   i s   h a l f   o f   t h e   l e n g t h   o f   t h e   D C T 4 ;  
   *   \ c   n o r m a l i z e   i s   n o r m a l i z i n g   f a c t o r   u s e d   a n d   i s   e q u a l   t o   < c o d e > s q r t ( 2 / N ) < / c o d e > ;  
   *   \ c   p T w i d d l e   p o i n t s   t o   t h e   t w i d d l e   f a c t o r   t a b l e ;  
   *   \ c   p C o s F a c t o r   p o i n t s   t o   t h e   c o s F a c t o r   t a b l e ;  
   *   \ c   p R f f t   p o i n t s   t o   t h e   r e a l   F F T   i n s t a n c e ;  
   *   \ c   p C f f t   p o i n t s   t o   t h e   c o m p l e x   F F T   i n s t a n c e ;  
   *   T h e   C F F T   a n d   R F F T   s t r u c t u r e s   a l s o   n e e d s   t o   b e   i n i t i a l i z e d ,   r e f e r   t o   a r m _ c f f t _ r a d i x 4 _ f 3 2 ( )  
   *   a n d   a r m _ r f f t _ f 3 2 ( )   r e s p e c t i v e l y   f o r   d e t a i l s   r e g a r d i n g   s t a t i c   i n i t i a l i z a t i o n .  
   *  
   *   \ p a r   F i x e d - P o i n t   B e h a v i o r  
   *   C a r e   m u s t   b e   t a k e n   w h e n   u s i n g   t h e   f i x e d - p o i n t   v e r s i o n s   o f   t h e   D C T 4   t r a n s f o r m   f u n c t i o n s .  
   *   I n   p a r t i c u l a r ,   t h e   o v e r f l o w   a n d   s a t u r a t i o n   b e h a v i o r   o f   t h e   a c c u m u l a t o r   u s e d   i n   e a c h   f u n c t i o n   m u s t   b e   c o n s i d e r e d .  
   *   R e f e r   t o   t h e   f u n c t i o n   s p e c i f i c   d o c u m e n t a t i o n   b e l o w   f o r   u s a g e   g u i d e l i n e s .  
   * /  
  
   / * *  
   *   @ a d d t o g r o u p   D C T 4 _ I D C T 4  
   *   @ {  
   * /  
  
 / * *  
   *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   f l o a t i n g - p o i n t   D C T 4 / I D C T 4 .  
   *   @ p a r a m [ i n ]               * S                           p o i n t s   t o   a n   i n s t a n c e   o f   t h e   f l o a t i n g - p o i n t   D C T 4 / I D C T 4   s t r u c t u r e .  
   *   @ p a r a m [ i n ]               * p S t a t e                 p o i n t s   t o   s t a t e   b u f f e r .  
   *   @ p a r a m [ i n , o u t ]       * p I n l i n e B u f f e r   p o i n t s   t o   t h e   i n - p l a c e   i n p u t   a n d   o u t p u t   b u f f e r .  
   *   @ r e t u r n   n o n e .  
   * /  
  
 v o i d   a r m _ d c t 4 _ f 3 2 (  
     c o n s t   a r m _ d c t 4 _ i n s t a n c e _ f 3 2   *   S ,  
     f l o a t 3 2 _ t   *   p S t a t e ,  
     f l o a t 3 2 _ t   *   p I n l i n e B u f f e r )  
 {  
     u i n t 3 2 _ t   i ;                                                                         / *   L o o p   c o u n t e r   * /  
     f l o a t 3 2 _ t   * w e i g h t s   =   S - > p T w i d d l e ;                             / *   P o i n t e r   t o   t h e   W e i g h t s   t a b l e   * /  
     f l o a t 3 2 _ t   * c o s F a c t   =   S - > p C o s F a c t o r ;                         / *   P o i n t e r   t o   t h e   c o s   f a c t o r s   t a b l e   * /  
     f l o a t 3 2 _ t   * p S 1 ,   * p S 2 ,   * p b u f f ;                                     / *   T e m p o r a r y   p o i n t e r s   f o r   i n p u t   b u f f e r   a n d   p S t a t e   b u f f e r   * /  
     f l o a t 3 2 _ t   i n ;                                                                     / *   T e m p o r a r y   v a r i a b l e   * /  
  
  
     / *   D C T 4   c o m p u t a t i o n   i n v o l v e s   D C T 2   ( w h i c h   i s   c a l c u l a t e d   u s i n g   R F F T )  
       *   a l o n g   w i t h   s o m e   p r e - p r o c e s s i n g   a n d   p o s t - p r o c e s s i n g .  
       *   C o m p u t a t i o n a l   p r o c e d u r e   i s   e x p l a i n e d   a s   f o l l o w s :  
       *   ( a )   P r e - p r o c e s s i n g   i n v o l v e s   m u l t i p l y i n g   i n p u t   w i t h   c o s   f a c t o r ,  
       *           r ( n )   =   2   *   u ( n )   *   c o s ( p i * ( 2 * n + 1 ) / ( 4 * n ) )  
       *                             w h e r e ,  
       *                                   r ( n )   - -   o u t p u t   o f   p r e p r o c e s s i n g  
       *                                   u ( n )   - -   i n p u t   t o   p r e p r o c e s s i n g ( a c t u a l   S o u r c e   b u f f e r )  
       *   ( b )   C a l c u l a t i o n   o f   D C T 2   u s i n g   F F T   i s   d i v i d e d   i n t o   t h r e e   s t e p s :  
       *                                     S t e p 1 :   R e - o r d e r i n g   o f   e v e n   a n d   o d d   e l e m e n t s   o f   i n p u t .  
       *                                     S t e p 2 :   C a l c u l a t i n g   F F T   o f   t h e   r e - o r d e r e d   i n p u t .  
       *                                     S t e p 3 :   T a k i n g   t h e   r e a l   p a r t   o f   t h e   p r o d u c t   o f   F F T   o u t p u t   a n d   w e i g h t s .  
       *   ( c )   P o s t - p r o c e s s i n g   -   D C T 4   c a n   b e   o b t a i n e d   f r o m   D C T 2   o u t p u t   u s i n g   t h e   f o l l o w i n g   e q u a t i o n :  
       *                                       Y 4 ( k )   =   Y 2 ( k )   -   Y 4 ( k - 1 )   a n d   Y 4 ( - 1 )   =   Y 4 ( 0 )  
       *                                                 w h e r e ,  
       *                                                       Y 4   - -   D C T 4   o u t p u t ,       Y 2   - -   D C T 2   o u t p u t  
       *   ( d )   M u l t i p l y i n g   t h e   o u t p u t   w i t h   t h e   n o r m a l i z i n g   f a c t o r   s q r t ( 2 / N ) .  
       * /  
  
                 / * - - - - - - - -   P r e - p r o c e s s i n g   - - - - - - - - - - - - * /  
     / *   M u l t i p l y i n g   i n p u t   w i t h   c o s   f a c t o r   i . e .   r ( n )   =   2   *   x ( n )   *   c o s ( p i * ( 2 * n + 1 ) / ( 4 * n ) )   * /  
     a r m _ s c a l e _ f 3 2 ( p I n l i n e B u f f e r ,   2 . 0 f ,   p I n l i n e B u f f e r ,   S - > N ) ;  
     a r m _ m u l t _ f 3 2 ( p I n l i n e B u f f e r ,   c o s F a c t ,   p I n l i n e B u f f e r ,   S - > N ) ;  
  
     / *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
       *   S t e p 1 :   R e - o r d e r i n g   o f   e v e n   a n d   o d d   e l e m e n t s   a s ,  
       *                           p S t a t e [ i ]   =     p I n l i n e B u f f e r [ 2 * i ]   a n d  
       *                           p S t a t e [ N - i - 1 ]   =   p I n l i n e B u f f e r [ 2 * i + 1 ]   w h e r e   i   =   0   t o   N / 2  
       - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
     / *   p S 1   i n i t i a l i z e d   t o   p S t a t e   * /  
     p S 1   =   p S t a t e ;  
  
     / *   p S 2   i n i t i a l i z e d   t o   p S t a t e + N - 1 ,   s o   t h a t   i t   p o i n t s   t o   t h e   e n d   o f   t h e   s t a t e   b u f f e r   * /  
     p S 2   =   p S t a t e   +   ( S - > N   -   1 U ) ;  
  
     / *   p b u f f   i n i t i a l i z e d   t o   i n p u t   b u f f e r   * /  
     p b u f f   =   p I n l i n e B u f f e r ;  
  
 # i f   d e f i n e d   ( A R M _ M A T H _ D S P )  
  
     / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 4   a n d   C o r t e x - M 3   * /  
  
     / *   I n i t i a l i z i n g   t h e   l o o p   c o u n t e r   t o   N / 2   > >   2   f o r   l o o p   u n r o l l i n g   b y   4   * /  
     i   =   ( u i n t 3 2 _ t )   S - > N b y 2   > >   2 U ;  
  
     / *   F i r s t   p a r t   o f   t h e   p r o c e s s i n g   w i t h   l o o p   u n r o l l i n g .     C o m p u t e   4   o u t p u t s   a t   a   t i m e .  
       * *   a   s e c o n d   l o o p   b e l o w   c o m p u t e s   t h e   r e m a i n i n g   1   t o   3   s a m p l e s .   * /  
     d o  
     {  
         / *   R e - o r d e r i n g   o f   e v e n   a n d   o d d   e l e m e n t s   * /  
         / *   p S t a t e [ i ]   =     p I n l i n e B u f f e r [ 2 * i ]   * /  
         * p S 1 + +   =   * p b u f f + + ;  
         / *   p S t a t e [ N - i - 1 ]   =   p I n l i n e B u f f e r [ 2 * i + 1 ]   * /  
         * p S 2 - -   =   * p b u f f + + ;  
  
         * p S 1 + +   =   * p b u f f + + ;  
         * p S 2 - -   =   * p b u f f + + ;  
  
         * p S 1 + +   =   * p b u f f + + ;  
         * p S 2 - -   =   * p b u f f + + ;  
  
         * p S 1 + +   =   * p b u f f + + ;  
         * p S 2 - -   =   * p b u f f + + ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         i - - ;  
     }   w h i l e   ( i   >   0 U ) ;  
  
     / *   p b u f f   i n i t i a l i z e d   t o   i n p u t   b u f f e r   * /  
     p b u f f   =   p I n l i n e B u f f e r ;  
  
     / *   p S 1   i n i t i a l i z e d   t o   p S t a t e   * /  
     p S 1   =   p S t a t e ;  
  
     / *   I n i t i a l i z i n g   t h e   l o o p   c o u n t e r   t o   N / 4   i n s t e a d   o f   N   f o r   l o o p   u n r o l l i n g   * /  
     i   =   ( u i n t 3 2 _ t )   S - > N   > >   2 U ;  
  
     / *   P r o c e s s i n g   w i t h   l o o p   u n r o l l i n g   4   t i m e s   a s   N   i s   a l w a y s   m u l t i p l e   o f   4 .  
       *   C o m p u t e   4   o u t p u t s   a t   a   t i m e   * /  
     d o  
     {  
         / *   W r i t i n g   t h e   r e - o r d e r e d   o u t p u t   b a c k   t o   i n p l a c e   i n p u t   b u f f e r   * /  
         * p b u f f + +   =   * p S 1 + + ;  
         * p b u f f + +   =   * p S 1 + + ;  
         * p b u f f + +   =   * p S 1 + + ;  
         * p b u f f + +   =   * p S 1 + + ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         i - - ;  
     }   w h i l e   ( i   >   0 U ) ;  
  
  
     / *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
       *           S t e p 2 :   C a l c u l a t e   R F F T   f o r   N - p o i n t   i n p u t  
       *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
     / *   p I n l i n e B u f f e r   i s   r e a l   i n p u t   o f   l e n g t h   N   ,   p S t a t e   i s   t h e   c o m p l e x   o u t p u t   o f   l e n g t h   2 N   * /  
     a r m _ r f f t _ f 3 2 ( S - > p R f f t ,   p I n l i n e B u f f e r ,   p S t a t e ) ;  
  
                 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
 	   *     S t e p 3 :   M u l t i p l y   t h e   F F T   o u t p u t   w i t h   t h e   w e i g h t s .  
 	   * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
     a r m _ c m p l x _ m u l t _ c m p l x _ f 3 2 ( p S t a t e ,   w e i g h t s ,   p S t a t e ,   S - > N ) ;  
  
     / *   - - - - - - - - - - -   P o s t - p r o c e s s i n g   - - - - - - - - - -   * /  
     / *   D C T - I V   c a n   b e   o b t a i n e d   f r o m   D C T - I I   b y   t h e   e q u a t i o n ,  
       *               Y 4 ( k )   =   Y 2 ( k )   -   Y 4 ( k - 1 )   a n d   Y 4 ( - 1 )   =   Y 4 ( 0 )  
       *               H e n c e ,   Y 4 ( 0 )   =   Y 2 ( 0 ) / 2     * /  
     / *   G e t t i n g   o n l y   r e a l   p a r t   f r o m   t h e   o u t p u t   a n d   C o n v e r t i n g   t o   D C T - I V   * /  
  
     / *   I n i t i a l i z i n g   t h e   l o o p   c o u n t e r   t o   N   > >   2   f o r   l o o p   u n r o l l i n g   b y   4   * /  
     i   =   ( ( u i n t 3 2 _ t )   S - > N   -   1 U )   > >   2 U ;  
  
     / *   p b u f f   i n i t i a l i z e d   t o   i n p u t   b u f f e r .   * /  
     p b u f f   =   p I n l i n e B u f f e r ;  
  
     / *   p S 1   i n i t i a l i z e d   t o   p S t a t e   * /  
     p S 1   =   p S t a t e ;  
  
     / *   C a l c u l a t i n g   Y 4 ( 0 )   f r o m   Y 2 ( 0 )   u s i n g   Y 4 ( 0 )   =   Y 2 ( 0 ) / 2   * /  
     i n   =   * p S 1 + +   *   ( f l o a t 3 2 _ t )   0 . 5 ;  
     / *   i n p u t   b u f f e r   a c t s   a s   i n p l a c e ,   s o   o u t p u t   v a l u e s   a r e   s t o r e d   i n   t h e   i n p u t   i t s e l f .   * /  
     * p b u f f + +   =   i n ;  
  
     / *   p S t a t e   p o i n t e r   i s   i n c r e m e n t e d   t w i c e   a s   t h e   r e a l   v a l u e s   a r e   l o c a t e d   a l t e r n a t i v e l y   i n   t h e   a r r a y   * /  
     p S 1 + + ;  
  
     / *   F i r s t   p a r t   o f   t h e   p r o c e s s i n g   w i t h   l o o p   u n r o l l i n g .     C o m p u t e   4   o u t p u t s   a t   a   t i m e .  
       * *   a   s e c o n d   l o o p   b e l o w   c o m p u t e s   t h e   r e m a i n i n g   1   t o   3   s a m p l e s .   * /  
     d o  
     {  
         / *   C a l c u l a t i n g   Y 4 ( 1 )   t o   Y 4 ( N - 1 )   f r o m   Y 2   u s i n g   e q u a t i o n   Y 4 ( k )   =   Y 2 ( k )   -   Y 4 ( k - 1 )   * /  
         / *   p S t a t e   p o i n t e r   ( p S 1 )   i s   i n c r e m e n t e d   t w i c e   a s   t h e   r e a l   v a l u e s   a r e   l o c a t e d   a l t e r n a t i v e l y   i n   t h e   a r r a y   * /  
         i n   =   * p S 1 + +   -   i n ;  
         * p b u f f + +   =   i n ;  
         / *   p o i n t s   t o   t h e   n e x t   r e a l   v a l u e   * /  
         p S 1 + + ;  
  
         i n   =   * p S 1 + +   -   i n ;  
         * p b u f f + +   =   i n ;  
         p S 1 + + ;  
  
         i n   =   * p S 1 + +   -   i n ;  
         * p b u f f + +   =   i n ;  
         p S 1 + + ;  
  
         i n   =   * p S 1 + +   -   i n ;  
         * p b u f f + +   =   i n ;  
         p S 1 + + ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         i - - ;  
     }   w h i l e   ( i   >   0 U ) ;  
  
     / *   I f   t h e   b l o c k S i z e   i s   n o t   a   m u l t i p l e   o f   4 ,   c o m p u t e   a n y   r e m a i n i n g   o u t p u t   s a m p l e s   h e r e .  
       * *   N o   l o o p   u n r o l l i n g   i s   u s e d .   * /  
     i   =   ( ( u i n t 3 2 _ t )   S - > N   -   1 U )   %   0 x 4 U ;  
  
     w h i l e   ( i   >   0 U )  
     {  
         / *   C a l c u l a t i n g   Y 4 ( 1 )   t o   Y 4 ( N - 1 )   f r o m   Y 2   u s i n g   e q u a t i o n   Y 4 ( k )   =   Y 2 ( k )   -   Y 4 ( k - 1 )   * /  
         / *   p S t a t e   p o i n t e r   ( p S 1 )   i s   i n c r e m e n t e d   t w i c e   a s   t h e   r e a l   v a l u e s   a r e   l o c a t e d   a l t e r n a t i v e l y   i n   t h e   a r r a y   * /  
         i n   =   * p S 1 + +   -   i n ;  
         * p b u f f + +   =   i n ;  
         / *   p o i n t s   t o   t h e   n e x t   r e a l   v a l u e   * /  
         p S 1 + + ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         i - - ;  
     }  
  
  
                 / * - - - - - - - - - - - -   N o r m a l i z i n g   t h e   o u t p u t   b y   m u l t i p l y i n g   w i t h   t h e   n o r m a l i z i n g   f a c t o r   - - - - - - - - - - * /  
  
     / *   I n i t i a l i z i n g   t h e   l o o p   c o u n t e r   t o   N / 4   i n s t e a d   o f   N   f o r   l o o p   u n r o l l i n g   * /  
     i   =   ( u i n t 3 2 _ t )   S - > N   > >   2 U ;  
  
     / *   p b u f f   i n i t i a l i z e d   t o   t h e   p I n l i n e B u f f e r ( n o w   c o n t a i n s   t h e   o u t p u t   v a l u e s )   * /  
     p b u f f   =   p I n l i n e B u f f e r ;  
  
     / *   P r o c e s s i n g   w i t h   l o o p   u n r o l l i n g   4   t i m e s   a s   N   i s   a l w a y s   m u l t i p l e   o f   4 .     C o m p u t e   4   o u t p u t s   a t   a   t i m e   * /  
     d o  
     {  
         / *   M u l t i p l y i n g   p I n l i n e B u f f e r   w i t h   t h e   n o r m a l i z i n g   f a c t o r   s q r t ( 2 / N )   * /  
         i n   =   * p b u f f ;  
         * p b u f f + +   =   i n   *   S - > n o r m a l i z e ;  
  
         i n   =   * p b u f f ;  
         * p b u f f + +   =   i n   *   S - > n o r m a l i z e ;  
  
         i n   =   * p b u f f ;  
         * p b u f f + +   =   i n   *   S - > n o r m a l i z e ;  
  
         i n   =   * p b u f f ;  
         * p b u f f + +   =   i n   *   S - > n o r m a l i z e ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         i - - ;  
     }   w h i l e   ( i   >   0 U ) ;  
  
  
 # e l s e  
  
     / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 0   * /  
  
     / *   I n i t i a l i z i n g   t h e   l o o p   c o u n t e r   t o   N / 2   * /  
     i   =   ( u i n t 3 2 _ t )   S - > N b y 2 ;  
  
     d o  
     {  
         / *   R e - o r d e r i n g   o f   e v e n   a n d   o d d   e l e m e n t s   * /  
         / *   p S t a t e [ i ]   =     p I n l i n e B u f f e r [ 2 * i ]   * /  
         * p S 1 + +   =   * p b u f f + + ;  
         / *   p S t a t e [ N - i - 1 ]   =   p I n l i n e B u f f e r [ 2 * i + 1 ]   * /  
         * p S 2 - -   =   * p b u f f + + ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         i - - ;  
     }   w h i l e   ( i   >   0 U ) ;  
  
     / *   p b u f f   i n i t i a l i z e d   t o   i n p u t   b u f f e r   * /  
     p b u f f   =   p I n l i n e B u f f e r ;  
  
     / *   p S 1   i n i t i a l i z e d   t o   p S t a t e   * /  
     p S 1   =   p S t a t e ;  
  
     / *   I n i t i a l i z i n g   t h e   l o o p   c o u n t e r   * /  
     i   =   ( u i n t 3 2 _ t )   S - > N ;  
  
     d o  
     {  
         / *   W r i t i n g   t h e   r e - o r d e r e d   o u t p u t   b a c k   t o   i n p l a c e   i n p u t   b u f f e r   * /  
         * p b u f f + +   =   * p S 1 + + ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         i - - ;  
     }   w h i l e   ( i   >   0 U ) ;  
  
  
     / *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
       *           S t e p 2 :   C a l c u l a t e   R F F T   f o r   N - p o i n t   i n p u t  
       *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
     / *   p I n l i n e B u f f e r   i s   r e a l   i n p u t   o f   l e n g t h   N   ,   p S t a t e   i s   t h e   c o m p l e x   o u t p u t   o f   l e n g t h   2 N   * /  
     a r m _ r f f t _ f 3 2 ( S - > p R f f t ,   p I n l i n e B u f f e r ,   p S t a t e ) ;  
  
                 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
 	   *     S t e p 3 :   M u l t i p l y   t h e   F F T   o u t p u t   w i t h   t h e   w e i g h t s .  
 	   * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
     a r m _ c m p l x _ m u l t _ c m p l x _ f 3 2 ( p S t a t e ,   w e i g h t s ,   p S t a t e ,   S - > N ) ;  
  
     / *   - - - - - - - - - - -   P o s t - p r o c e s s i n g   - - - - - - - - - -   * /  
     / *   D C T - I V   c a n   b e   o b t a i n e d   f r o m   D C T - I I   b y   t h e   e q u a t i o n ,  
       *               Y 4 ( k )   =   Y 2 ( k )   -   Y 4 ( k - 1 )   a n d   Y 4 ( - 1 )   =   Y 4 ( 0 )  
       *               H e n c e ,   Y 4 ( 0 )   =   Y 2 ( 0 ) / 2     * /  
     / *   G e t t i n g   o n l y   r e a l   p a r t   f r o m   t h e   o u t p u t   a n d   C o n v e r t i n g   t o   D C T - I V   * /  
  
     / *   p b u f f   i n i t i a l i z e d   t o   i n p u t   b u f f e r .   * /  
     p b u f f   =   p I n l i n e B u f f e r ;  
  
     / *   p S 1   i n i t i a l i z e d   t o   p S t a t e   * /  
     p S 1   =   p S t a t e ;  
  
     / *   C a l c u l a t i n g   Y 4 ( 0 )   f r o m   Y 2 ( 0 )   u s i n g   Y 4 ( 0 )   =   Y 2 ( 0 ) / 2   * /  
     i n   =   * p S 1 + +   *   ( f l o a t 3 2 _ t )   0 . 5 ;  
     / *   i n p u t   b u f f e r   a c t s   a s   i n p l a c e ,   s o   o u t p u t   v a l u e s   a r e   s t o r e d   i n   t h e   i n p u t   i t s e l f .   * /  
     * p b u f f + +   =   i n ;  
  
     / *   p S t a t e   p o i n t e r   i s   i n c r e m e n t e d   t w i c e   a s   t h e   r e a l   v a l u e s   a r e   l o c a t e d   a l t e r n a t i v e l y   i n   t h e   a r r a y   * /  
     p S 1 + + ;  
  
     / *   I n i t i a l i z i n g   t h e   l o o p   c o u n t e r   * /  
     i   =   ( ( u i n t 3 2 _ t )   S - > N   -   1 U ) ;  
  
     d o  
     {  
         / *   C a l c u l a t i n g   Y 4 ( 1 )   t o   Y 4 ( N - 1 )   f r o m   Y 2   u s i n g   e q u a t i o n   Y 4 ( k )   =   Y 2 ( k )   -   Y 4 ( k - 1 )   * /  
         / *   p S t a t e   p o i n t e r   ( p S 1 )   i s   i n c r e m e n t e d   t w i c e   a s   t h e   r e a l   v a l u e s   a r e   l o c a t e d   a l t e r n a t i v e l y   i n   t h e   a r r a y   * /  
         i n   =   * p S 1 + +   -   i n ;  
         * p b u f f + +   =   i n ;  
         / *   p o i n t s   t o   t h e   n e x t   r e a l   v a l u e   * /  
         p S 1 + + ;  
  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         i - - ;  
     }   w h i l e   ( i   >   0 U ) ;  
  
  
                 / * - - - - - - - - - - - -   N o r m a l i z i n g   t h e   o u t p u t   b y   m u l t i p l y i n g   w i t h   t h e   n o r m a l i z i n g   f a c t o r   - - - - - - - - - - * /  
  
     / *   I n i t i a l i z i n g   t h e   l o o p   c o u n t e r   * /  
     i   =   ( u i n t 3 2 _ t )   S - > N ;  
  
     / *   p b u f f   i n i t i a l i z e d   t o   t h e   p I n l i n e B u f f e r ( n o w   c o n t a i n s   t h e   o u t p u t   v a l u e s )   * /  
     p b u f f   =   p I n l i n e B u f f e r ;  
  
     d o  
     {  
         / *   M u l t i p l y i n g   p I n l i n e B u f f e r   w i t h   t h e   n o r m a l i z i n g   f a c t o r   s q r t ( 2 / N )   * /  
         i n   =   * p b u f f ;  
         * p b u f f + +   =   i n   *   S - > n o r m a l i z e ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         i - - ;  
     }   w h i l e   ( i   >   0 U ) ;  
  
 # e n d i f   / *   # i f   d e f i n e d   ( A R M _ M A T H _ D S P )   * /  
  
 }  
  
 / * *  
       *   @ }   e n d   o f   D C T 4 _ I D C T 4   g r o u p  
       * /  