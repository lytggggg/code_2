??/ * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * / / * *  
   *   @ f i l e           c m s i s _ c p 1 5 . h  
   *   @ b r i e f         C M S I S   c o m p i l e r   s p e c i f i c   m a c r o s ,   f u n c t i o n s ,   i n s t r u c t i o n s  
   *   @ v e r s i o n     V 1 . 0 . 1  
   *   @ d a t e           0 7 .   S e p   2 0 1 7  
   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 / *  
   *   C o p y r i g h t   ( c )   2 0 0 9 - 2 0 1 7   A R M   L i m i t e d .   A l l   r i g h t s   r e s e r v e d .  
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
 # i f       d e f i n e d   (   _ _ I C C A R M _ _   )  
     # p r a g m a   s y s t e m _ i n c l u d e                   / *   t r e a t   f i l e   a s   s y s t e m   i n c l u d e   f i l e   f o r   M I S R A   c h e c k   * /  
 # e l i f   d e f i n e d   ( _ _ c l a n g _ _ )  
     # p r a g m a   c l a n g   s y s t e m _ h e a d e r       / *   t r e a t   f i l e   a s   s y s t e m   i n c l u d e   f i l e   * /  
 # e n d i f  
  
 # i f n d e f   _ _ C M S I S _ C P 1 5 _ H  
 # d e f i n e   _ _ C M S I S _ C P 1 5 _ H  
  
 / * *   \ b r i e f     G e t   A C T L R  
         \ r e t u r n                               A u x i l i a r y   C o n t r o l   r e g i s t e r   v a l u e  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   u i n t 3 2 _ t   _ _ g e t _ A C T L R ( v o i d )  
 {  
     u i n t 3 2 _ t   r e s u l t ;  
     _ _ g e t _ C P ( 1 5 ,   0 ,   r e s u l t ,   1 ,   0 ,   1 ) ;  
     r e t u r n ( r e s u l t ) ;  
 }  
  
 / * *   \ b r i e f     S e t   A C T L R  
         \ p a r a m   [ i n ]         a c t l r     A u x i l i a r y   C o n t r o l   v a l u e   t o   s e t  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   v o i d   _ _ s e t _ A C T L R ( u i n t 3 2 _ t   a c t l r )  
 {  
     _ _ s e t _ C P ( 1 5 ,   0 ,   a c t l r ,   1 ,   0 ,   1 ) ;  
 }  
  
 / * *   \ b r i e f     G e t   C P A C R  
         \ r e t u r n                               C o p r o c e s s o r   A c c e s s   C o n t r o l   r e g i s t e r   v a l u e  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   u i n t 3 2 _ t   _ _ g e t _ C P A C R ( v o i d )  
 {  
     u i n t 3 2 _ t   r e s u l t ;  
     _ _ g e t _ C P ( 1 5 ,   0 ,   r e s u l t ,   1 ,   0 ,   2 ) ;  
     r e t u r n   r e s u l t ;  
 }  
  
 / * *   \ b r i e f     S e t   C P A C R  
         \ p a r a m   [ i n ]         c p a c r     C o p r o c e s s o r   A c c e s s   C o n t r o l   v a l u e   t o   s e t  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   v o i d   _ _ s e t _ C P A C R ( u i n t 3 2 _ t   c p a c r )  
 {  
     _ _ s e t _ C P ( 1 5 ,   0 ,   c p a c r ,   1 ,   0 ,   2 ) ;  
 }  
  
 / * *   \ b r i e f     G e t   D F S R  
         \ r e t u r n                               D a t a   F a u l t   S t a t u s   R e g i s t e r   v a l u e  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   u i n t 3 2 _ t   _ _ g e t _ D F S R ( v o i d )  
 {  
     u i n t 3 2 _ t   r e s u l t ;  
     _ _ g e t _ C P ( 1 5 ,   0 ,   r e s u l t ,   5 ,   0 ,   0 ) ;  
     r e t u r n   r e s u l t ;  
 }  
  
 / * *   \ b r i e f     S e t   D F S R  
         \ p a r a m   [ i n ]         d f s r     D a t a   F a u l t   S t a t u s   v a l u e   t o   s e t  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   v o i d   _ _ s e t _ D F S R ( u i n t 3 2 _ t   d f s r )  
 {  
     _ _ s e t _ C P ( 1 5 ,   0 ,   d f s r ,   5 ,   0 ,   0 ) ;  
 }  
  
 / * *   \ b r i e f     G e t   I F S R  
         \ r e t u r n                               I n s t r u c t i o n   F a u l t   S t a t u s   R e g i s t e r   v a l u e  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   u i n t 3 2 _ t   _ _ g e t _ I F S R ( v o i d )  
 {  
     u i n t 3 2 _ t   r e s u l t ;  
     _ _ g e t _ C P ( 1 5 ,   0 ,   r e s u l t ,   5 ,   0 ,   1 ) ;  
     r e t u r n   r e s u l t ;  
 }  
  
 / * *   \ b r i e f     S e t   I F S R  
         \ p a r a m   [ i n ]         i f s r     I n s t r u c t i o n   F a u l t   S t a t u s   v a l u e   t o   s e t  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   v o i d   _ _ s e t _ I F S R ( u i n t 3 2 _ t   i f s r )  
 {  
     _ _ s e t _ C P ( 1 5 ,   0 ,   i f s r ,   5 ,   0 ,   1 ) ;  
 }  
  
 / * *   \ b r i e f     G e t   I S R  
         \ r e t u r n                               I n t e r r u p t   S t a t u s   R e g i s t e r   v a l u e  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   u i n t 3 2 _ t   _ _ g e t _ I S R ( v o i d )  
 {  
     u i n t 3 2 _ t   r e s u l t ;  
     _ _ g e t _ C P ( 1 5 ,   0 ,   r e s u l t ,   1 2 ,   1 ,   0 ) ;  
     r e t u r n   r e s u l t ;  
 }  
  
 / * *   \ b r i e f     G e t   C B A R  
         \ r e t u r n                               C o n f i g u r a t i o n   B a s e   A d d r e s s   r e g i s t e r   v a l u e  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   u i n t 3 2 _ t   _ _ g e t _ C B A R ( v o i d )  
 {  
     u i n t 3 2 _ t   r e s u l t ;  
     _ _ g e t _ C P ( 1 5 ,   4 ,   r e s u l t ,   1 5 ,   0 ,   0 ) ;  
     r e t u r n   r e s u l t ;  
 }  
  
 / * *   \ b r i e f     G e t   T T B R 0  
  
         T h i s   f u n c t i o n   r e t u r n s   t h e   v a l u e   o f   t h e   T r a n s l a t i o n   T a b l e   B a s e   R e g i s t e r   0 .  
  
         \ r e t u r n                               T r a n s l a t i o n   T a b l e   B a s e   R e g i s t e r   0   v a l u e  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   u i n t 3 2 _ t   _ _ g e t _ T T B R 0 ( v o i d )  
 {  
     u i n t 3 2 _ t   r e s u l t ;  
     _ _ g e t _ C P ( 1 5 ,   0 ,   r e s u l t ,   2 ,   0 ,   0 ) ;  
     r e t u r n   r e s u l t ;  
 }  
  
 / * *   \ b r i e f     S e t   T T B R 0  
  
         T h i s   f u n c t i o n   a s s i g n s   t h e   g i v e n   v a l u e   t o   t h e   T r a n s l a t i o n   T a b l e   B a s e   R e g i s t e r   0 .  
  
         \ p a r a m   [ i n ]         t t b r 0     T r a n s l a t i o n   T a b l e   B a s e   R e g i s t e r   0   v a l u e   t o   s e t  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   v o i d   _ _ s e t _ T T B R 0 ( u i n t 3 2 _ t   t t b r 0 )  
 {  
     _ _ s e t _ C P ( 1 5 ,   0 ,   t t b r 0 ,   2 ,   0 ,   0 ) ;  
 }  
  
 / * *   \ b r i e f     G e t   D A C R  
  
         T h i s   f u n c t i o n   r e t u r n s   t h e   v a l u e   o f   t h e   D o m a i n   A c c e s s   C o n t r o l   R e g i s t e r .  
  
         \ r e t u r n                               D o m a i n   A c c e s s   C o n t r o l   R e g i s t e r   v a l u e  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   u i n t 3 2 _ t   _ _ g e t _ D A C R ( v o i d )  
 {  
     u i n t 3 2 _ t   r e s u l t ;  
     _ _ g e t _ C P ( 1 5 ,   0 ,   r e s u l t ,   3 ,   0 ,   0 ) ;  
     r e t u r n   r e s u l t ;  
 }  
  
 / * *   \ b r i e f     S e t   D A C R  
  
         T h i s   f u n c t i o n   a s s i g n s   t h e   g i v e n   v a l u e   t o   t h e   D o m a i n   A c c e s s   C o n t r o l   R e g i s t e r .  
  
         \ p a r a m   [ i n ]         d a c r       D o m a i n   A c c e s s   C o n t r o l   R e g i s t e r   v a l u e   t o   s e t  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   v o i d   _ _ s e t _ D A C R ( u i n t 3 2 _ t   d a c r )  
 {  
     _ _ s e t _ C P ( 1 5 ,   0 ,   d a c r ,   3 ,   0 ,   0 ) ;  
 }  
  
 / * *   \ b r i e f     S e t   S C T L R  
  
         T h i s   f u n c t i o n   a s s i g n s   t h e   g i v e n   v a l u e   t o   t h e   S y s t e m   C o n t r o l   R e g i s t e r .  
  
         \ p a r a m   [ i n ]         s c t l r     S y s t e m   C o n t r o l   R e g i s t e r   v a l u e   t o   s e t  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   v o i d   _ _ s e t _ S C T L R ( u i n t 3 2 _ t   s c t l r )  
 {  
     _ _ s e t _ C P ( 1 5 ,   0 ,   s c t l r ,   1 ,   0 ,   0 ) ;  
 }  
  
 / * *   \ b r i e f     G e t   S C T L R  
         \ r e t u r n                               S y s t e m   C o n t r o l   R e g i s t e r   v a l u e  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   u i n t 3 2 _ t   _ _ g e t _ S C T L R ( v o i d )  
 {  
     u i n t 3 2 _ t   r e s u l t ;  
     _ _ g e t _ C P ( 1 5 ,   0 ,   r e s u l t ,   1 ,   0 ,   0 ) ;  
     r e t u r n   r e s u l t ;  
 }  
  
 / * *   \ b r i e f     S e t   A C T R L  
         \ p a r a m   [ i n ]         a c t r l     A u x i l i a r y   C o n t r o l   R e g i s t e r   v a l u e   t o   s e t  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   v o i d   _ _ s e t _ A C T R L ( u i n t 3 2 _ t   a c t r l )  
 {  
     _ _ s e t _ C P ( 1 5 ,   0 ,   a c t r l ,   1 ,   0 ,   1 ) ;  
 }  
  
 / * *   \ b r i e f     G e t   A C T R L  
         \ r e t u r n                               A u x i l i a r y   C o n t r o l   R e g i s t e r   v a l u e  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   u i n t 3 2 _ t   _ _ g e t _ A C T R L ( v o i d )  
 {  
     u i n t 3 2 _ t   r e s u l t ;  
     _ _ g e t _ C P ( 1 5 ,   0 ,   r e s u l t ,   1 ,   0 ,   1 ) ;  
     r e t u r n   r e s u l t ;  
 }  
  
 / * *   \ b r i e f     G e t   M P I D R  
  
         T h i s   f u n c t i o n   r e t u r n s   t h e   v a l u e   o f   t h e   M u l t i p r o c e s s o r   A f f i n i t y   R e g i s t e r .  
  
         \ r e t u r n                               M u l t i p r o c e s s o r   A f f i n i t y   R e g i s t e r   v a l u e  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   u i n t 3 2 _ t   _ _ g e t _ M P I D R ( v o i d )  
 {  
     u i n t 3 2 _ t   r e s u l t ;  
     _ _ g e t _ C P ( 1 5 ,   0 ,   r e s u l t ,   0 ,   0 ,   5 ) ;  
     r e t u r n   r e s u l t ;  
 }  
  
 / * *   \ b r i e f     G e t   V B A R  
  
         T h i s   f u n c t i o n   r e t u r n s   t h e   v a l u e   o f   t h e   V e c t o r   B a s e   A d d r e s s   R e g i s t e r .  
  
         \ r e t u r n                               V e c t o r   B a s e   A d d r e s s   R e g i s t e r  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   u i n t 3 2 _ t   _ _ g e t _ V B A R ( v o i d )  
 {  
     u i n t 3 2 _ t   r e s u l t ;  
     _ _ g e t _ C P ( 1 5 ,   0 ,   r e s u l t ,   1 2 ,   0 ,   0 ) ;  
     r e t u r n   r e s u l t ;  
 }  
  
 / * *   \ b r i e f     S e t   V B A R  
  
         T h i s   f u n c t i o n   a s s i g n s   t h e   g i v e n   v a l u e   t o   t h e   V e c t o r   B a s e   A d d r e s s   R e g i s t e r .  
  
         \ p a r a m   [ i n ]         v b a r     V e c t o r   B a s e   A d d r e s s   R e g i s t e r   v a l u e   t o   s e t  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   v o i d   _ _ s e t _ V B A R ( u i n t 3 2 _ t   v b a r )  
 {  
     _ _ s e t _ C P ( 1 5 ,   0 ,   v b a r ,   1 2 ,   0 ,   0 ) ;  
 }  
  
 / * *   \ b r i e f     G e t   M V B A R  
  
         T h i s   f u n c t i o n   r e t u r n s   t h e   v a l u e   o f   t h e   M o n i t o r   V e c t o r   B a s e   A d d r e s s   R e g i s t e r .  
  
         \ r e t u r n                               M o n i t o r   V e c t o r   B a s e   A d d r e s s   R e g i s t e r  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   u i n t 3 2 _ t   _ _ g e t _ M V B A R ( v o i d )  
 {  
     u i n t 3 2 _ t   r e s u l t ;  
     _ _ g e t _ C P ( 1 5 ,   0 ,   r e s u l t ,   1 2 ,   0 ,   1 ) ;  
     r e t u r n   r e s u l t ;  
 }  
  
 / * *   \ b r i e f     S e t   M V B A R  
  
         T h i s   f u n c t i o n   a s s i g n s   t h e   g i v e n   v a l u e   t o   t h e   M o n i t o r   V e c t o r   B a s e   A d d r e s s   R e g i s t e r .  
  
         \ p a r a m   [ i n ]         m v b a r     M o n i t o r   V e c t o r   B a s e   A d d r e s s   R e g i s t e r   v a l u e   t o   s e t  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   v o i d   _ _ s e t _ M V B A R ( u i n t 3 2 _ t   m v b a r )  
 {  
     _ _ s e t _ C P ( 1 5 ,   0 ,   m v b a r ,   1 2 ,   0 ,   1 ) ;  
 }  
  
 # i f   ( d e f i n e d ( _ _ C O R T E X _ A )   & &   ( _ _ C O R T E X _ A   = =   7 U )   & &   \  
         d e f i n e d ( _ _ T I M _ P R E S E N T )   & &   ( _ _ T I M _ P R E S E N T   = =   1 U ) )   | |   \  
         d e f i n e d ( D O X Y G E N )  
  
 / * *   \ b r i e f     S e t   C N T F R Q  
  
     T h i s   f u n c t i o n   a s s i g n s   t h e   g i v e n   v a l u e   t o   P L 1   P h y s i c a l   T i m e r   C o u n t e r   F r e q u e n c y   R e g i s t e r   ( C N T F R Q ) .  
  
     \ p a r a m   [ i n ]         v a l u e     C N T F R Q   R e g i s t e r   v a l u e   t o   s e t  
 * /  
 _ _ S T A T I C _ F O R C E I N L I N E   v o i d   _ _ s e t _ C N T F R Q ( u i n t 3 2 _ t   v a l u e )  
 {  
     _ _ s e t _ C P ( 1 5 ,   0 ,   v a l u e ,   1 4 ,   0 ,   0 ) ;  
 }  
  
 / * *   \ b r i e f     G e t   C N T F R Q  
  
         T h i s   f u n c t i o n   r e t u r n s   t h e   v a l u e   o f   t h e   P L 1   P h y s i c a l   T i m e r   C o u n t e r   F r e q u e n c y   R e g i s t e r   ( C N T F R Q ) .  
  
         \ r e t u r n                               C N T F R Q   R e g i s t e r   v a l u e  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   u i n t 3 2 _ t   _ _ g e t _ C N T F R Q ( v o i d )  
 {  
     u i n t 3 2 _ t   r e s u l t ;  
     _ _ g e t _ C P ( 1 5 ,   0 ,   r e s u l t ,   1 4 ,   0   ,   0 ) ;  
     r e t u r n   r e s u l t ;  
 }  
  
 / * *   \ b r i e f     S e t   C N T P _ T V A L  
  
     T h i s   f u n c t i o n   a s s i g n s   t h e   g i v e n   v a l u e   t o   P L 1   P h y s i c a l   T i m e r   V a l u e   R e g i s t e r   ( C N T P _ T V A L ) .  
  
     \ p a r a m   [ i n ]         v a l u e     C N T P _ T V A L   R e g i s t e r   v a l u e   t o   s e t  
 * /  
 _ _ S T A T I C _ F O R C E I N L I N E   v o i d   _ _ s e t _ C N T P _ T V A L ( u i n t 3 2 _ t   v a l u e )  
 {  
     _ _ s e t _ C P ( 1 5 ,   0 ,   v a l u e ,   1 4 ,   2 ,   0 ) ;  
 }  
  
 / * *   \ b r i e f     G e t   C N T P _ T V A L  
  
         T h i s   f u n c t i o n   r e t u r n s   t h e   v a l u e   o f   t h e   P L 1   P h y s i c a l   T i m e r   V a l u e   R e g i s t e r   ( C N T P _ T V A L ) .  
  
         \ r e t u r n                               C N T P _ T V A L   R e g i s t e r   v a l u e  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   u i n t 3 2 _ t   _ _ g e t _ C N T P _ T V A L ( v o i d )  
 {  
     u i n t 3 2 _ t   r e s u l t ;  
     _ _ g e t _ C P ( 1 5 ,   0 ,   r e s u l t ,   1 4 ,   2 ,   0 ) ;  
     r e t u r n   r e s u l t ;  
 }  
  
 / * *   \ b r i e f     G e t   C N T P C T  
  
         T h i s   f u n c t i o n   r e t u r n s   t h e   v a l u e   o f   t h e   6 4   b i t s   P L 1   P h y s i c a l   C o u n t   R e g i s t e r   ( C N T P C T ) .  
  
         \ r e t u r n                               C N T P C T   R e g i s t e r   v a l u e  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   u i n t 6 4 _ t   _ _ g e t _ C N T P C T ( v o i d )  
 {  
     u i n t 6 4 _ t   r e s u l t ;  
     _ _ g e t _ C P 6 4 ( 1 5 ,   0 ,   r e s u l t ,   1 4 ) ;  
     r e t u r n   r e s u l t ;  
 }  
  
 / * *   \ b r i e f     S e t   C N T P _ C V A L  
  
     T h i s   f u n c t i o n   a s s i g n s   t h e   g i v e n   v a l u e   t o   6 4 b i t s   P L 1   P h y s i c a l   T i m e r   C o m p a r e V a l u e   R e g i s t e r   ( C N T P _ C V A L ) .  
  
     \ p a r a m   [ i n ]         v a l u e     C N T P _ C V A L   R e g i s t e r   v a l u e   t o   s e t  
 * /  
 _ _ S T A T I C _ F O R C E I N L I N E   v o i d   _ _ s e t _ C N T P _ C V A L ( u i n t 6 4 _ t   v a l u e )  
 {  
     _ _ s e t _ C P 6 4 ( 1 5 ,   2 ,   v a l u e ,   1 4 ) ;  
 }  
  
 / * *   \ b r i e f     G e t   C N T P _ C V A L  
  
         T h i s   f u n c t i o n   r e t u r n s   t h e   v a l u e   o f   t h e   6 4   b i t s   P L 1   P h y s i c a l   T i m e r   C o m p a r e V a l u e   R e g i s t e r   ( C N T P _ C V A L ) .  
  
         \ r e t u r n                               C N T P _ C V A L   R e g i s t e r   v a l u e  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   u i n t 6 4 _ t   _ _ g e t _ C N T P _ C V A L ( v o i d )  
 {  
     u i n t 6 4 _ t   r e s u l t ;  
     _ _ g e t _ C P 6 4 ( 1 5 ,   2 ,   r e s u l t ,   1 4 ) ;  
     r e t u r n   r e s u l t ;  
 }  
  
 / * *   \ b r i e f     S e t   C N T P _ C T L  
  
     T h i s   f u n c t i o n   a s s i g n s   t h e   g i v e n   v a l u e   t o   P L 1   P h y s i c a l   T i m e r   C o n t r o l   R e g i s t e r   ( C N T P _ C T L ) .  
  
     \ p a r a m   [ i n ]         v a l u e     C N T P _ C T L   R e g i s t e r   v a l u e   t o   s e t  
 * /  
 _ _ S T A T I C _ F O R C E I N L I N E   v o i d   _ _ s e t _ C N T P _ C T L ( u i n t 3 2 _ t   v a l u e )  
 {  
     _ _ s e t _ C P ( 1 5 ,   0 ,   v a l u e ,   1 4 ,   2 ,   1 ) ;  
 }  
  
 / * *   \ b r i e f     G e t   C N T P _ C T L   r e g i s t e r  
         \ r e t u r n                               C N T P _ C T L   R e g i s t e r   v a l u e  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   u i n t 3 2 _ t   _ _ g e t _ C N T P _ C T L ( v o i d )  
 {  
     u i n t 3 2 _ t   r e s u l t ;  
     _ _ g e t _ C P ( 1 5 ,   0 ,   r e s u l t ,   1 4 ,   2 ,   1 ) ;  
     r e t u r n   r e s u l t ;  
 }  
  
 # e n d i f  
  
 / * *   \ b r i e f     S e t   T L B I A L L  
  
     T L B   I n v a l i d a t e   A l l  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   v o i d   _ _ s e t _ T L B I A L L ( u i n t 3 2 _ t   v a l u e )  
 {  
     _ _ s e t _ C P ( 1 5 ,   0 ,   v a l u e ,   8 ,   7 ,   0 ) ;  
 }  
  
 / * *   \ b r i e f     S e t   B P I A L L .  
  
     B r a n c h   P r e d i c t o r   I n v a l i d a t e   A l l  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   v o i d   _ _ s e t _ B P I A L L ( u i n t 3 2 _ t   v a l u e )  
 {  
     _ _ s e t _ C P ( 1 5 ,   0 ,   v a l u e ,   7 ,   5 ,   6 ) ;  
 }  
  
 / * *   \ b r i e f     S e t   I C I A L L U  
  
     I n s t r u c t i o n   C a c h e   I n v a l i d a t e   A l l  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   v o i d   _ _ s e t _ I C I A L L U ( u i n t 3 2 _ t   v a l u e )  
 {  
     _ _ s e t _ C P ( 1 5 ,   0 ,   v a l u e ,   7 ,   5 ,   0 ) ;  
 }  
  
 / * *   \ b r i e f     S e t   D C C M V A C  
  
     D a t a   c a c h e   c l e a n  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   v o i d   _ _ s e t _ D C C M V A C ( u i n t 3 2 _ t   v a l u e )  
 {  
     _ _ s e t _ C P ( 1 5 ,   0 ,   v a l u e ,   7 ,   1 0 ,   1 ) ;  
 }  
  
 / * *   \ b r i e f     S e t   D C I M V A C  
  
     D a t a   c a c h e   i n v a l i d a t e  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   v o i d   _ _ s e t _ D C I M V A C ( u i n t 3 2 _ t   v a l u e )  
 {  
     _ _ s e t _ C P ( 1 5 ,   0 ,   v a l u e ,   7 ,   6 ,   1 ) ;  
 }  
  
 / * *   \ b r i e f     S e t   D C C I M V A C  
  
     D a t a   c a c h e   c l e a n   a n d   i n v a l i d a t e  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   v o i d   _ _ s e t _ D C C I M V A C ( u i n t 3 2 _ t   v a l u e )  
 {  
     _ _ s e t _ C P ( 1 5 ,   0 ,   v a l u e ,   7 ,   1 4 ,   1 ) ;  
 }  
  
 / * *   \ b r i e f     S e t   C S S E L R  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   v o i d   _ _ s e t _ C S S E L R ( u i n t 3 2 _ t   v a l u e )  
 {  
 / /     _ _ A S M   v o l a t i l e ( " M C R   p 1 5 ,   2 ,   % 0 ,   c 0 ,   c 0 ,   0 "   :   :   " r " ( v a l u e )   :   " m e m o r y " ) ;  
     _ _ s e t _ C P ( 1 5 ,   2 ,   v a l u e ,   0 ,   0 ,   0 ) ;  
 }  
  
 / * *   \ b r i e f     G e t   C S S E L R  
         \ r e t u r n   C S S E L R   R e g i s t e r   v a l u e  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   u i n t 3 2 _ t   _ _ g e t _ C S S E L R ( v o i d )  
 {  
     u i n t 3 2 _ t   r e s u l t ;  
 / /     _ _ A S M   v o l a t i l e ( " M R C   p 1 5 ,   2 ,   % 0 ,   c 0 ,   c 0 ,   0 "   :   " = r " ( r e s u l t )   :   :   " m e m o r y " ) ;  
     _ _ g e t _ C P ( 1 5 ,   2 ,   r e s u l t ,   0 ,   0 ,   0 ) ;  
     r e t u r n   r e s u l t ;  
 }  
  
 / * *   \ b r i e f     S e t   C C S I D R  
         \ d e p r e c a t e d   C C S I D R   i t s e l f   i s   r e a d - o n l y .   U s e   _ _ s e t _ C S S E L R   t o   s e l e c t   c a c h e   l e v e l   i n s t e a d .  
   * /  
 C M S I S _ D E P R E C A T E D  
 _ _ S T A T I C _ F O R C E I N L I N E   v o i d   _ _ s e t _ C C S I D R ( u i n t 3 2 _ t   v a l u e )  
 {  
     _ _ s e t _ C S S E L R ( v a l u e ) ;  
 }  
  
 / * *   \ b r i e f     G e t   C C S I D R  
         \ r e t u r n   C C S I D R   R e g i s t e r   v a l u e  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   u i n t 3 2 _ t   _ _ g e t _ C C S I D R ( v o i d )  
 {  
     u i n t 3 2 _ t   r e s u l t ;  
 / /     _ _ A S M   v o l a t i l e ( " M R C   p 1 5 ,   1 ,   % 0 ,   c 0 ,   c 0 ,   0 "   :   " = r " ( r e s u l t )   :   :   " m e m o r y " ) ;  
     _ _ g e t _ C P ( 1 5 ,   1 ,   r e s u l t ,   0 ,   0 ,   0 ) ;  
     r e t u r n   r e s u l t ;  
 }  
  
 / * *   \ b r i e f     G e t   C L I D R  
         \ r e t u r n   C L I D R   R e g i s t e r   v a l u e  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   u i n t 3 2 _ t   _ _ g e t _ C L I D R ( v o i d )  
 {  
     u i n t 3 2 _ t   r e s u l t ;  
 / /     _ _ A S M   v o l a t i l e ( " M R C   p 1 5 ,   1 ,   % 0 ,   c 0 ,   c 0 ,   1 "   :   " = r " ( r e s u l t )   :   :   " m e m o r y " ) ;  
     _ _ g e t _ C P ( 1 5 ,   1 ,   r e s u l t ,   0 ,   0 ,   1 ) ;  
     r e t u r n   r e s u l t ;  
 }  
  
 / * *   \ b r i e f     S e t   D C I S W  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   v o i d   _ _ s e t _ D C I S W ( u i n t 3 2 _ t   v a l u e )  
 {  
 / /     _ _ A S M   v o l a t i l e ( " M C R   p 1 5 ,   0 ,   % 0 ,   c 7 ,   c 6 ,   2 "   :   :   " r " ( v a l u e )   :   " m e m o r y " )  
     _ _ s e t _ C P ( 1 5 ,   0 ,   v a l u e ,   7 ,   6 ,   2 ) ;  
 }  
  
 / * *   \ b r i e f     S e t   D C C S W  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   v o i d   _ _ s e t _ D C C S W ( u i n t 3 2 _ t   v a l u e )  
 {  
 / /     _ _ A S M   v o l a t i l e ( " M C R   p 1 5 ,   0 ,   % 0 ,   c 7 ,   c 1 0 ,   2 "   :   :   " r " ( v a l u e )   :   " m e m o r y " )  
     _ _ s e t _ C P ( 1 5 ,   0 ,   v a l u e ,   7 ,   1 0 ,   2 ) ;  
 }  
  
 / * *   \ b r i e f     S e t   D C C I S W  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   v o i d   _ _ s e t _ D C C I S W ( u i n t 3 2 _ t   v a l u e )  
 {  
 / /     _ _ A S M   v o l a t i l e ( " M C R   p 1 5 ,   0 ,   % 0 ,   c 7 ,   c 1 4 ,   2 "   :   :   " r " ( v a l u e )   :   " m e m o r y " )  
     _ _ s e t _ C P ( 1 5 ,   0 ,   v a l u e ,   7 ,   1 4 ,   2 ) ;  
 }  
  
 # e n d i f  