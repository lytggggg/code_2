??/ * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
   *   @ f i l e           m p u _ a r m v 7 . h 
   *   @ b r i e f         C M S I S   M P U   A P I   f o r   A r m v 7 - M   M P U 
   *   @ v e r s i o n     V 5 . 0 . 4 
   *   @ d a t e           1 0 .   J a n u a r y   2 0 1 8 
   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * / 
 / * 
   *   C o p y r i g h t   ( c )   2 0 1 7 - 2 0 1 8   A r m   L i m i t e d .   A l l   r i g h t s   r e s e r v e d . 
   * 
   *   S P D X - L i c e n s e - I d e n t i f i e r :   A p a c h e - 2 . 0 
   * 
   *   L i c e n s e d   u n d e r   t h e   A p a c h e   L i c e n s e ,   V e r s i o n   2 . 0   ( t h e   L i c e n s e ) ;   y o u   m a y 
   *   n o t   u s e   t h i s   f i l e   e x c e p t   i n   c o m p l i a n c e   w i t h   t h e   L i c e n s e . 
   *   Y o u   m a y   o b t a i n   a   c o p y   o f   t h e   L i c e n s e   a t 
   * 
   *   w w w . a p a c h e . o r g / l i c e n s e s / L I C E N S E - 2 . 0 
   * 
   *   U n l e s s   r e q u i r e d   b y   a p p l i c a b l e   l a w   o r   a g r e e d   t o   i n   w r i t i n g ,   s o f t w a r e 
   *   d i s t r i b u t e d   u n d e r   t h e   L i c e n s e   i s   d i s t r i b u t e d   o n   a n   A S   I S   B A S I S ,   W I T H O U T 
   *   W A R R A N T I E S   O R   C O N D I T I O N S   O F   A N Y   K I N D ,   e i t h e r   e x p r e s s   o r   i m p l i e d . 
   *   S e e   t h e   L i c e n s e   f o r   t h e   s p e c i f i c   l a n g u a g e   g o v e r n i n g   p e r m i s s i o n s   a n d 
   *   l i m i t a t i o n s   u n d e r   t h e   L i c e n s e . 
   * / 
   
 # i f       d e f i n e d   (   _ _ I C C A R M _ _   ) 
     # p r a g m a   s y s t e m _ i n c l u d e                   / *   t r e a t   f i l e   a s   s y s t e m   i n c l u d e   f i l e   f o r   M I S R A   c h e c k   * / 
 # e l i f   d e f i n e d   ( _ _ c l a n g _ _ ) 
     # p r a g m a   c l a n g   s y s t e m _ h e a d e r         / *   t r e a t   f i l e   a s   s y s t e m   i n c l u d e   f i l e   * / 
 # e n d i f 
   
 # i f n d e f   A R M _ M P U _ A R M V 7 _ H 
 # d e f i n e   A R M _ M P U _ A R M V 7 _ H 
 
 # d e f i n e   A R M _ M P U _ R E G I O N _ S I Z E _ 3 2 B             ( ( u i n t 8 _ t ) 0 x 0 4 U )   / / / ! <   M P U   R e g i o n   S i z e   3 2   B y t e s 
 # d e f i n e   A R M _ M P U _ R E G I O N _ S I Z E _ 6 4 B             ( ( u i n t 8 _ t ) 0 x 0 5 U )   / / / ! <   M P U   R e g i o n   S i z e   6 4   B y t e s 
 # d e f i n e   A R M _ M P U _ R E G I O N _ S I Z E _ 1 2 8 B           ( ( u i n t 8 _ t ) 0 x 0 6 U )   / / / ! <   M P U   R e g i o n   S i z e   1 2 8   B y t e s 
 # d e f i n e   A R M _ M P U _ R E G I O N _ S I Z E _ 2 5 6 B           ( ( u i n t 8 _ t ) 0 x 0 7 U )   / / / ! <   M P U   R e g i o n   S i z e   2 5 6   B y t e s 
 # d e f i n e   A R M _ M P U _ R E G I O N _ S I Z E _ 5 1 2 B           ( ( u i n t 8 _ t ) 0 x 0 8 U )   / / / ! <   M P U   R e g i o n   S i z e   5 1 2   B y t e s 
 # d e f i n e   A R M _ M P U _ R E G I O N _ S I Z E _ 1 K B             ( ( u i n t 8 _ t ) 0 x 0 9 U )   / / / ! <   M P U   R e g i o n   S i z e   1   K B y t e 
 # d e f i n e   A R M _ M P U _ R E G I O N _ S I Z E _ 2 K B             ( ( u i n t 8 _ t ) 0 x 0 A U )   / / / ! <   M P U   R e g i o n   S i z e   2   K B y t e s 
 # d e f i n e   A R M _ M P U _ R E G I O N _ S I Z E _ 4 K B             ( ( u i n t 8 _ t ) 0 x 0 B U )   / / / ! <   M P U   R e g i o n   S i z e   4   K B y t e s 
 # d e f i n e   A R M _ M P U _ R E G I O N _ S I Z E _ 8 K B             ( ( u i n t 8 _ t ) 0 x 0 C U )   / / / ! <   M P U   R e g i o n   S i z e   8   K B y t e s 
 # d e f i n e   A R M _ M P U _ R E G I O N _ S I Z E _ 1 6 K B           ( ( u i n t 8 _ t ) 0 x 0 D U )   / / / ! <   M P U   R e g i o n   S i z e   1 6   K B y t e s 
 # d e f i n e   A R M _ M P U _ R E G I O N _ S I Z E _ 3 2 K B           ( ( u i n t 8 _ t ) 0 x 0 E U )   / / / ! <   M P U   R e g i o n   S i z e   3 2   K B y t e s 
 # d e f i n e   A R M _ M P U _ R E G I O N _ S I Z E _ 6 4 K B           ( ( u i n t 8 _ t ) 0 x 0 F U )   / / / ! <   M P U   R e g i o n   S i z e   6 4   K B y t e s 
 # d e f i n e   A R M _ M P U _ R E G I O N _ S I Z E _ 1 2 8 K B         ( ( u i n t 8 _ t ) 0 x 1 0 U )   / / / ! <   M P U   R e g i o n   S i z e   1 2 8   K B y t e s 
 # d e f i n e   A R M _ M P U _ R E G I O N _ S I Z E _ 2 5 6 K B         ( ( u i n t 8 _ t ) 0 x 1 1 U )   / / / ! <   M P U   R e g i o n   S i z e   2 5 6   K B y t e s 
 # d e f i n e   A R M _ M P U _ R E G I O N _ S I Z E _ 5 1 2 K B         ( ( u i n t 8 _ t ) 0 x 1 2 U )   / / / ! <   M P U   R e g i o n   S i z e   5 1 2   K B y t e s 
 # d e f i n e   A R M _ M P U _ R E G I O N _ S I Z E _ 1 M B             ( ( u i n t 8 _ t ) 0 x 1 3 U )   / / / ! <   M P U   R e g i o n   S i z e   1   M B y t e 
 # d e f i n e   A R M _ M P U _ R E G I O N _ S I Z E _ 2 M B             ( ( u i n t 8 _ t ) 0 x 1 4 U )   / / / ! <   M P U   R e g i o n   S i z e   2   M B y t e s 
 # d e f i n e   A R M _ M P U _ R E G I O N _ S I Z E _ 4 M B             ( ( u i n t 8 _ t ) 0 x 1 5 U )   / / / ! <   M P U   R e g i o n   S i z e   4   M B y t e s 
 # d e f i n e   A R M _ M P U _ R E G I O N _ S I Z E _ 8 M B             ( ( u i n t 8 _ t ) 0 x 1 6 U )   / / / ! <   M P U   R e g i o n   S i z e   8   M B y t e s 
 # d e f i n e   A R M _ M P U _ R E G I O N _ S I Z E _ 1 6 M B           ( ( u i n t 8 _ t ) 0 x 1 7 U )   / / / ! <   M P U   R e g i o n   S i z e   1 6   M B y t e s 
 # d e f i n e   A R M _ M P U _ R E G I O N _ S I Z E _ 3 2 M B           ( ( u i n t 8 _ t ) 0 x 1 8 U )   / / / ! <   M P U   R e g i o n   S i z e   3 2   M B y t e s 
 # d e f i n e   A R M _ M P U _ R E G I O N _ S I Z E _ 6 4 M B           ( ( u i n t 8 _ t ) 0 x 1 9 U )   / / / ! <   M P U   R e g i o n   S i z e   6 4   M B y t e s 
 # d e f i n e   A R M _ M P U _ R E G I O N _ S I Z E _ 1 2 8 M B         ( ( u i n t 8 _ t ) 0 x 1 A U )   / / / ! <   M P U   R e g i o n   S i z e   1 2 8   M B y t e s 
 # d e f i n e   A R M _ M P U _ R E G I O N _ S I Z E _ 2 5 6 M B         ( ( u i n t 8 _ t ) 0 x 1 B U )   / / / ! <   M P U   R e g i o n   S i z e   2 5 6   M B y t e s 
 # d e f i n e   A R M _ M P U _ R E G I O N _ S I Z E _ 5 1 2 M B         ( ( u i n t 8 _ t ) 0 x 1 C U )   / / / ! <   M P U   R e g i o n   S i z e   5 1 2   M B y t e s 
 # d e f i n e   A R M _ M P U _ R E G I O N _ S I Z E _ 1 G B             ( ( u i n t 8 _ t ) 0 x 1 D U )   / / / ! <   M P U   R e g i o n   S i z e   1   G B y t e 
 # d e f i n e   A R M _ M P U _ R E G I O N _ S I Z E _ 2 G B             ( ( u i n t 8 _ t ) 0 x 1 E U )   / / / ! <   M P U   R e g i o n   S i z e   2   G B y t e s 
 # d e f i n e   A R M _ M P U _ R E G I O N _ S I Z E _ 4 G B             ( ( u i n t 8 _ t ) 0 x 1 F U )   / / / ! <   M P U   R e g i o n   S i z e   4   G B y t e s 
 
 # d e f i n e   A R M _ M P U _ A P _ N O N E   0 U   / / / ! <   M P U   A c c e s s   P e r m i s s i o n   n o   a c c e s s 
 # d e f i n e   A R M _ M P U _ A P _ P R I V   1 U   / / / ! <   M P U   A c c e s s   P e r m i s s i o n   p r i v i l e g e d   a c c e s s   o n l y 
 # d e f i n e   A R M _ M P U _ A P _ U R O     2 U   / / / ! <   M P U   A c c e s s   P e r m i s s i o n   u n p r i v i l e g e d   a c c e s s   r e a d - o n l y 
 # d e f i n e   A R M _ M P U _ A P _ F U L L   3 U   / / / ! <   M P U   A c c e s s   P e r m i s s i o n   f u l l   a c c e s s 
 # d e f i n e   A R M _ M P U _ A P _ P R O     5 U   / / / ! <   M P U   A c c e s s   P e r m i s s i o n   p r i v i l e g e d   a c c e s s   r e a d - o n l y 
 # d e f i n e   A R M _ M P U _ A P _ R O       6 U   / / / ! <   M P U   A c c e s s   P e r m i s s i o n   r e a d - o n l y   a c c e s s 
 
 / * *   M P U   R e g i o n   B a s e   A d d r e s s   R e g i s t e r   V a l u e 
 * 
 *   \ p a r a m   R e g i o n   T h e   r e g i o n   t o   b e   c o n f i g u r e d ,   n u m b e r   0   t o   1 5 . 
 *   \ p a r a m   B a s e A d d r e s s   T h e   b a s e   a d d r e s s   f o r   t h e   r e g i o n . 
 * / 
 # d e f i n e   A R M _ M P U _ R B A R ( R e g i o n ,   B a s e A d d r e s s )   \ 
     ( ( ( B a s e A d d r e s s )   &   M P U _ R B A R _ A D D R _ M s k )   |     \ 
       ( ( R e g i o n )   &   M P U _ R B A R _ R E G I O N _ M s k )         |     \ 
       ( M P U _ R B A R _ V A L I D _ M s k ) ) 
 
 / * * 
 *   M P U   M e m o r y   A c c e s s   A t t r i b u t e s 
 *   
 *   \ p a r a m   T y p e E x t F i e l d             T y p e   e x t e n s i o n   f i e l d ,   a l l o w s   y o u   t o   c o n f i g u r e   m e m o r y   a c c e s s   t y p e ,   f o r   e x a m p l e   s t r o n g l y   o r d e r e d ,   p e r i p h e r a l . 
 *   \ p a r a m   I s S h a r e a b l e               R e g i o n   i s   s h a r e a b l e   b e t w e e n   m u l t i p l e   b u s   m a s t e r s . 
 *   \ p a r a m   I s C a c h e a b l e               R e g i o n   i s   c a c h e a b l e ,   i . e .   i t s   v a l u e   m a y   b e   k e p t   i n   c a c h e . 
 *   \ p a r a m   I s B u f f e r a b l e             R e g i o n   i s   b u f f e r a b l e ,   i . e .   u s i n g   w r i t e - b a c k   c a c h i n g .   C a c h e a b l e   b u t   n o n - b u f f e r a b l e   r e g i o n s   u s e   w r i t e - t h r o u g h   p o l i c y . 
 * /     
 # d e f i n e   A R M _ M P U _ A C C E S S _ ( T y p e E x t F i e l d ,   I s S h a r e a b l e ,   I s C a c h e a b l e ,   I s B u f f e r a b l e )       \ 
     ( ( ( ( T y p e E x t F i e l d   )   < <   M P U _ R A S R _ T E X _ P o s )   &   M P U _ R A S R _ T E X _ M s k )                                   |   \ 
       ( ( ( I s S h a r e a b l e   )   < <   M P U _ R A S R _ S _ P o s )   &   M P U _ R A S R _ S _ M s k )                                             |   \ 
       ( ( ( I s C a c h e a b l e   )   < <   M P U _ R A S R _ C _ P o s )   &   M P U _ R A S R _ C _ M s k )                                             |   \ 
       ( ( ( I s B u f f e r a b l e   )   < <   M P U _ R A S R _ B _ P o s )   &   M P U _ R A S R _ B _ M s k ) ) 
 
 / * * 
 *   M P U   R e g i o n   A t t r i b u t e   a n d   S i z e   R e g i s t e r   V a l u e 
 *   
 *   \ p a r a m   D i s a b l e E x e c               I n s t r u c t i o n   a c c e s s   d i s a b l e   b i t ,   1 =   d i s a b l e   i n s t r u c t i o n   f e t c h e s . 
 *   \ p a r a m   A c c e s s P e r m i s s i o n     D a t a   a c c e s s   p e r m i s s i o n s ,   a l l o w s   y o u   t o   c o n f i g u r e   r e a d / w r i t e   a c c e s s   f o r   U s e r   a n d   P r i v i l e g e d   m o d e . 
 *   \ p a r a m   A c c e s s A t t r i b u t e s     M e m o r y   a c c e s s   a t t r i b u t i o n ,   s e e   \ r e f   A R M _ M P U _ A C C E S S _ . 
 *   \ p a r a m   S u b R e g i o n D i s a b l e     S u b - r e g i o n   d i s a b l e   f i e l d . 
 *   \ p a r a m   S i z e                             R e g i o n   s i z e   o f   t h e   r e g i o n   t o   b e   c o n f i g u r e d ,   f o r   e x a m p l e   4 K ,   8 K . 
 * / 
 # d e f i n e   A R M _ M P U _ R A S R _ E X ( D i s a b l e E x e c ,   A c c e s s P e r m i s s i o n ,   A c c e s s A t t r i b u t e s ,   S u b R e g i o n D i s a b l e ,   S i z e )             \ 
     ( ( ( ( D i s a b l e E x e c   )   < <   M P U _ R A S R _ X N _ P o s )   &   M P U _ R A S R _ X N _ M s k )                                                                                     |   \ 
       ( ( ( A c c e s s P e r m i s s i o n )   < <   M P U _ R A S R _ A P _ P o s )   &   M P U _ R A S R _ A P _ M s k )                                                                             |   \ 
       ( ( ( A c c e s s A t t r i b u t e s )   )   &   ( M P U _ R A S R _ T E X _ M s k   |   M P U _ R A S R _ S _ M s k   |   M P U _ R A S R _ C _ M s k   |   M P U _ R A S R _ B _ M s k ) ) ) 
     
 / * * 
 *   M P U   R e g i o n   A t t r i b u t e   a n d   S i z e   R e g i s t e r   V a l u e 
 *   
 *   \ p a r a m   D i s a b l e E x e c               I n s t r u c t i o n   a c c e s s   d i s a b l e   b i t ,   1 =   d i s a b l e   i n s t r u c t i o n   f e t c h e s . 
 *   \ p a r a m   A c c e s s P e r m i s s i o n     D a t a   a c c e s s   p e r m i s s i o n s ,   a l l o w s   y o u   t o   c o n f i g u r e   r e a d / w r i t e   a c c e s s   f o r   U s e r   a n d   P r i v i l e g e d   m o d e . 
 *   \ p a r a m   T y p e E x t F i e l d             T y p e   e x t e n s i o n   f i e l d ,   a l l o w s   y o u   t o   c o n f i g u r e   m e m o r y   a c c e s s   t y p e ,   f o r   e x a m p l e   s t r o n g l y   o r d e r e d ,   p e r i p h e r a l . 
 *   \ p a r a m   I s S h a r e a b l e               R e g i o n   i s   s h a r e a b l e   b e t w e e n   m u l t i p l e   b u s   m a s t e r s . 
 *   \ p a r a m   I s C a c h e a b l e               R e g i o n   i s   c a c h e a b l e ,   i . e .   i t s   v a l u e   m a y   b e   k e p t   i n   c a c h e . 
 *   \ p a r a m   I s B u f f e r a b l e             R e g i o n   i s   b u f f e r a b l e ,   i . e .   u s i n g   w r i t e - b a c k   c a c h i n g .   C a c h e a b l e   b u t   n o n - b u f f e r a b l e   r e g i o n s   u s e   w r i t e - t h r o u g h   p o l i c y . 
 *   \ p a r a m   S u b R e g i o n D i s a b l e     S u b - r e g i o n   d i s a b l e   f i e l d . 
 *   \ p a r a m   S i z e                             R e g i o n   s i z e   o f   t h e   r e g i o n   t o   b e   c o n f i g u r e d ,   f o r   e x a m p l e   4 K ,   8 K . 
 * /                                                   
 # d e f i n e   A R M _ M P U _ R A S R ( D i s a b l e E x e c ,   A c c e s s P e r m i s s i o n ,   T y p e E x t F i e l d ,   I s S h a r e a b l e ,   I s C a c h e a b l e ,   I s B u f f e r a b l e ,   S u b R e g i o n D i s a b l e ,   S i z e )   \ 
     A R M _ M P U _ R A S R _ E X ( D i s a b l e E x e c ,   A c c e s s P e r m i s s i o n ,   A R M _ M P U _ A C C E S S _ ( T y p e E x t F i e l d ,   I s S h a r e a b l e ,   I s C a c h e a b l e ,   I s B u f f e r a b l e ) ,   S u b R e g i o n D i s a b l e ,   S i z e ) 
 
 / * * 
 *   M P U   M e m o r y   A c c e s s   A t t r i b u t e   f o r   s t r o n g l y   o r d e r e d   m e m o r y . 
 *     -   T E X :   0 0 0 b 
 *     -   S h a r e a b l e 
 *     -   N o n - c a c h e a b l e 
 *     -   N o n - b u f f e r a b l e 
 * /   
 # d e f i n e   A R M _ M P U _ A C C E S S _ O R D E R E D   A R M _ M P U _ A C C E S S _ ( 0 U ,   1 U ,   0 U ,   0 U ) 
 
 / * * 
 *   M P U   M e m o r y   A c c e s s   A t t r i b u t e   f o r   d e v i c e   m e m o r y . 
 *     -   T E X :   0 0 0 b   ( i f   n o n - s h a r e a b l e )   o r   0 1 0 b   ( i f   s h a r e a b l e ) 
 *     -   S h a r e a b l e   o r   n o n - s h a r e a b l e 
 *     -   N o n - c a c h e a b l e 
 *     -   B u f f e r a b l e   ( i f   s h a r e a b l e )   o r   n o n - b u f f e r a b l e   ( i f   n o n - s h a r e a b l e ) 
 * 
 *   \ p a r a m   I s S h a r e a b l e   C o n f i g u r e s   t h e   d e v i c e   m e m o r y   a s   s h a r e a b l e   o r   n o n - s h a r e a b l e . 
 * /   
 # d e f i n e   A R M _ M P U _ A C C E S S _ D E V I C E ( I s S h a r e a b l e )   ( ( I s S h a r e a b l e )   ?   A R M _ M P U _ A C C E S S _ ( 0 U ,   1 U ,   0 U ,   1 U )   :   A R M _ M P U _ A C C E S S _ ( 2 U ,   0 U ,   0 U ,   0 U ) ) 
 
 / * * 
 *   M P U   M e m o r y   A c c e s s   A t t r i b u t e   f o r   n o r m a l   m e m o r y . 
 *     -   T E X :   1 B B b   ( r e f l e c t i n g   o u t e r   c a c h e a b i l i t y   r u l e s ) 
 *     -   S h a r e a b l e   o r   n o n - s h a r e a b l e 
 *     -   C a c h e a b l e   o r   n o n - c a c h e a b l e   ( r e f l e c t i n g   i n n e r   c a c h e a b i l i t y   r u l e s ) 
 *     -   B u f f e r a b l e   o r   n o n - b u f f e r a b l e   ( r e f l e c t i n g   i n n e r   c a c h e a b i l i t y   r u l e s ) 
 * 
 *   \ p a r a m   O u t e r C p   C o n f i g u r e s   t h e   o u t e r   c a c h e   p o l i c y . 
 *   \ p a r a m   I n n e r C p   C o n f i g u r e s   t h e   i n n e r   c a c h e   p o l i c y . 
 *   \ p a r a m   I s S h a r e a b l e   C o n f i g u r e s   t h e   m e m o r y   a s   s h a r e a b l e   o r   n o n - s h a r e a b l e . 
 * /   
 # d e f i n e   A R M _ M P U _ A C C E S S _ N O R M A L ( O u t e r C p ,   I n n e r C p ,   I s S h a r e a b l e )   A R M _ M P U _ A C C E S S _ ( ( 4 U   |   ( O u t e r C p ) ) ,   I s S h a r e a b l e ,   ( ( I n n e r C p )   &   2 U ) ,   ( ( I n n e r C p )   &   1 U ) ) 
 
 / * * 
 *   M P U   M e m o r y   A c c e s s   A t t r i b u t e   n o n - c a c h e a b l e   p o l i c y . 
 * / 
 # d e f i n e   A R M _ M P U _ C A C H E P _ N O C A C H E   0 U 
 
 / * * 
 *   M P U   M e m o r y   A c c e s s   A t t r i b u t e   w r i t e - b a c k ,   w r i t e   a n d   r e a d   a l l o c a t e   p o l i c y . 
 * / 
 # d e f i n e   A R M _ M P U _ C A C H E P _ W B _ W R A   1 U 
 
 / * * 
 *   M P U   M e m o r y   A c c e s s   A t t r i b u t e   w r i t e - t h r o u g h ,   n o   w r i t e   a l l o c a t e   p o l i c y . 
 * / 
 # d e f i n e   A R M _ M P U _ C A C H E P _ W T _ N W A   2 U 
 
 / * * 
 *   M P U   M e m o r y   A c c e s s   A t t r i b u t e   w r i t e - b a c k ,   n o   w r i t e   a l l o c a t e   p o l i c y . 
 * / 
 # d e f i n e   A R M _ M P U _ C A C H E P _ W B _ N W A   3 U 
 
 
 / * * 
 *   S t r u c t   f o r   a   s i n g l e   M P U   R e g i o n 
 * / 
 t y p e d e f   s t r u c t   { 
     u i n t 3 2 _ t   R B A R ;   / / ! <   T h e   r e g i o n   b a s e   a d d r e s s   r e g i s t e r   v a l u e   ( R B A R ) 
     u i n t 3 2 _ t   R A S R ;   / / ! <   T h e   r e g i o n   a t t r i b u t e   a n d   s i z e   r e g i s t e r   v a l u e   ( R A S R )   \ r e f   M P U _ R A S R 
 }   A R M _ M P U _ R e g i o n _ t ; 
         
 / * *   E n a b l e   t h e   M P U . 
 *   \ p a r a m   M P U _ C o n t r o l   D e f a u l t   a c c e s s   p e r m i s s i o n s   f o r   u n c o n f i g u r e d   r e g i o n s . 
 * / 
 _ _ S T A T I C _ I N L I N E   v o i d   A R M _ M P U _ E n a b l e ( u i n t 3 2 _ t   M P U _ C o n t r o l ) 
 { 
     _ _ D S B ( ) ; 
     _ _ I S B ( ) ; 
     M P U - > C T R L   =   M P U _ C o n t r o l   |   M P U _ C T R L _ E N A B L E _ M s k ; 
 # i f d e f   S C B _ S H C S R _ M E M F A U L T E N A _ M s k 
     S C B - > S H C S R   | =   S C B _ S H C S R _ M E M F A U L T E N A _ M s k ; 
 # e n d i f 
 } 
 
 / * *   D i s a b l e   t h e   M P U . 
 * / 
 _ _ S T A T I C _ I N L I N E   v o i d   A R M _ M P U _ D i s a b l e ( v o i d ) 
 { 
     _ _ D S B ( ) ; 
     _ _ I S B ( ) ; 
 # i f d e f   S C B _ S H C S R _ M E M F A U L T E N A _ M s k 
     S C B - > S H C S R   & =   ~ S C B _ S H C S R _ M E M F A U L T E N A _ M s k ; 
 # e n d i f 
     M P U - > C T R L     & =   ~ M P U _ C T R L _ E N A B L E _ M s k ; 
 } 
 
 / * *   C l e a r   a n d   d i s a b l e   t h e   g i v e n   M P U   r e g i o n . 
 *   \ p a r a m   r n r   R e g i o n   n u m b e r   t o   b e   c l e a r e d . 
 * / 
 _ _ S T A T I C _ I N L I N E   v o i d   A R M _ M P U _ C l r R e g i o n ( u i n t 3 2 _ t   r n r ) 
 { 
     M P U - > R N R   =   r n r ; 
     M P U - > R A S R   =   0 U ; 
 } 
 
 / * *   C o n f i g u r e   a n   M P U   r e g i o n . 
 *   \ p a r a m   r b a r   V a l u e   f o r   R B A R   r e g i s t e r . 
 *   \ p a r a m   r s a r   V a l u e   f o r   R S A R   r e g i s t e r . 
 * /       
 _ _ S T A T I C _ I N L I N E   v o i d   A R M _ M P U _ S e t R e g i o n ( u i n t 3 2 _ t   r b a r ,   u i n t 3 2 _ t   r a s r ) 
 { 
     M P U - > R B A R   =   r b a r ; 
     M P U - > R A S R   =   r a s r ; 
 } 
 
 / * *   C o n f i g u r e   t h e   g i v e n   M P U   r e g i o n . 
 *   \ p a r a m   r n r   R e g i o n   n u m b e r   t o   b e   c o n f i g u r e d . 
 *   \ p a r a m   r b a r   V a l u e   f o r   R B A R   r e g i s t e r . 
 *   \ p a r a m   r s a r   V a l u e   f o r   R S A R   r e g i s t e r . 
 * /       
 _ _ S T A T I C _ I N L I N E   v o i d   A R M _ M P U _ S e t R e g i o n E x ( u i n t 3 2 _ t   r n r ,   u i n t 3 2 _ t   r b a r ,   u i n t 3 2 _ t   r a s r ) 
 { 
     M P U - > R N R   =   r n r ; 
     M P U - > R B A R   =   r b a r ; 
     M P U - > R A S R   =   r a s r ; 
 } 
 
 / * *   M e m c o p y   w i t h   s t r i c t l y   o r d e r e d   m e m o r y   a c c e s s ,   e . g .   f o r   r e g i s t e r   t a r g e t s . 
 *   \ p a r a m   d s t   D e s t i n a t i o n   d a t a   i s   c o p i e d   t o . 
 *   \ p a r a m   s r c   S o u r c e   d a t a   i s   c o p i e d   f r o m . 
 *   \ p a r a m   l e n   A m o u n t   o f   d a t a   w o r d s   t o   b e   c o p i e d . 
 * / 
 _ _ S T A T I C _ I N L I N E   v o i d   o r d e r e d C p y ( v o l a t i l e   u i n t 3 2 _ t *   d s t ,   c o n s t   u i n t 3 2 _ t *   _ _ R E S T R I C T   s r c ,   u i n t 3 2 _ t   l e n ) 
 { 
     u i n t 3 2 _ t   i ; 
     f o r   ( i   =   0 U ;   i   <   l e n ;   + + i )   
     { 
         d s t [ i ]   =   s r c [ i ] ; 
     } 
 } 
 
 / * *   L o a d   t h e   g i v e n   n u m b e r   o f   M P U   r e g i o n s   f r o m   a   t a b l e . 
 *   \ p a r a m   t a b l e   P o i n t e r   t o   t h e   M P U   c o n f i g u r a t i o n   t a b l e . 
 *   \ p a r a m   c n t   A m o u n t   o f   r e g i o n s   t o   b e   c o n f i g u r e d . 
 * / 
 _ _ S T A T I C _ I N L I N E   v o i d   A R M _ M P U _ L o a d ( A R M _ M P U _ R e g i o n _ t   c o n s t *   t a b l e ,   u i n t 3 2 _ t   c n t )   
 { 
     c o n s t   u i n t 3 2 _ t   r o w W o r d S i z e   =   s i z e o f ( A R M _ M P U _ R e g i o n _ t ) / 4 U ; 
     w h i l e   ( c n t   >   M P U _ T Y P E _ R A L I A S E S )   { 
         o r d e r e d C p y ( & ( M P U - > R B A R ) ,   & ( t a b l e - > R B A R ) ,   M P U _ T Y P E _ R A L I A S E S * r o w W o r d S i z e ) ; 
         t a b l e   + =   M P U _ T Y P E _ R A L I A S E S ; 
         c n t   - =   M P U _ T Y P E _ R A L I A S E S ; 
     } 
     o r d e r e d C p y ( & ( M P U - > R B A R ) ,   & ( t a b l e - > R B A R ) ,   c n t * r o w W o r d S i z e ) ; 
 } 
 
 # e n d i f 