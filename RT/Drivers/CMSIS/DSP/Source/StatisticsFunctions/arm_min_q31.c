??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ m i n _ q 3 1 . c  
   *   D e s c r i p t i o n :     M i n i m u m   v a l u e   o f   a   Q 3 1   v e c t o r  
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
   *   @ i n g r o u p   g r o u p S t a t s  
   * /  
  
  
 / * *  
   *   @ a d d t o g r o u p   M i n  
   *   @ {  
   * /  
  
  
 / * *  
   *   @ b r i e f   M i n i m u m   v a l u e   o f   a   Q 3 1   v e c t o r .  
   *   @ p a r a m [ i n ]               * p S r c   p o i n t s   t o   t h e   i n p u t   v e c t o r  
   *   @ p a r a m [ i n ]               b l o c k S i z e   l e n g t h   o f   t h e   i n p u t   v e c t o r  
   *   @ p a r a m [ o u t ]             * p R e s u l t   m i n i m u m   v a l u e   r e t u r n e d   h e r e  
   *   @ p a r a m [ o u t ]             * p I n d e x   i n d e x   o f   m i n i m u m   v a l u e   r e t u r n e d   h e r e  
   *   @ r e t u r n   n o n e .  
   * /  
  
 v o i d   a r m _ m i n _ q 3 1 (  
     q 3 1 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 3 1 _ t   *   p R e s u l t ,  
     u i n t 3 2 _ t   *   p I n d e x )  
 {  
 # i f   d e f i n e d   ( A R M _ M A T H _ D S P )  
     / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 4   a n d   C o r t e x - M 3   * /  
  
     q 3 1 _ t   m i n V a l 1 ,   m i n V a l 2 ,   o u t ;                                       / *   T e m p o r a r y   v a r i a b l e s   t o   s t o r e   t h e   o u t p u t   v a l u e .   * /  
     u i n t 3 2 _ t   b l k C n t ,   o u t I n d e x ,   c o u n t ;                             / *   l o o p   c o u n t e r   * /  
  
     / *   I n i t i a l i s e   t h e   c o u n t   v a l u e .   * /  
     c o u n t   =   0 U ;  
     / *   I n i t i a l i s e   t h e   i n d e x   v a l u e   t o   z e r o .   * /  
     o u t I n d e x   =   0 U ;  
     / *   L o a d   f i r s t   i n p u t   v a l u e   t h a t   a c t   a s   r e f e r e n c e   v a l u e   f o r   c o m p a r i s i o n   * /  
     o u t   =   * p S r c + + ;  
  
     / *   L o o p   u n r o l l i n g   * /  
     b l k C n t   =   ( b l o c k S i z e   -   1 U )   > >   2 U ;  
  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   I n i t i a l i z e   m i n V a l   t o   t h e   n e x t   c o n s e c u t i v e   v a l u e s   o n e   b y   o n e   * /  
         m i n V a l 1   =   * p S r c + + ;  
         m i n V a l 2   =   * p S r c + + ;  
  
         / *   c o m p a r e   f o r   t h e   m i n i m u m   v a l u e   * /  
         i f   ( o u t   >   m i n V a l 1 )  
         {  
             / *   U p d a t e   t h e   m i n i m u m   v a l u e   a n d   i t s   i n d e x   * /  
             o u t   =   m i n V a l 1 ;  
             o u t I n d e x   =   c o u n t   +   1 U ;  
         }  
  
         / *   c o m p a r e   f o r   t h e   m i n i m u m   v a l u e   * /  
         i f   ( o u t   >   m i n V a l 2 )  
         {  
             / *   U p d a t e   t h e   m i n i m u m   v a l u e   a n d   i t s   i n d e x   * /  
             o u t   =   m i n V a l 2 ;  
             o u t I n d e x   =   c o u n t   +   2 U ;  
         }  
  
         / *   I n i t i a l i z e   m i n V a l   t o   t h e   n e x t   c o n s e c u t i v e   v a l u e s   o n e   b y   o n e   * /  
         m i n V a l 1   =   * p S r c + + ;  
         m i n V a l 2   =   * p S r c + + ;  
  
         / *   c o m p a r e   f o r   t h e   m i n i m u m   v a l u e   * /  
         i f   ( o u t   >   m i n V a l 1 )  
         {  
             / *   U p d a t e   t h e   m i n i m u m   v a l u e   a n d   i t s   i n d e x   * /  
             o u t   =   m i n V a l 1 ;  
             o u t I n d e x   =   c o u n t   +   3 U ;  
         }  
  
         / *   c o m p a r e   f o r   t h e   m i n i m u m   v a l u e   * /  
         i f   ( o u t   >   m i n V a l 2 )  
         {  
             / *   U p d a t e   t h e   m i n i m u m   v a l u e   a n d   i t s   i n d e x   * /  
             o u t   =   m i n V a l 2 ;  
             o u t I n d e x   =   c o u n t   +   4 U ;  
         }  
  
         c o u n t   + =   4 U ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
  
     / *   i f   ( b l o c k S i z e   -   1 U )   i s   n o t   m u l t i p l e   o f   4   * /  
     b l k C n t   =   ( b l o c k S i z e   -   1 U )   %   4 U ;  
  
 # e l s e  
     / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 0   * /  
  
     q 3 1 _ t   m i n V a l 1 ,   o u t ;                                                         / *   T e m p o r a r y   v a r i a b l e s   t o   s t o r e   t h e   o u t p u t   v a l u e .   * /  
     u i n t 3 2 _ t   b l k C n t ,   o u t I n d e x ;                                           / *   l o o p   c o u n t e r   * /  
  
     / *   I n i t i a l i s e   t h e   i n d e x   v a l u e   t o   z e r o .   * /  
     o u t I n d e x   =   0 U ;  
     / *   L o a d   f i r s t   i n p u t   v a l u e   t h a t   a c t   a s   r e f e r e n c e   v a l u e   f o r   c o m p a r i s i o n   * /  
     o u t   =   * p S r c + + ;  
  
     b l k C n t   =   ( b l o c k S i z e   -   1 U ) ;  
  
 # e n d i f   / *   # i f   d e f i n e d   ( A R M _ M A T H _ D S P )   * /  
  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   I n i t i a l i z e   m i n V a l   t o   t h e   n e x t   c o n s e c u t i v e   v a l u e s   o n e   b y   o n e   * /  
         m i n V a l 1   =   * p S r c + + ;  
  
         / *   c o m p a r e   f o r   t h e   m i n i m u m   v a l u e   * /  
         i f   ( o u t   >   m i n V a l 1 )  
         {  
             / *   U p d a t e   t h e   m i n i m u m   v a l u e   a n d   i t ' s   i n d e x   * /  
             o u t   =   m i n V a l 1 ;  
             o u t I n d e x   =   b l o c k S i z e   -   b l k C n t ;  
         }  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
  
     / *   S t o r e   t h e   m i n i m u m   v a l u e   a n d   i t ' s   i n d e x   i n t o   d e s t i n a t i o n   p o i n t e r s   * /  
     * p R e s u l t   =   o u t ;  
     * p I n d e x   =   o u t I n d e x ;  
 }  
  
 / * *  
   *   @ }   e n d   o f   M i n   g r o u p  
   * /  