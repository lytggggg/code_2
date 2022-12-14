??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ d a c . c  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       D A C   H A L   m o d u l e   d r i v e r .  
     *                   T h i s   f i l e   p r o v i d e s   f i r m w a r e   f u n c t i o n s   t o   m a n a g e   t h e   f o l l o w i n g  
     *                   f u n c t i o n a l i t i e s   o f   t h e   D i g i t a l   t o   A n a l o g   C o n v e r t e r   ( D A C )   p e r i p h e r a l :  
     *                       +   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *                       +   I O   o p e r a t i o n   f u n c t i o n s  
     *                       +   P e r i p h e r a l   C o n t r o l   f u n c t i o n s  
     *                       +   P e r i p h e r a l   S t a t e   a n d   E r r o r s   f u n c t i o n s  
     *  
     *  
     @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                             # # # # #   D A C   P e r i p h e r a l   f e a t u r e s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
             * * *   D A C   C h a n n e l s   * * *  
             = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
         S T M 3 2 F 1   d e v i c e s   i n t e g r a t e   t w o   1 2 - b i t   D i g i t a l   A n a l o g   C o n v e r t e r s  
  
         T h e   2   c o n v e r t e r s   ( i . e .   c h a n n e l 1   &   c h a n n e l 2 )  
         c a n   b e   u s e d   i n d e p e n d e n t l y   o r   s i m u l t a n e o u s l y   ( d u a l   m o d e ) :  
             ( # )   D A C   c h a n n e l 1   w i t h   D A C _ O U T 1   ( P A 4 )   a s   o u t p u t   o r   c o n n e c t e d   t o   o n - c h i p  
                     p e r i p h e r a l s   ( e x .   t i m e r s ) .  
             ( # )   D A C   c h a n n e l 2   w i t h   D A C _ O U T 2   ( P A 5 )   a s   o u t p u t   o r   c o n n e c t e d   t o   o n - c h i p  
                     p e r i p h e r a l s   ( e x .   t i m e r s ) .  
  
             * * *   D A C   T r i g g e r s   * * *  
             = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
         D i g i t a l   t o   A n a l o g   c o n v e r s i o n   c a n   b e   n o n - t r i g g e r e d   u s i n g   D A C _ T R I G G E R _ N O N E  
         a n d   D A C _ O U T 1 / D A C _ O U T 2   i s   a v a i l a b l e   o n c e   w r i t i n g   t o   D H R x   r e g i s t e r .  
         [ . . ]  
         D i g i t a l   t o   A n a l o g   c o n v e r s i o n   c a n   b e   t r i g g e r e d   b y :  
             ( # )   E x t e r n a l   e v e n t :   E X T I   L i n e   9   ( a n y   G P I O x _ P I N _ 9 )   u s i n g   D A C _ T R I G G E R _ E X T _ I T 9 .  
                     T h e   u s e d   p i n   ( G P I O x _ P I N _ 9 )   m u s t   b e   c o n f i g u r e d   i n   i n p u t   m o d e .  
  
             ( # )   T i m e r s   T R G O :   T I M 2 ,   T I M 4 ,   T I M 6 ,   T I M 7  
                     F o r   S T M 3 2 F 1 0 x   c o n n e c t i v i t y   l i n e   d e v i c e s   a n d   S T M 3 2 F 1 0 0 x   d e v i c e s :   T I M 3  
                     F o r   S T M 3 2 F 1 0 x   h i g h - d e n s i t y   a n d   X L - d e n s i t y   d e v i c e s :   T I M 8  
                     F o r   S T M 3 2 F 1 0 0 x   h i g h - d e n s i t y   v a l u e   l i n e   d e v i c e s :   T I M 1 5   a s  
                     r e p l a c e m e n t   o f   T I M 5 .  
                     ( D A C _ T R I G G E R _ T 2 _ T R G O ,   D A C _ T R I G G E R _ T 4 _ T R G O . . . )  
  
             ( # )   S o f t w a r e   u s i n g   D A C _ T R I G G E R _ S O F T W A R E  
  
             * * *   D A C   B u f f e r   m o d e   f e a t u r e   * * *  
             = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
             [ . . ]  
             E a c h   D A C   c h a n n e l   i n t e g r a t e s   a n   o u t p u t   b u f f e r   t h a t   c a n   b e   u s e d   t o  
             r e d u c e   t h e   o u t p u t   i m p e d a n c e ,   a n d   t o   d r i v e   e x t e r n a l   l o a d s   d i r e c t l y  
             w i t h o u t   h a v i n g   t o   a d d   a n   e x t e r n a l   o p e r a t i o n a l   a m p l i f i e r .  
             T o   e n a b l e ,   t h e   o u t p u t   b u f f e r   u s e  
             s C o n f i g . D A C _ O u t p u t B u f f e r   =   D A C _ O U T P U T B U F F E R _ E N A B L E ;  
             [ . . ]  
             ( @ )   R e f e r   t o   t h e   d e v i c e   d a t a s h e e t   f o r   m o r e   d e t a i l s   a b o u t   o u t p u t  
                     i m p e d a n c e   v a l u e   w i t h   a n d   w i t h o u t   o u t p u t   b u f f e r .  
  
             * * *   G P I O   c o n f i g u r a t i o n s   g u i d e l i n e s   * * *  
             = = = = = = = = = = = = = = = = = = = = =  
             [ . . ]  
             W h e n   a   D A C   c h a n n e l   i s   u s e d   ( e x   c h a n n e l 1   o n   P A 4 )   a n d   t h e   o t h e r   i s   n o t  
             ( e x   c h a n n e l 2   o n   P A 5   i s   c o n f i g u r e d   i n   A n a l o g   a n d   d i s a b l e d ) .  
             C h a n n e l 1   m a y   d i s t u r b   c h a n n e l 2   a s   c o u p l i n g   e f f e c t .  
             N o t e   t h a t   t h e r e   i s   n o   c o u p l i n g   o n   c h a n n e l 2   a s   s o o n   a s   c h a n n e l 2   i s   t u r n e d   o n .  
             C o u p l i n g   o n   a d j a c e n t   c h a n n e l   c o u l d   b e   a v o i d e d   a s   f o l l o w s :  
             w h e n   u n u s e d   P A 5   i s   c o n f i g u r e d   a s   I N P U T   P U L L - U P   o r   D O W N .  
             P A 5   i s   c o n f i g u r e d   i n   A N A L O G   j u s t   b e f o r e   i t   i s   t u r n e d   o n .  
  
               * * *   D A C   w a v e   g e n e r a t i o n   f e a t u r e   * * *  
               = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
               [ . . ]  
               B o t h   D A C   c h a n n e l s   c a n   b e   u s e d   t o   g e n e r a t e  
                   ( # )   N o i s e   w a v e  
                   ( # )   T r i a n g l e   w a v e  
  
               * * *   D A C   d a t a   f o r m a t   * * *  
               = = = = = = = = = = = = = = = = = = = = = = =  
               [ . . ]  
               T h e   D A C   d a t a   f o r m a t   c a n   b e :  
                   ( # )   8 - b i t   r i g h t   a l i g n m e n t   u s i n g   D A C _ A L I G N _ 8 B _ R  
                   ( # )   1 2 - b i t   l e f t   a l i g n m e n t   u s i n g   D A C _ A L I G N _ 1 2 B _ L  
                   ( # )   1 2 - b i t   r i g h t   a l i g n m e n t   u s i n g   D A C _ A L I G N _ 1 2 B _ R  
  
               * * *   D A C   d a t a   v a l u e   t o   v o l t a g e   c o r r e s p o n d e n c e   * * *  
               = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
               [ . . ]  
               T h e   a n a l o g   o u t p u t   v o l t a g e   o n   e a c h   D A C   c h a n n e l   p i n   i s   d e t e r m i n e d  
               b y   t h e   f o l l o w i n g   e q u a t i o n :  
               [ . . ]  
               D A C _ O U T x   =   V R E F +   *   D O R   /   4 0 9 5  
               ( + )   w i t h     D O R   i s   t h e   D a t a   O u t p u t   R e g i s t e r  
               [ . . ]  
                     V R E F +   i s   t h e   i n p u t   v o l t a g e   r e f e r e n c e   ( r e f e r   t o   t h e   d e v i c e   d a t a s h e e t )  
               [ . . ]  
                 e . g .   T o   s e t   D A C _ O U T 1   t o   0 . 7 V ,   u s e  
               ( + )   A s s u m i n g   t h a t   V R E F +   =   3 . 3 V ,   D A C _ O U T 1   =   ( 3 . 3   *   8 6 8 )   /   4 0 9 5   =   0 . 7 V  
  
               * * *   D M A   r e q u e s t s   * * *  
               = = = = = = = = = = = = = = = = = = = = =  
               [ . . ]  
               A   D M A   r e q u e s t   c a n   b e   g e n e r a t e d   w h e n   a n   e x t e r n a l   t r i g g e r   ( b u t   n o t   a   s o f t w a r e   t r i g g e r )  
               o c c u r s   i f   D M A 1   r e q u e s t s   a r e   e n a b l e d   u s i n g   H A L _ D A C _ S t a r t _ D M A ( ) .  
               D M A 1   r e q u e s t s   a r e   m a p p e d   a s   f o l l o w i n g :  
             ( # )   D A C   c h a n n e l 1   m a p p e d   o n   D M A 1   c h a n n e l 3  
                     f o r   S T M 3 2 F 1 0 0 x   l o w - d e n s i t y ,   m e d i u m - d e n s i t y ,   h i g h - d e n s i t y   w i t h   D A C  
                     D M A   r e m a p :  
             ( # )   D A C   c h a n n e l 2   m a p p e d   o n   D M A 2   c h a n n e l 3  
                     f o r   S T M 3 2 F 1 0 0 x   h i g h - d e n s i t y   w i t h o u t   D A C   D M A   r e m a p   a n d   o t h e r  
                     S T M 3 2 F 1   d e v i c e s  
  
           [ . . ]  
         ( @ )   F o r   D u a l   m o d e   a n d   s p e c i f i c   s i g n a l   ( T r i a n g l e   a n d   n o i s e )   g e n e r a t i o n   p l e a s e  
                 r e f e r   t o   E x t e n d e d   F e a t u r e s   D r i v e r   d e s c r i p t i o n  
  
                                             # # # # #   H o w   t o   u s e   t h i s   d r i v e r   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
             ( + )   D A C   A P B   c l o c k   m u s t   b e   e n a b l e d   t o   g e t   w r i t e   a c c e s s   t o   D A C  
                     r e g i s t e r s   u s i n g   H A L _ D A C _ I n i t ( )  
             ( + )   C o n f i g u r e   D A C _ O U T x   ( D A C _ O U T 1 :   P A 4 ,   D A C _ O U T 2 :   P A 5 )   i n   a n a l o g   m o d e .  
             ( + )   C o n f i g u r e   t h e   D A C   c h a n n e l   u s i n g   H A L _ D A C _ C o n f i g C h a n n e l ( )   f u n c t i o n .  
             ( + )   E n a b l e   t h e   D A C   c h a n n e l   u s i n g   H A L _ D A C _ S t a r t ( )   o r   H A L _ D A C _ S t a r t _ D M A ( )   f u n c t i o n s .  
  
  
           * * *   P o l l i n g   m o d e   I O   o p e r a t i o n   * * *  
           = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
           [ . . ]  
               ( + )   S t a r t   t h e   D A C   p e r i p h e r a l   u s i n g   H A L _ D A C _ S t a r t ( )  
               ( + )   T o   r e a d   t h e   D A C   l a s t   d a t a   o u t p u t   v a l u e ,   u s e   t h e   H A L _ D A C _ G e t V a l u e ( )   f u n c t i o n .  
               ( + )   S t o p   t h e   D A C   p e r i p h e r a l   u s i n g   H A L _ D A C _ S t o p ( )  
  
           * * *   D M A   m o d e   I O   o p e r a t i o n   * * *  
           = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
           [ . . ]  
               ( + )   S t a r t   t h e   D A C   p e r i p h e r a l   u s i n g   H A L _ D A C _ S t a r t _ D M A ( ) ,   a t   t h i s   s t a g e   t h e   u s e r   s p e c i f y   t h e   l e n g t h  
                       o f   d a t a   t o   b e   t r a n s f e r r e d   a t   e a c h   e n d   o f   c o n v e r s i o n  
                       F i r s t   i s s u e d   t r i g g e r   w i l l   s t a r t   t h e   c o n v e r s i o n   o f   t h e   v a l u e   p r e v i o u s l y   s e t   b y   H A L _ D A C _ S e t V a l u e ( ) .  
               ( + )   A t   t h e   m i d d l e   o f   d a t a   t r a n s f e r   H A L _ D A C _ C o n v H a l f C p l t C a l l b a c k C h 1 ( )   o r   H A L _ D A C E x _ C o n v H a l f C p l t C a l l b a c k C h 2 ( )  
                       f u n c t i o n   i s   e x e c u t e d   a n d   u s e r   c a n   a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r  
                       H A L _ D A C _ C o n v H a l f C p l t C a l l b a c k C h 1 ( )   o r   H A L _ D A C E x _ C o n v H a l f C p l t C a l l b a c k C h 2 ( )  
               ( + )   A t   T h e   e n d   o f   d a t a   t r a n s f e r   H A L _ D A C _ C o n v C p l t C a l l b a c k C h 1 ( )   o r   H A L _ D A C E x _ C o n v H a l f C p l t C a l l b a c k C h 2 ( )  
                       f u n c t i o n   i s   e x e c u t e d   a n d   u s e r   c a n   a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r  
                       H A L _ D A C _ C o n v C p l t C a l l b a c k C h 1 ( )   o r   H A L _ D A C E x _ C o n v H a l f C p l t C a l l b a c k C h 2 ( )  
               ( + )   I n   c a s e   o f   t r a n s f e r   E r r o r ,   H A L _ D A C _ E r r o r C a l l b a c k C h 1 ( )   f u n c t i o n   i s   e x e c u t e d   a n d   u s e r   c a n  
                         a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   H A L _ D A C _ E r r o r C a l l b a c k C h 1  
               ( + )   F o r   S T M 3 2 F 1 0 0 x   d e v i c e s   w i t h   s p e c i f i c   f e a t u r e :   D M A   u n d e r r u n .  
                       I n   c a s e   o f   D M A   u n d e r r u n ,   D A C   i n t e r r u p t i o n   t r i g g e r s   a n d   e x e c u t e   i n t e r n a l   f u n c t i o n   H A L _ D A C _ I R Q H a n d l e r .  
                       H A L _ D A C _ D M A U n d e r r u n C a l l b a c k C h 1 ( )   o r   H A L _ D A C E x _ D M A U n d e r r u n C a l l b a c k C h 2 ( )  
                       f u n c t i o n   i s   e x e c u t e d   a n d   u s e r   c a n   a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r  
                       H A L _ D A C _ D M A U n d e r r u n C a l l b a c k C h 1 ( )   o r   H A L _ D A C E x _ D M A U n d e r r u n C a l l b a c k C h 2 ( )   a n d  
                       a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   H A L _ D A C _ E r r o r C a l l b a c k C h 1 ( )  
               ( + )   S t o p   t h e   D A C   p e r i p h e r a l   u s i n g   H A L _ D A C _ S t o p _ D M A ( )  
  
         * * *   C a l l b a c k   r e g i s t r a t i o n   * * *  
         = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
             T h e   c o m p i l a t i o n   d e f i n e     U S E _ H A L _ D A C _ R E G I S T E R _ C A L L B A C K S   w h e n   s e t   t o   1  
             a l l o w s   t h e   u s e r   t o   c o n f i g u r e   d y n a m i c a l l y   t h e   d r i v e r   c a l l b a c k s .  
  
         U s e   F u n c t i o n s   @ r e f   H A L _ D A C _ R e g i s t e r C a l l b a c k ( )   t o   r e g i s t e r   a   u s e r   c a l l b a c k ,  
             i t   a l l o w s   t o   r e g i s t e r   f o l l o w i n g   c a l l b a c k s :  
             ( + )   C o n v C p l t C a l l b a c k C h 1           :   c a l l b a c k   w h e n   a   h a l f   t r a n s f e r   i s   c o m p l e t e d   o n   C h 1 .  
             ( + )   C o n v H a l f C p l t C a l l b a c k C h 1   :   c a l l b a c k   w h e n   a   t r a n s f e r   i s   c o m p l e t e d   o n   C h 1 .  
             ( + )   E r r o r C a l l b a c k C h 1                 :   c a l l b a c k   w h e n   a n   e r r o r   o c c u r s   o n   C h 1 .  
             ( + )   D M A U n d e r r u n C a l l b a c k C h 1     :   c a l l b a c k   w h e n   a n   u n d e r r u n   e r r o r   o c c u r s   o n   C h 1 .  
             ( + )   C o n v C p l t C a l l b a c k C h 2           :   c a l l b a c k   w h e n   a   h a l f   t r a n s f e r   i s   c o m p l e t e d   o n   C h 2 .  
             ( + )   C o n v H a l f C p l t C a l l b a c k C h 2   :   c a l l b a c k   w h e n   a   t r a n s f e r   i s   c o m p l e t e d   o n   C h 2 .  
             ( + )   E r r o r C a l l b a c k C h 2                 :   c a l l b a c k   w h e n   a n   e r r o r   o c c u r s   o n   C h 2 .  
             ( + )   D M A U n d e r r u n C a l l b a c k C h 2     :   c a l l b a c k   w h e n   a n   u n d e r r u n   e r r o r   o c c u r s   o n   C h 2 .  
             ( + )   M s p I n i t C a l l b a c k                   :   D A C   M s p I n i t .  
             ( + )   M s p D e I n i t C a l l b a c k               :   D A C   M s p d e I n i t .  
             T h i s   f u n c t i o n   t a k e s   a s   p a r a m e t e r s   t h e   H A L   p e r i p h e r a l   h a n d l e ,   t h e   C a l l b a c k   I D  
             a n d   a   p o i n t e r   t o   t h e   u s e r   c a l l b a c k   f u n c t i o n .  
  
         U s e   f u n c t i o n   @ r e f   H A L _ D A C _ U n R e g i s t e r C a l l b a c k ( )   t o   r e s e t   a   c a l l b a c k   t o   t h e   d e f a u l t  
             w e a k   ( s u r c h a r g e d )   f u n c t i o n .   I t   a l l o w s   t o   r e s e t   f o l l o w i n g   c a l l b a c k s :  
             ( + )   C o n v C p l t C a l l b a c k C h 1           :   c a l l b a c k   w h e n   a   h a l f   t r a n s f e r   i s   c o m p l e t e d   o n   C h 1 .  
             ( + )   C o n v H a l f C p l t C a l l b a c k C h 1   :   c a l l b a c k   w h e n   a   t r a n s f e r   i s   c o m p l e t e d   o n   C h 1 .  
             ( + )   E r r o r C a l l b a c k C h 1                 :   c a l l b a c k   w h e n   a n   e r r o r   o c c u r s   o n   C h 1 .  
             ( + )   D M A U n d e r r u n C a l l b a c k C h 1     :   c a l l b a c k   w h e n   a n   u n d e r r u n   e r r o r   o c c u r s   o n   C h 1 .  
             ( + )   C o n v C p l t C a l l b a c k C h 2           :   c a l l b a c k   w h e n   a   h a l f   t r a n s f e r   i s   c o m p l e t e d   o n   C h 2 .  
             ( + )   C o n v H a l f C p l t C a l l b a c k C h 2   :   c a l l b a c k   w h e n   a   t r a n s f e r   i s   c o m p l e t e d   o n   C h 2 .  
             ( + )   E r r o r C a l l b a c k C h 2                 :   c a l l b a c k   w h e n   a n   e r r o r   o c c u r s   o n   C h 2 .  
             ( + )   D M A U n d e r r u n C a l l b a c k C h 2     :   c a l l b a c k   w h e n   a n   u n d e r r u n   e r r o r   o c c u r s   o n   C h 2 .  
             ( + )   M s p I n i t C a l l b a c k                   :   D A C   M s p I n i t .  
             ( + )   M s p D e I n i t C a l l b a c k               :   D A C   M s p d e I n i t .  
             ( + )   A l l   C a l l b a c k s  
             T h i s   f u n c t i o n )   t a k e s   a s   p a r a m e t e r s   t h e   H A L   p e r i p h e r a l   h a n d l e   a n d   t h e   C a l l b a c k   I D .  
  
             B y   d e f a u l t ,   a f t e r   t h e   @ r e f   H A L _ D A C _ I n i t   a n d   i f   t h e   s t a t e   i s   H A L _ D A C _ S T A T E _ R E S E T  
             a l l   c a l l b a c k s   a r e   r e s e t   t o   t h e   c o r r e s p o n d i n g   l e g a c y   w e a k   ( s u r c h a r g e d )   f u n c t i o n s .  
             E x c e p t i o n   d o n e   f o r   M s p I n i t   a n d   M s p D e I n i t   c a l l b a c k s   t h a t   a r e   r e s p e c t i v e l y  
             r e s e t   t o   t h e   l e g a c y   w e a k   ( s u r c h a r g e d )   f u n c t i o n s   i n   t h e   @ r e f   H A L _ D A C _ I n i t  
             a n d   @ r e f     H A L _ D A C _ D e I n i t   o n l y   w h e n   t h e s e   c a l l b a c k s   a r e   n u l l   ( n o t   r e g i s t e r e d   b e f o r e h a n d ) .  
             I f   n o t ,   M s p I n i t   o r   M s p D e I n i t   a r e   n o t   n u l l ,   t h e   @ r e f   H A L _ D A C _ I n i t   a n d   @ r e f   H A L _ D A C _ D e I n i t  
             k e e p   a n d   u s e   t h e   u s e r   M s p I n i t / M s p D e I n i t   c a l l b a c k s   ( r e g i s t e r e d   b e f o r e h a n d )  
  
             C a l l b a c k s   c a n   b e   r e g i s t e r e d / u n r e g i s t e r e d   i n   R E A D Y   s t a t e   o n l y .  
             E x c e p t i o n   d o n e   f o r   M s p I n i t / M s p D e I n i t   c a l l b a c k s   t h a t   c a n   b e   r e g i s t e r e d / u n r e g i s t e r e d  
             i n   R E A D Y   o r   R E S E T   s t a t e ,   t h u s   r e g i s t e r e d   ( u s e r )   M s p I n i t / D e I n i t   c a l l b a c k s   c a n   b e   u s e d  
             d u r i n g   t h e   I n i t / D e I n i t .  
             I n   t h a t   c a s e   f i r s t   r e g i s t e r   t h e   M s p I n i t / M s p D e I n i t   u s e r   c a l l b a c k s  
             u s i n g   @ r e f   H A L _ D A C _ R e g i s t e r C a l l b a c k   b e f o r e   c a l l i n g   @ r e f   H A L _ D A C _ D e I n i t  
             o r   @ r e f   H A L _ D A C _ I n i t   f u n c t i o n .  
  
             W h e n   T h e   c o m p i l a t i o n   d e f i n e   U S E _ H A L _ D A C _ R E G I S T E R _ C A L L B A C K S   i s   s e t   t o   0   o r  
             n o t   d e f i n e d ,   t h e   c a l l b a c k   r e g i s t e r i n g   f e a t u r e   i s   n o t   a v a i l a b l e  
             a n d   w e a k   ( s u r c h a r g e d )   c a l l b a c k s   a r e   u s e d .  
  
           * * *   D A C   H A L   d r i v e r   m a c r o s   l i s t   * * *  
           = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
           [ . . ]  
               B e l o w   t h e   l i s t   o f   m o s t   u s e d   m a c r o s   i n   D A C   H A L   d r i v e r .  
  
             ( + )   _ _ H A L _ D A C _ E N A B L E   :   E n a b l e   t h e   D A C   p e r i p h e r a l   ( F o r   S T M 3 2 F 1 0 0 x   d e v i c e s   w i t h   s p e c i f i c   f e a t u r e :   D M A   u n d e r r u n )  
             ( + )   _ _ H A L _ D A C _ D I S A B L E   :   D i s a b l e   t h e   D A C   p e r i p h e r a l   ( F o r   S T M 3 2 F 1 0 0 x   d e v i c e s   w i t h   s p e c i f i c   f e a t u r e :   D M A   u n d e r r u n )  
             ( + )   _ _ H A L _ D A C _ C L E A R _ F L A G :   C l e a r   t h e   D A C ' s   p e n d i n g   f l a g s   ( F o r   S T M 3 2 F 1 0 0 x   d e v i c e s   w i t h   s p e c i f i c   f e a t u r e :   D M A   u n d e r r u n )  
             ( + )   _ _ H A L _ D A C _ G E T _ F L A G :   G e t   t h e   s e l e c t e d   D A C ' s   f l a g   s t a t u s   ( F o r   S T M 3 2 F 1 0 0 x   d e v i c e s   w i t h   s p e c i f i c   f e a t u r e :   D M A   u n d e r r u n )  
  
           [ . . ]  
             ( @ )   Y o u   c a n   r e f e r   t o   t h e   D A C   H A L   d r i v e r   h e a d e r   f i l e   f o r   m o r e   u s e f u l   m a c r o s  
  
 @ e n d v e r b a t i m  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ a t t e n t i o n  
     *  
     *   < h 2 > < c e n t e r > & c o p y ;   C o p y r i g h t   ( c )   2 0 1 6   S T M i c r o e l e c t r o n i c s .  
     *   A l l   r i g h t s   r e s e r v e d . < / c e n t e r > < / h 2 >  
     *  
     *   T h i s   s o f t w a r e   c o m p o n e n t   i s   l i c e n s e d   b y   S T   u n d e r   B S D   3 - C l a u s e   l i c e n s e ,  
     *   t h e   " L i c e n s e " ;   Y o u   m a y   n o t   u s e   t h i s   f i l e   e x c e p t   i n   c o m p l i a n c e   w i t h   t h e  
     *   L i c e n s e .   Y o u   m a y   o b t a i n   a   c o p y   o f   t h e   L i c e n s e   a t :  
     *                                                 o p e n s o u r c e . o r g / l i c e n s e s / B S D - 3 - C l a u s e  
     *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     * /  
  
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l . h "  
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r  
     *   @ {  
     * /  
  
 # i f d e f   H A L _ D A C _ M O D U L E _ E N A B L E D  
 # i f   d e f i n e d ( D A C )  
  
 / * *   @ d e f g r o u p   D A C   D A C  
     *   @ b r i e f   D A C   d r i v e r   m o d u l e s  
     *   @ {  
     * /  
  
 / *   P r i v a t e   t y p e d e f   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   d e f i n e   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   f u n c t i o n   p r o t o t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   D A C _ E x p o r t e d _ F u n c t i o n s   D A C   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   D A C _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *     @ b r i e f         I n i t i a l i z a t i o n   a n d   C o n f i g u r a t i o n   f u n c t i o n s  
     *  
 @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                             # # # # #   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]     T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o :  
             ( + )   I n i t i a l i z e   a n d   c o n f i g u r e   t h e   D A C .  
             ( + )   D e - i n i t i a l i z e   t h e   D A C .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e   t h e   D A C   p e r i p h e r a l   a c c o r d i n g   t o   t h e   s p e c i f i e d   p a r a m e t e r s  
     *                   i n   t h e   D A C _ I n i t S t r u c t   a n d   i n i t i a l i z e   t h e   a s s o c i a t e d   h a n d l e .  
     *   @ p a r a m     h d a c   p o i n t e r   t o   a   D A C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D A C .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ D A C _ I n i t ( D A C _ H a n d l e T y p e D e f   * h d a c )  
 {  
     / *   C h e c k   D A C   h a n d l e   * /  
     i f   ( h d a c   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ D A C _ A L L _ I N S T A N C E ( h d a c - > I n s t a n c e ) ) ;  
  
     i f   ( h d a c - > S t a t e   = =   H A L _ D A C _ S T A T E _ R E S E T )  
     {  
 # i f   ( U S E _ H A L _ D A C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         / *   I n i t   t h e   D A C   C a l l b a c k   s e t t i n g s   * /  
         h d a c - > C o n v C p l t C a l l b a c k C h 1                       =   H A L _ D A C _ C o n v C p l t C a l l b a c k C h 1 ;  
         h d a c - > C o n v H a l f C p l t C a l l b a c k C h 1               =   H A L _ D A C _ C o n v H a l f C p l t C a l l b a c k C h 1 ;  
         h d a c - > E r r o r C a l l b a c k C h 1                             =   H A L _ D A C _ E r r o r C a l l b a c k C h 1 ;  
         h d a c - > D M A U n d e r r u n C a l l b a c k C h 1                 =   H A L _ D A C _ D M A U n d e r r u n C a l l b a c k C h 1 ;  
  
         h d a c - > C o n v C p l t C a l l b a c k C h 2                       =   H A L _ D A C E x _ C o n v C p l t C a l l b a c k C h 2 ;  
         h d a c - > C o n v H a l f C p l t C a l l b a c k C h 2               =   H A L _ D A C E x _ C o n v H a l f C p l t C a l l b a c k C h 2 ;  
         h d a c - > E r r o r C a l l b a c k C h 2                             =   H A L _ D A C E x _ E r r o r C a l l b a c k C h 2 ;  
         h d a c - > D M A U n d e r r u n C a l l b a c k C h 2                 =   H A L _ D A C E x _ D M A U n d e r r u n C a l l b a c k C h 2 ;  
  
         i f   ( h d a c - > M s p I n i t C a l l b a c k   = =   N U L L )  
         {  
             h d a c - > M s p I n i t C a l l b a c k                           =   H A L _ D A C _ M s p I n i t ;  
         }  
 # e n d i f   / *   U S E _ H A L _ D A C _ R E G I S T E R _ C A L L B A C K S   * /  
  
         / *   A l l o c a t e   l o c k   r e s o u r c e   a n d   i n i t i a l i z e   i t   * /  
         h d a c - > L o c k   =   H A L _ U N L O C K E D ;  
  
 # i f   ( U S E _ H A L _ D A C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   * /  
         h d a c - > M s p I n i t C a l l b a c k ( h d a c ) ;  
 # e l s e  
         / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   * /  
         H A L _ D A C _ M s p I n i t ( h d a c ) ;  
 # e n d i f   / *   U S E _ H A L _ D A C _ R E G I S T E R _ C A L L B A C K S   * /  
     }  
  
     / *   I n i t i a l i z e   t h e   D A C   s t a t e * /  
     h d a c - > S t a t e   =   H A L _ D A C _ S T A T E _ B U S Y ;  
  
     / *   S e t   D A C   e r r o r   c o d e   t o   n o n e   * /  
     h d a c - > E r r o r C o d e   =   H A L _ D A C _ E R R O R _ N O N E ;  
  
     / *   I n i t i a l i z e   t h e   D A C   s t a t e * /  
     h d a c - > S t a t e   =   H A L _ D A C _ S T A T E _ R E A D Y ;  
  
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     D e i n i t i a l i z e   t h e   D A C   p e r i p h e r a l   r e g i s t e r s   t o   t h e i r   d e f a u l t   r e s e t   v a l u e s .  
     *   @ p a r a m     h d a c   p o i n t e r   t o   a   D A C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D A C .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ D A C _ D e I n i t ( D A C _ H a n d l e T y p e D e f   * h d a c )  
 {  
     / *   C h e c k   D A C   h a n d l e   * /  
     i f   ( h d a c   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ D A C _ A L L _ I N S T A N C E ( h d a c - > I n s t a n c e ) ) ;  
  
     / *   C h a n g e   D A C   s t a t e   * /  
     h d a c - > S t a t e   =   H A L _ D A C _ S T A T E _ B U S Y ;  
  
 # i f   ( U S E _ H A L _ D A C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     i f   ( h d a c - > M s p D e I n i t C a l l b a c k   = =   N U L L )  
     {  
         h d a c - > M s p D e I n i t C a l l b a c k   =   H A L _ D A C _ M s p D e I n i t ;  
     }  
     / *   D e I n i t   t h e   l o w   l e v e l   h a r d w a r e   * /  
     h d a c - > M s p D e I n i t C a l l b a c k ( h d a c ) ;  
 # e l s e  
     / *   D e I n i t   t h e   l o w   l e v e l   h a r d w a r e   * /  
     H A L _ D A C _ M s p D e I n i t ( h d a c ) ;  
 # e n d i f   / *   U S E _ H A L _ D A C _ R E G I S T E R _ C A L L B A C K S   * /  
  
     / *   S e t   D A C   e r r o r   c o d e   t o   n o n e   * /  
     h d a c - > E r r o r C o d e   =   H A L _ D A C _ E R R O R _ N O N E ;  
  
     / *   C h a n g e   D A C   s t a t e   * /  
     h d a c - > S t a t e   =   H A L _ D A C _ S T A T E _ R E S E T ;  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h d a c ) ;  
  
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e   t h e   D A C   M S P .  
     *   @ p a r a m     h d a c   p o i n t e r   t o   a   D A C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D A C .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ D A C _ M s p I n i t ( D A C _ H a n d l e T y p e D e f   * h d a c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h d a c ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ D A C _ M s p I n i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     D e I n i t i a l i z e   t h e   D A C   M S P .  
     *   @ p a r a m     h d a c   p o i n t e r   t o   a   D A C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D A C .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ D A C _ M s p D e I n i t ( D A C _ H a n d l e T y p e D e f   * h d a c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h d a c ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ D A C _ M s p D e I n i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   D A C _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2   I O   o p e r a t i o n   f u n c t i o n s  
     *     @ b r i e f         I O   o p e r a t i o n   f u n c t i o n s  
     *  
 @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                           # # # # #   I O   o p e r a t i o n   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]     T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o :  
             ( + )   S t a r t   c o n v e r s i o n .  
             ( + )   S t o p   c o n v e r s i o n .  
             ( + )   S t a r t   c o n v e r s i o n   a n d   e n a b l e   D M A   t r a n s f e r .  
             ( + )   S t o p   c o n v e r s i o n   a n d   d i s a b l e   D M A   t r a n s f e r .  
             ( + )   G e t   r e s u l t   o f   c o n v e r s i o n .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     E n a b l e s   D A C   a n d   s t a r t s   c o n v e r s i o n   o f   c h a n n e l .  
     *   @ p a r a m     h d a c   p o i n t e r   t o   a   D A C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D A C .  
     *   @ p a r a m     C h a n n e l   T h e   s e l e c t e d   D A C   c h a n n e l .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   D A C _ C H A N N E L _ 1 :   D A C   C h a n n e l 1   s e l e c t e d  
     *                         @ a r g   D A C _ C H A N N E L _ 2 :   D A C   C h a n n e l 2   s e l e c t e d  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ D A C _ S t a r t ( D A C _ H a n d l e T y p e D e f   * h d a c ,   u i n t 3 2 _ t   C h a n n e l )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ D A C _ C H A N N E L ( C h a n n e l ) ) ;  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h d a c ) ;  
  
     / *   C h a n g e   D A C   s t a t e   * /  
     h d a c - > S t a t e   =   H A L _ D A C _ S T A T E _ B U S Y ;  
  
     / *   E n a b l e   t h e   P e r i p h e r a l   * /  
     _ _ H A L _ D A C _ E N A B L E ( h d a c ,   C h a n n e l ) ;  
  
     i f   ( C h a n n e l   = =   D A C _ C H A N N E L _ 1 )  
     {  
         / *   C h e c k   i f   s o f t w a r e   t r i g g e r   e n a b l e d   * /  
         i f   ( ( h d a c - > I n s t a n c e - > C R   &   ( D A C _ C R _ T E N 1   |   D A C _ C R _ T S E L 1 ) )   = =   D A C _ T R I G G E R _ S O F T W A R E )  
         {  
             / *   E n a b l e   t h e   s e l e c t e d   D A C   s o f t w a r e   c o n v e r s i o n   * /  
             S E T _ B I T ( h d a c - > I n s t a n c e - > S W T R I G R ,   D A C _ S W T R I G R _ S W T R I G 1 ) ;  
         }  
     }  
  
     e l s e  
     {  
         / *   C h e c k   i f   s o f t w a r e   t r i g g e r   e n a b l e d   * /  
         i f   ( ( h d a c - > I n s t a n c e - > C R   &   ( D A C _ C R _ T E N 2   |   D A C _ C R _ T S E L 2 ) )   = =   ( D A C _ T R I G G E R _ S O F T W A R E   < <   ( C h a n n e l   &   0 x 1 0 U L ) ) )  
         {  
             / *   E n a b l e   t h e   s e l e c t e d   D A C   s o f t w a r e   c o n v e r s i o n * /  
             S E T _ B I T ( h d a c - > I n s t a n c e - > S W T R I G R ,   D A C _ S W T R I G R _ S W T R I G 2 ) ;  
         }  
     }  
  
  
     / *   C h a n g e   D A C   s t a t e   * /  
     h d a c - > S t a t e   =   H A L _ D A C _ S T A T E _ R E A D Y ;  
  
     / *   P r o c e s s   u n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h d a c ) ;  
  
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e s   D A C   a n d   s t o p   c o n v e r s i o n   o f   c h a n n e l .  
     *   @ p a r a m     h d a c   p o i n t e r   t o   a   D A C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D A C .  
     *   @ p a r a m     C h a n n e l   T h e   s e l e c t e d   D A C   c h a n n e l .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   D A C _ C H A N N E L _ 1 :   D A C   C h a n n e l 1   s e l e c t e d  
     *                         @ a r g   D A C _ C H A N N E L _ 2 :   D A C   C h a n n e l 2   s e l e c t e d  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ D A C _ S t o p ( D A C _ H a n d l e T y p e D e f   * h d a c ,   u i n t 3 2 _ t   C h a n n e l )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ D A C _ C H A N N E L ( C h a n n e l ) ) ;  
  
     / *   D i s a b l e   t h e   P e r i p h e r a l   * /  
     _ _ H A L _ D A C _ D I S A B L E ( h d a c ,   C h a n n e l ) ;  
  
     / *   C h a n g e   D A C   s t a t e   * /  
     h d a c - > S t a t e   =   H A L _ D A C _ S T A T E _ R E A D Y ;  
  
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e s   D A C   a n d   s t a r t s   c o n v e r s i o n   o f   c h a n n e l .  
     *   @ p a r a m     h d a c   p o i n t e r   t o   a   D A C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D A C .  
     *   @ p a r a m     C h a n n e l   T h e   s e l e c t e d   D A C   c h a n n e l .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   D A C _ C H A N N E L _ 1 :   D A C   C h a n n e l 1   s e l e c t e d  
     *                         @ a r g   D A C _ C H A N N E L _ 2 :   D A C   C h a n n e l 2   s e l e c t e d  
     *   @ p a r a m     p D a t a   T h e   s o u r c e   B u f f e r   a d d r e s s .  
     *   @ p a r a m     L e n g t h   T h e   l e n g t h   o f   d a t a   t o   b e   t r a n s f e r r e d   f r o m   m e m o r y   t o   D A C   p e r i p h e r a l  
     *   @ p a r a m     A l i g n m e n t   S p e c i f i e s   t h e   d a t a   a l i g n m e n t   f o r   D A C   c h a n n e l .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   D A C _ A L I G N _ 8 B _ R :   8 b i t   r i g h t   d a t a   a l i g n m e n t   s e l e c t e d  
     *                         @ a r g   D A C _ A L I G N _ 1 2 B _ L :   1 2 b i t   l e f t   d a t a   a l i g n m e n t   s e l e c t e d  
     *                         @ a r g   D A C _ A L I G N _ 1 2 B _ R :   1 2 b i t   r i g h t   d a t a   a l i g n m e n t   s e l e c t e d  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ D A C _ S t a r t _ D M A ( D A C _ H a n d l e T y p e D e f   * h d a c ,   u i n t 3 2 _ t   C h a n n e l ,   u i n t 3 2 _ t   * p D a t a ,   u i n t 3 2 _ t   L e n g t h ,  
                                                                         u i n t 3 2 _ t   A l i g n m e n t )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s ;  
     u i n t 3 2 _ t   t m p r e g   =   0 U ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ D A C _ C H A N N E L ( C h a n n e l ) ) ;  
     a s s e r t _ p a r a m ( I S _ D A C _ A L I G N ( A l i g n m e n t ) ) ;  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h d a c ) ;  
  
     / *   C h a n g e   D A C   s t a t e   * /  
     h d a c - > S t a t e   =   H A L _ D A C _ S T A T E _ B U S Y ;  
  
     i f   ( C h a n n e l   = =   D A C _ C H A N N E L _ 1 )  
     {  
         / *   S e t   t h e   D M A   t r a n s f e r   c o m p l e t e   c a l l b a c k   f o r   c h a n n e l 1   * /  
         h d a c - > D M A _ H a n d l e 1 - > X f e r C p l t C a l l b a c k   =   D A C _ D M A C o n v C p l t C h 1 ;  
  
         / *   S e t   t h e   D M A   h a l f   t r a n s f e r   c o m p l e t e   c a l l b a c k   f o r   c h a n n e l 1   * /  
         h d a c - > D M A _ H a n d l e 1 - > X f e r H a l f C p l t C a l l b a c k   =   D A C _ D M A H a l f C o n v C p l t C h 1 ;  
  
         / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   f o r   c h a n n e l 1   * /  
         h d a c - > D M A _ H a n d l e 1 - > X f e r E r r o r C a l l b a c k   =   D A C _ D M A E r r o r C h 1 ;  
  
         / *   E n a b l e   t h e   s e l e c t e d   D A C   c h a n n e l 1   D M A   r e q u e s t   * /  
         S E T _ B I T ( h d a c - > I n s t a n c e - > C R ,   D A C _ C R _ D M A E N 1 ) ;  
  
         / *   C a s e   o f   u s e   o f   c h a n n e l   1   * /  
         s w i t c h   ( A l i g n m e n t )  
         {  
             c a s e   D A C _ A L I G N _ 1 2 B _ R :  
                 / *   G e t   D H R 1 2 R 1   a d d r e s s   * /  
                 t m p r e g   =   ( u i n t 3 2 _ t ) & h d a c - > I n s t a n c e - > D H R 1 2 R 1 ;  
                 b r e a k ;  
             c a s e   D A C _ A L I G N _ 1 2 B _ L :  
                 / *   G e t   D H R 1 2 L 1   a d d r e s s   * /  
                 t m p r e g   =   ( u i n t 3 2 _ t ) & h d a c - > I n s t a n c e - > D H R 1 2 L 1 ;  
                 b r e a k ;  
             c a s e   D A C _ A L I G N _ 8 B _ R :  
                 / *   G e t   D H R 8 R 1   a d d r e s s   * /  
                 t m p r e g   =   ( u i n t 3 2 _ t ) & h d a c - > I n s t a n c e - > D H R 8 R 1 ;  
                 b r e a k ;  
             d e f a u l t :  
                 b r e a k ;  
         }  
     }  
  
     e l s e  
     {  
         / *   S e t   t h e   D M A   t r a n s f e r   c o m p l e t e   c a l l b a c k   f o r   c h a n n e l 2   * /  
         h d a c - > D M A _ H a n d l e 2 - > X f e r C p l t C a l l b a c k   =   D A C _ D M A C o n v C p l t C h 2 ;  
  
         / *   S e t   t h e   D M A   h a l f   t r a n s f e r   c o m p l e t e   c a l l b a c k   f o r   c h a n n e l 2   * /  
         h d a c - > D M A _ H a n d l e 2 - > X f e r H a l f C p l t C a l l b a c k   =   D A C _ D M A H a l f C o n v C p l t C h 2 ;  
  
         / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   f o r   c h a n n e l 2   * /  
         h d a c - > D M A _ H a n d l e 2 - > X f e r E r r o r C a l l b a c k   =   D A C _ D M A E r r o r C h 2 ;  
  
         / *   E n a b l e   t h e   s e l e c t e d   D A C   c h a n n e l 2   D M A   r e q u e s t   * /  
         S E T _ B I T ( h d a c - > I n s t a n c e - > C R ,   D A C _ C R _ D M A E N 2 ) ;  
  
         / *   C a s e   o f   u s e   o f   c h a n n e l   2   * /  
         s w i t c h   ( A l i g n m e n t )  
         {  
             c a s e   D A C _ A L I G N _ 1 2 B _ R :  
                 / *   G e t   D H R 1 2 R 2   a d d r e s s   * /  
                 t m p r e g   =   ( u i n t 3 2 _ t ) & h d a c - > I n s t a n c e - > D H R 1 2 R 2 ;  
                 b r e a k ;  
             c a s e   D A C _ A L I G N _ 1 2 B _ L :  
                 / *   G e t   D H R 1 2 L 2   a d d r e s s   * /  
                 t m p r e g   =   ( u i n t 3 2 _ t ) & h d a c - > I n s t a n c e - > D H R 1 2 L 2 ;  
                 b r e a k ;  
             c a s e   D A C _ A L I G N _ 8 B _ R :  
                 / *   G e t   D H R 8 R 2   a d d r e s s   * /  
                 t m p r e g   =   ( u i n t 3 2 _ t ) & h d a c - > I n s t a n c e - > D H R 8 R 2 ;  
                 b r e a k ;  
             d e f a u l t :  
                 b r e a k ;  
         }  
     }  
  
  
     / *   E n a b l e   t h e   D M A   S t r e a m   * /  
     i f   ( C h a n n e l   = =   D A C _ C H A N N E L _ 1 )  
     {  
 # i f   d e f i n e d ( D A C _ C R _ D M A U D R I E 1 )  
         / *   E n a b l e   t h e   D A C   D M A   u n d e r r u n   i n t e r r u p t   * /  
         _ _ H A L _ D A C _ E N A B L E _ I T ( h d a c ,   D A C _ I T _ D M A U D R 1 ) ;  
 # e n d i f   / *   D A C _ C R _ D M A U D R I E 1   * /  
  
         / *   E n a b l e   t h e   D M A   S t r e a m   * /  
         s t a t u s   =   H A L _ D M A _ S t a r t _ I T ( h d a c - > D M A _ H a n d l e 1 ,   ( u i n t 3 2 _ t ) p D a t a ,   t m p r e g ,   L e n g t h ) ;  
     }  
  
     e l s e  
     {  
 # i f   d e f i n e d ( D A C _ C R _ D M A U D R I E 2 )  
         / *   E n a b l e   t h e   D A C   D M A   u n d e r r u n   i n t e r r u p t   * /  
         _ _ H A L _ D A C _ E N A B L E _ I T ( h d a c ,   D A C _ I T _ D M A U D R 2 ) ;  
 # e n d i f   / *   D A C _ C R _ D M A U D R I E 2   * /  
  
         / *   E n a b l e   t h e   D M A   S t r e a m   * /  
         s t a t u s   =   H A L _ D M A _ S t a r t _ I T ( h d a c - > D M A _ H a n d l e 2 ,   ( u i n t 3 2 _ t ) p D a t a ,   t m p r e g ,   L e n g t h ) ;  
     }  
  
  
     / *   P r o c e s s   U n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h d a c ) ;  
  
     i f   ( s t a t u s   = =   H A L _ O K )  
     {  
         / *   E n a b l e   t h e   P e r i p h e r a l   * /  
         _ _ H A L _ D A C _ E N A B L E ( h d a c ,   C h a n n e l ) ;  
     }  
     e l s e  
     {  
         h d a c - > E r r o r C o d e   | =   H A L _ D A C _ E R R O R _ D M A ;  
     }  
  
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e s   D A C   a n d   s t o p   c o n v e r s i o n   o f   c h a n n e l .  
     *   @ p a r a m     h d a c   p o i n t e r   t o   a   D A C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D A C .  
     *   @ p a r a m     C h a n n e l   T h e   s e l e c t e d   D A C   c h a n n e l .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   D A C _ C H A N N E L _ 1 :   D A C   C h a n n e l 1   s e l e c t e d  
     *                         @ a r g   D A C _ C H A N N E L _ 2 :   D A C   C h a n n e l 2   s e l e c t e d  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ D A C _ S t o p _ D M A ( D A C _ H a n d l e T y p e D e f   * h d a c ,   u i n t 3 2 _ t   C h a n n e l )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ D A C _ C H A N N E L ( C h a n n e l ) ) ;  
  
     / *   D i s a b l e   t h e   s e l e c t e d   D A C   c h a n n e l   D M A   r e q u e s t   * /  
     h d a c - > I n s t a n c e - > C R   & =   ~ ( D A C _ C R _ D M A E N 1   < <   ( C h a n n e l   &   0 x 1 0 U L ) ) ;  
  
     / *   D i s a b l e   t h e   P e r i p h e r a l   * /  
     _ _ H A L _ D A C _ D I S A B L E ( h d a c ,   C h a n n e l ) ;  
  
     / *   D i s a b l e   t h e   D M A   S t r e a m   * /  
  
     / *   C h a n n e l 1   i s   u s e d   * /  
     i f   ( C h a n n e l   = =   D A C _ C H A N N E L _ 1 )  
     {  
         / *   D i s a b l e   t h e   D M A   S t r e a m   * /  
         ( v o i d ) H A L _ D M A _ A b o r t ( h d a c - > D M A _ H a n d l e 1 ) ;  
 # i f   d e f i n e d ( D A C _ C R _ D M A U D R I E 1 )  
         / *   D i s a b l e   t h e   D A C   D M A   u n d e r r u n   i n t e r r u p t   * /  
         _ _ H A L _ D A C _ D I S A B L E _ I T ( h d a c ,   D A C _ I T _ D M A U D R 1 ) ;  
 # e n d i f   / *   D A C _ C R _ D M A U D R I E 1   * /  
     }  
  
     e l s e   / *   C h a n n e l 2   i s   u s e d   f o r   * /  
     {  
         / *   D i s a b l e   t h e   D M A   S t r e a m   * /  
         ( v o i d ) H A L _ D M A _ A b o r t ( h d a c - > D M A _ H a n d l e 2 ) ;  
 # i f   d e f i n e d ( D A C _ C R _ D M A U D R I E 2 )  
         / *   D i s a b l e   t h e   D A C   D M A   u n d e r r u n   i n t e r r u p t   * /  
         _ _ H A L _ D A C _ D I S A B L E _ I T ( h d a c ,   D A C _ I T _ D M A U D R 2 ) ;  
 # e n d i f   / *   D A C _ C R _ D M A U D R I E 2   * /  
     }  
  
  
     / *   C h a n g e   D A C   s t a t e   * /  
     h d a c - > S t a t e   =   H A L _ D A C _ S T A T E _ R E A D Y ;  
  
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     H a n d l e s   D A C   i n t e r r u p t   r e q u e s t  
     *                   T h i s   f u n c t i o n   u s e s   t h e   i n t e r r u p t i o n   o f   D M A  
     *                   u n d e r r u n .  
     *   @ p a r a m     h d a c   p o i n t e r   t o   a   D A C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D A C .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ D A C _ I R Q H a n d l e r ( D A C _ H a n d l e T y p e D e f   * h d a c )  
 {  
 # i f   ! d e f i n e d ( D A C _ S R _ D M A U D R 1 )   & &   ! d e f i n e d ( D A C _ S R _ D M A U D R 2 )  
     U N U S E D ( h d a c ) ;  
 # e n d i f  
  
 # i f   d e f i n e d ( D A C _ S R _ D M A U D R 1 )  
     i f   ( _ _ H A L _ D A C _ G E T _ I T _ S O U R C E ( h d a c ,   D A C _ I T _ D M A U D R 1 ) )  
     {  
         / *   C h e c k   u n d e r r u n   f l a g   o f   D A C   c h a n n e l   1   * /  
         i f   ( _ _ H A L _ D A C _ G E T _ F L A G ( h d a c ,   D A C _ F L A G _ D M A U D R 1 ) )  
         {  
             / *   C h a n g e   D A C   s t a t e   t o   e r r o r   s t a t e   * /  
             h d a c - > S t a t e   =   H A L _ D A C _ S T A T E _ E R R O R ;  
  
             / *   S e t   D A C   e r r o r   c o d e   t o   c h a n n e l 1   D M A   u n d e r r u n   e r r o r   * /  
             S E T _ B I T ( h d a c - > E r r o r C o d e ,   H A L _ D A C _ E R R O R _ D M A U N D E R R U N C H 1 ) ;  
  
             / *   C l e a r   t h e   u n d e r r u n   f l a g   * /  
             _ _ H A L _ D A C _ C L E A R _ F L A G ( h d a c ,   D A C _ F L A G _ D M A U D R 1 ) ;  
  
             / *   D i s a b l e   t h e   s e l e c t e d   D A C   c h a n n e l 1   D M A   r e q u e s t   * /  
             C L E A R _ B I T ( h d a c - > I n s t a n c e - > C R ,   D A C _ C R _ D M A E N 1 ) ;  
  
             / *   E r r o r   c a l l b a c k   * /  
 # i f   ( U S E _ H A L _ D A C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
             h d a c - > D M A U n d e r r u n C a l l b a c k C h 1 ( h d a c ) ;  
 # e l s e  
             H A L _ D A C _ D M A U n d e r r u n C a l l b a c k C h 1 ( h d a c ) ;  
 # e n d i f   / *   U S E _ H A L _ D A C _ R E G I S T E R _ C A L L B A C K S   * /  
         }  
     }  
 # e n d i f   / *   D A C _ S R _ D M A U D R 1   * /  
  
 # i f   d e f i n e d ( D A C _ S R _ D M A U D R 2 )  
     i f   ( _ _ H A L _ D A C _ G E T _ I T _ S O U R C E ( h d a c ,   D A C _ I T _ D M A U D R 2 ) )  
     {  
         / *   C h e c k   u n d e r r u n   f l a g   o f   D A C   c h a n n e l   2   * /  
         i f   ( _ _ H A L _ D A C _ G E T _ F L A G ( h d a c ,   D A C _ F L A G _ D M A U D R 2 ) )  
         {  
             / *   C h a n g e   D A C   s t a t e   t o   e r r o r   s t a t e   * /  
             h d a c - > S t a t e   =   H A L _ D A C _ S T A T E _ E R R O R ;  
  
             / *   S e t   D A C   e r r o r   c o d e   t o   c h a n n e l 2   D M A   u n d e r r u n   e r r o r   * /  
             S E T _ B I T ( h d a c - > E r r o r C o d e ,   H A L _ D A C _ E R R O R _ D M A U N D E R R U N C H 2 ) ;  
  
             / *   C l e a r   t h e   u n d e r r u n   f l a g   * /  
             _ _ H A L _ D A C _ C L E A R _ F L A G ( h d a c ,   D A C _ F L A G _ D M A U D R 2 ) ;  
  
             / *   D i s a b l e   t h e   s e l e c t e d   D A C   c h a n n e l 2   D M A   r e q u e s t   * /  
             C L E A R _ B I T ( h d a c - > I n s t a n c e - > C R ,   D A C _ C R _ D M A E N 2 ) ;  
  
             / *   E r r o r   c a l l b a c k   * /  
 # i f   ( U S E _ H A L _ D A C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
             h d a c - > D M A U n d e r r u n C a l l b a c k C h 2 ( h d a c ) ;  
 # e l s e  
             H A L _ D A C E x _ D M A U n d e r r u n C a l l b a c k C h 2 ( h d a c ) ;  
 # e n d i f   / *   U S E _ H A L _ D A C _ R E G I S T E R _ C A L L B A C K S   * /  
         }  
     }  
 # e n d i f   / *   D A C _ S R _ D M A U D R 2   * /  
 }  
  
 / * *  
     *   @ b r i e f     S e t   t h e   s p e c i f i e d   d a t a   h o l d i n g   r e g i s t e r   v a l u e   f o r   D A C   c h a n n e l .  
     *   @ p a r a m     h d a c   p o i n t e r   t o   a   D A C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D A C .  
     *   @ p a r a m     C h a n n e l   T h e   s e l e c t e d   D A C   c h a n n e l .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   D A C _ C H A N N E L _ 1 :   D A C   C h a n n e l 1   s e l e c t e d  
     *                         @ a r g   D A C _ C H A N N E L _ 2 :   D A C   C h a n n e l 2   s e l e c t e d  
     *   @ p a r a m     A l i g n m e n t   S p e c i f i e s   t h e   d a t a   a l i g n m e n t .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   D A C _ A L I G N _ 8 B _ R :   8 b i t   r i g h t   d a t a   a l i g n m e n t   s e l e c t e d  
     *                         @ a r g   D A C _ A L I G N _ 1 2 B _ L :   1 2 b i t   l e f t   d a t a   a l i g n m e n t   s e l e c t e d  
     *                         @ a r g   D A C _ A L I G N _ 1 2 B _ R :   1 2 b i t   r i g h t   d a t a   a l i g n m e n t   s e l e c t e d  
     *   @ p a r a m     D a t a   D a t a   t o   b e   l o a d e d   i n   t h e   s e l e c t e d   d a t a   h o l d i n g   r e g i s t e r .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ D A C _ S e t V a l u e ( D A C _ H a n d l e T y p e D e f   * h d a c ,   u i n t 3 2 _ t   C h a n n e l ,   u i n t 3 2 _ t   A l i g n m e n t ,   u i n t 3 2 _ t   D a t a )  
 {  
     _ _ I O   u i n t 3 2 _ t   t m p   =   0 U L ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ D A C _ C H A N N E L ( C h a n n e l ) ) ;  
     a s s e r t _ p a r a m ( I S _ D A C _ A L I G N ( A l i g n m e n t ) ) ;  
     a s s e r t _ p a r a m ( I S _ D A C _ D A T A ( D a t a ) ) ;  
  
     t m p   =   ( u i n t 3 2 _ t ) h d a c - > I n s t a n c e ;  
     i f   ( C h a n n e l   = =   D A C _ C H A N N E L _ 1 )  
     {  
         t m p   + =   D A C _ D H R 1 2 R 1 _ A L I G N M E N T ( A l i g n m e n t ) ;  
     }  
  
     e l s e  
     {  
         t m p   + =   D A C _ D H R 1 2 R 2 _ A L I G N M E N T ( A l i g n m e n t ) ;  
     }  
  
  
     / *   S e t   t h e   D A C   c h a n n e l   s e l e c t e d   d a t a   h o l d i n g   r e g i s t e r   * /  
     * ( _ _ I O   u i n t 3 2 _ t   * )   t m p   =   D a t a ;  
  
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     C o n v e r s i o n   c o m p l e t e   c a l l b a c k   i n   n o n - b l o c k i n g   m o d e   f o r   C h a n n e l 1  
     *   @ p a r a m     h d a c   p o i n t e r   t o   a   D A C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D A C .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ D A C _ C o n v C p l t C a l l b a c k C h 1 ( D A C _ H a n d l e T y p e D e f   * h d a c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h d a c ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ D A C _ C o n v C p l t C a l l b a c k C h 1   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     C o n v e r s i o n   h a l f   D M A   t r a n s f e r   c a l l b a c k   i n   n o n - b l o c k i n g   m o d e   f o r   C h a n n e l 1  
     *   @ p a r a m     h d a c   p o i n t e r   t o   a   D A C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D A C .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ D A C _ C o n v H a l f C p l t C a l l b a c k C h 1 ( D A C _ H a n d l e T y p e D e f   * h d a c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h d a c ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ D A C _ C o n v H a l f C p l t C a l l b a c k C h 1   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     E r r o r   D A C   c a l l b a c k   f o r   C h a n n e l 1 .  
     *   @ p a r a m     h d a c   p o i n t e r   t o   a   D A C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D A C .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ D A C _ E r r o r C a l l b a c k C h 1 ( D A C _ H a n d l e T y p e D e f   * h d a c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h d a c ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ D A C _ E r r o r C a l l b a c k C h 1   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     D M A   u n d e r r u n   D A C   c a l l b a c k   f o r   c h a n n e l 1 .  
     *   @ p a r a m     h d a c   p o i n t e r   t o   a   D A C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D A C .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ D A C _ D M A U n d e r r u n C a l l b a c k C h 1 ( D A C _ H a n d l e T y p e D e f   * h d a c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h d a c ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ D A C _ D M A U n d e r r u n C a l l b a c k C h 1   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   D A C _ E x p o r t e d _ F u n c t i o n s _ G r o u p 3   P e r i p h e r a l   C o n t r o l   f u n c t i o n s  
     *     @ b r i e f         P e r i p h e r a l   C o n t r o l   f u n c t i o n s  
     *  
 @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                           # # # # #   P e r i p h e r a l   C o n t r o l   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]     T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o :  
             ( + )   C o n f i g u r e   c h a n n e l s .  
             ( + )   S e t   t h e   s p e c i f i e d   d a t a   h o l d i n g   r e g i s t e r   v a l u e   f o r   D A C   c h a n n e l .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     R e t u r n s   t h e   l a s t   d a t a   o u t p u t   v a l u e   o f   t h e   s e l e c t e d   D A C   c h a n n e l .  
     *   @ p a r a m     h d a c   p o i n t e r   t o   a   D A C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D A C .  
     *   @ p a r a m     C h a n n e l   T h e   s e l e c t e d   D A C   c h a n n e l .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   D A C _ C H A N N E L _ 1 :   D A C   C h a n n e l 1   s e l e c t e d  
     *                         @ a r g   D A C _ C H A N N E L _ 2 :   D A C   C h a n n e l 2   s e l e c t e d  
     *   @ r e t v a l   T h e   s e l e c t e d   D A C   c h a n n e l   d a t a   o u t p u t   v a l u e .  
     * /  
 u i n t 3 2 _ t   H A L _ D A C _ G e t V a l u e ( D A C _ H a n d l e T y p e D e f   * h d a c ,   u i n t 3 2 _ t   C h a n n e l )  
 {  
     u i n t 3 2 _ t   r e s u l t ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ D A C _ C H A N N E L ( C h a n n e l ) ) ;  
  
     i f   ( C h a n n e l   = =   D A C _ C H A N N E L _ 1 )  
     {  
         r e s u l t   =   h d a c - > I n s t a n c e - > D O R 1 ;  
     }  
  
     e l s e  
     {  
         r e s u l t   =   h d a c - > I n s t a n c e - > D O R 2 ;  
     }  
  
     / *   R e t u r n s   t h e   D A C   c h a n n e l   d a t a   o u t p u t   r e g i s t e r   v a l u e   * /  
     r e t u r n   r e s u l t ;  
 }  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e s   t h e   s e l e c t e d   D A C   c h a n n e l .  
     *   @ p a r a m     h d a c   p o i n t e r   t o   a   D A C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D A C .  
     *   @ p a r a m     s C o n f i g   D A C   c o n f i g u r a t i o n   s t r u c t u r e .  
     *   @ p a r a m     C h a n n e l   T h e   s e l e c t e d   D A C   c h a n n e l .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   D A C _ C H A N N E L _ 1 :   D A C   C h a n n e l 1   s e l e c t e d  
     *                         @ a r g   D A C _ C H A N N E L _ 2 :   D A C   C h a n n e l 2   s e l e c t e d  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ D A C _ C o n f i g C h a n n e l ( D A C _ H a n d l e T y p e D e f   * h d a c ,   D A C _ C h a n n e l C o n f T y p e D e f   * s C o n f i g ,   u i n t 3 2 _ t   C h a n n e l )  
 {  
     u i n t 3 2 _ t   t m p r e g 1 ;  
     u i n t 3 2 _ t   t m p r e g 2 ;  
  
     / *   C h e c k   t h e   D A C   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ D A C _ T R I G G E R ( s C o n f i g - > D A C _ T r i g g e r ) ) ;  
     a s s e r t _ p a r a m ( I S _ D A C _ O U T P U T _ B U F F E R _ S T A T E ( s C o n f i g - > D A C _ O u t p u t B u f f e r ) ) ;  
     a s s e r t _ p a r a m ( I S _ D A C _ C H A N N E L ( C h a n n e l ) ) ;  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h d a c ) ;  
  
     / *   C h a n g e   D A C   s t a t e   * /  
     h d a c - > S t a t e   =   H A L _ D A C _ S T A T E _ B U S Y ;  
  
     / *   G e t   t h e   D A C   C R   v a l u e   * /  
     t m p r e g 1   =   h d a c - > I n s t a n c e - > C R ;  
     / *   C l e a r   B O F F x ,   T E N x ,   T S E L x ,   W A V E x   a n d   M A M P x   b i t s   * /  
     t m p r e g 1   & =   ~ ( ( ( u i n t 3 2 _ t ) ( D A C _ C R _ M A M P 1   |   D A C _ C R _ W A V E 1   |   D A C _ C R _ T S E L 1   |   D A C _ C R _ T E N 1   |   D A C _ C R _ B O F F 1 ) )   < <   ( C h a n n e l   &   0 x 1 0 U L ) ) ;  
     / *   C o n f i g u r e   f o r   t h e   s e l e c t e d   D A C   c h a n n e l :   b u f f e r   o u t p u t ,   t r i g g e r   * /  
     / *   S e t   T S E L x   a n d   T E N x   b i t s   a c c o r d i n g   t o   D A C _ T r i g g e r   v a l u e   * /  
     / *   S e t   B O F F x   b i t   a c c o r d i n g   t o   D A C _ O u t p u t B u f f e r   v a l u e   * /  
     t m p r e g 2   =   ( s C o n f i g - > D A C _ T r i g g e r   |   s C o n f i g - > D A C _ O u t p u t B u f f e r ) ;  
     / *   C a l c u l a t e   C R   r e g i s t e r   v a l u e   d e p e n d i n g   o n   D A C _ C h a n n e l   * /  
     t m p r e g 1   | =   t m p r e g 2   < <   ( C h a n n e l   &   0 x 1 0 U L ) ;  
     / *   W r i t e   t o   D A C   C R   * /  
     h d a c - > I n s t a n c e - > C R   =   t m p r e g 1 ;  
     / *   D i s a b l e   w a v e   g e n e r a t i o n   * /  
     C L E A R _ B I T ( h d a c - > I n s t a n c e - > C R ,   ( D A C _ C R _ W A V E 1   < <   ( C h a n n e l   &   0 x 1 0 U L ) ) ) ;  
  
     / *   C h a n g e   D A C   s t a t e   * /  
     h d a c - > S t a t e   =   H A L _ D A C _ S T A T E _ R E A D Y ;  
  
     / *   P r o c e s s   u n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h d a c ) ;  
  
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   D A C _ E x p o r t e d _ F u n c t i o n s _ G r o u p 4   P e r i p h e r a l   S t a t e   a n d   E r r o r s   f u n c t i o n s  
     *     @ b r i e f       P e r i p h e r a l   S t a t e   a n d   E r r o r s   f u n c t i o n s  
     *  
 @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                         # # # # #   P e r i p h e r a l   S t a t e   a n d   E r r o r s   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
         T h i s   s u b s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o  
             ( + )   C h e c k   t h e   D A C   s t a t e .  
             ( + )   C h e c k   t h e   D A C   E r r o r s .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     r e t u r n   t h e   D A C   h a n d l e   s t a t e  
     *   @ p a r a m     h d a c   p o i n t e r   t o   a   D A C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D A C .  
     *   @ r e t v a l   H A L   s t a t e  
     * /  
 H A L _ D A C _ S t a t e T y p e D e f   H A L _ D A C _ G e t S t a t e ( D A C _ H a n d l e T y p e D e f   * h d a c )  
 {  
     / *   R e t u r n   D A C   h a n d l e   s t a t e   * /  
     r e t u r n   h d a c - > S t a t e ;  
 }  
  
  
 / * *  
     *   @ b r i e f     R e t u r n   t h e   D A C   e r r o r   c o d e  
     *   @ p a r a m     h d a c   p o i n t e r   t o   a   D A C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D A C .  
     *   @ r e t v a l   D A C   E r r o r   C o d e  
     * /  
 u i n t 3 2 _ t   H A L _ D A C _ G e t E r r o r ( D A C _ H a n d l e T y p e D e f   * h d a c )  
 {  
     r e t u r n   h d a c - > E r r o r C o d e ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ a d d t o g r o u p   D A C _ E x p o r t e d _ F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ a d d t o g r o u p   D A C _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1  
     *   @ {  
     * /  
 # i f   ( U S E _ H A L _ D A C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 / * *  
     *   @ b r i e f     R e g i s t e r   a   U s e r   D A C   C a l l b a c k  
     *                   T o   b e   u s e d   i n s t e a d   o f   t h e   w e a k   ( s u r c h a r g e d )   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m     h d a c   D A C   h a n d l e  
     *   @ p a r a m     C a l l b a c k I D   I D   o f   t h e   c a l l b a c k   t o   b e   r e g i s t e r e d  
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                     @ a r g   @ r e f   H A L _ D A C _ E R R O R _ I N V A L I D _ C A L L B A C K       D A C   E r r o r   C a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ D A C _ C H 1 _ C O M P L E T E _ C B _ I D               D A C   C H 1   C o m p l e t e   C a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ D A C _ C H 1 _ H A L F _ C O M P L E T E _ C B _ I D     D A C   C H 1   H a l f   C o m p l e t e   C a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ D A C _ C H 1 _ E R R O R _ I D                           D A C   C H 1   E r r o r   C a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ D A C _ C H 1 _ U N D E R R U N _ C B _ I D               D A C   C H 1   U n d e r R u n   C a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ D A C _ C H 2 _ C O M P L E T E _ C B _ I D               D A C   C H 2   C o m p l e t e   C a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ D A C _ C H 2 _ H A L F _ C O M P L E T E _ C B _ I D     D A C   C H 2   H a l f   C o m p l e t e   C a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ D A C _ C H 2 _ E R R O R _ I D                           D A C   C H 2   E r r o r   C a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ D A C _ C H 2 _ U N D E R R U N _ C B _ I D               D A C   C H 2   U n d e r R u n   C a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ D A C _ M S P I N I T _ C B _ I D                         D A C   M S P   I n i t   C a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ D A C _ M S P D E I N I T _ C B _ I D                     D A C   M S P   D e I n i t   C a l l b a c k   I D  
     *  
     *   @ p a r a m     p C a l l b a c k   p o i n t e r   t o   t h e   C a l l b a c k   f u n c t i o n  
     *   @ r e t v a l   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ D A C _ R e g i s t e r C a l l b a c k ( D A C _ H a n d l e T y p e D e f   * h d a c ,   H A L _ D A C _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D ,  
                                                                                       p D A C _ C a l l b a c k T y p e D e f   p C a l l b a c k )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     i f   ( p C a l l b a c k   = =   N U L L )  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h d a c - > E r r o r C o d e   | =   H A L _ D A C _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h d a c ) ;  
  
     i f   ( h d a c - > S t a t e   = =   H A L _ D A C _ S T A T E _ R E A D Y )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ D A C _ C H 1 _ C O M P L E T E _ C B _ I D   :  
                 h d a c - > C o n v C p l t C a l l b a c k C h 1   =   p C a l l b a c k ;  
                 b r e a k ;  
             c a s e   H A L _ D A C _ C H 1 _ H A L F _ C O M P L E T E _ C B _ I D   :  
                 h d a c - > C o n v H a l f C p l t C a l l b a c k C h 1   =   p C a l l b a c k ;  
                 b r e a k ;  
             c a s e   H A L _ D A C _ C H 1 _ E R R O R _ I D   :  
                 h d a c - > E r r o r C a l l b a c k C h 1   =   p C a l l b a c k ;  
                 b r e a k ;  
             c a s e   H A L _ D A C _ C H 1 _ U N D E R R U N _ C B _ I D   :  
                 h d a c - > D M A U n d e r r u n C a l l b a c k C h 1   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ D A C _ C H 2 _ C O M P L E T E _ C B _ I D   :  
                 h d a c - > C o n v C p l t C a l l b a c k C h 2   =   p C a l l b a c k ;  
                 b r e a k ;  
             c a s e   H A L _ D A C _ C H 2 _ H A L F _ C O M P L E T E _ C B _ I D   :  
                 h d a c - > C o n v H a l f C p l t C a l l b a c k C h 2   =   p C a l l b a c k ;  
                 b r e a k ;  
             c a s e   H A L _ D A C _ C H 2 _ E R R O R _ I D   :  
                 h d a c - > E r r o r C a l l b a c k C h 2   =   p C a l l b a c k ;  
                 b r e a k ;  
             c a s e   H A L _ D A C _ C H 2 _ U N D E R R U N _ C B _ I D   :  
                 h d a c - > D M A U n d e r r u n C a l l b a c k C h 2   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ D A C _ M S P I N I T _ C B _ I D   :  
                 h d a c - > M s p I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
             c a s e   H A L _ D A C _ M S P D E I N I T _ C B _ I D   :  
                 h d a c - > M s p D e I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
             d e f a u l t   :  
                 / *   U p d a t e   t h e   e r r o r   c o d e   * /  
                 h d a c - > E r r o r C o d e   | =   H A L _ D A C _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
                 / *   u p d a t e   r e t u r n   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e   i f   ( h d a c - > S t a t e   = =   H A L _ D A C _ S T A T E _ R E S E T )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ D A C _ M S P I N I T _ C B _ I D   :  
                 h d a c - > M s p I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
             c a s e   H A L _ D A C _ M S P D E I N I T _ C B _ I D   :  
                 h d a c - > M s p D e I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
             d e f a u l t   :  
                 / *   U p d a t e   t h e   e r r o r   c o d e   * /  
                 h d a c - > E r r o r C o d e   | =   H A L _ D A C _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
                 / *   u p d a t e   r e t u r n   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h d a c - > E r r o r C o d e   | =   H A L _ D A C _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
         / *   u p d a t e   r e t u r n   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h d a c ) ;  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     U n r e g i s t e r   a   U s e r   D A C   C a l l b a c k  
     *                   D A C   C a l l b a c k   i s   r e d i r e c t e d   t o   t h e   w e a k   ( s u r c h a r g e d )   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m     h d a c   D A C   h a n d l e  
     *   @ p a r a m     C a l l b a c k I D   I D   o f   t h e   c a l l b a c k   t o   b e   u n r e g i s t e r e d  
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                     @ a r g   @ r e f   H A L _ D A C _ C H 1 _ C O M P L E T E _ C B _ I D                     D A C   C H 1   t r a n s f e r   C o m p l e t e   C a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ D A C _ C H 1 _ H A L F _ C O M P L E T E _ C B _ I D           D A C   C H 1   H a l f   C o m p l e t e   C a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ D A C _ C H 1 _ E R R O R _ I D                                 D A C   C H 1   E r r o r   C a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ D A C _ C H 1 _ U N D E R R U N _ C B _ I D                     D A C   C H 1   U n d e r R u n   C a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ D A C _ C H 2 _ C O M P L E T E _ C B _ I D                     D A C   C H 2   C o m p l e t e   C a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ D A C _ C H 2 _ H A L F _ C O M P L E T E _ C B _ I D           D A C   C H 2   H a l f   C o m p l e t e   C a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ D A C _ C H 2 _ E R R O R _ I D                                 D A C   C H 2   E r r o r   C a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ D A C _ C H 2 _ U N D E R R U N _ C B _ I D                     D A C   C H 2   U n d e r R u n   C a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ D A C _ M S P I N I T _ C B _ I D                               D A C   M S P   I n i t   C a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ D A C _ M S P D E I N I T _ C B _ I D                           D A C   M S P   D e I n i t   C a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ D A C _ A L L _ C B _ I D                                       D A C   A l l   c a l l b a c k s  
     *   @ r e t v a l   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ D A C _ U n R e g i s t e r C a l l b a c k ( D A C _ H a n d l e T y p e D e f   * h d a c ,   H A L _ D A C _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h d a c ) ;  
  
     i f   ( h d a c - > S t a t e   = =   H A L _ D A C _ S T A T E _ R E A D Y )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ D A C _ C H 1 _ C O M P L E T E _ C B _ I D   :  
                 h d a c - > C o n v C p l t C a l l b a c k C h 1   =   H A L _ D A C _ C o n v C p l t C a l l b a c k C h 1 ;  
                 b r e a k ;  
             c a s e   H A L _ D A C _ C H 1 _ H A L F _ C O M P L E T E _ C B _ I D   :  
                 h d a c - > C o n v H a l f C p l t C a l l b a c k C h 1   =   H A L _ D A C _ C o n v H a l f C p l t C a l l b a c k C h 1 ;  
                 b r e a k ;  
             c a s e   H A L _ D A C _ C H 1 _ E R R O R _ I D   :  
                 h d a c - > E r r o r C a l l b a c k C h 1   =   H A L _ D A C _ E r r o r C a l l b a c k C h 1 ;  
                 b r e a k ;  
             c a s e   H A L _ D A C _ C H 1 _ U N D E R R U N _ C B _ I D   :  
                 h d a c - > D M A U n d e r r u n C a l l b a c k C h 1   =   H A L _ D A C _ D M A U n d e r r u n C a l l b a c k C h 1 ;  
                 b r e a k ;  
  
             c a s e   H A L _ D A C _ C H 2 _ C O M P L E T E _ C B _ I D   :  
                 h d a c - > C o n v C p l t C a l l b a c k C h 2   =   H A L _ D A C E x _ C o n v C p l t C a l l b a c k C h 2 ;  
                 b r e a k ;  
             c a s e   H A L _ D A C _ C H 2 _ H A L F _ C O M P L E T E _ C B _ I D   :  
                 h d a c - > C o n v H a l f C p l t C a l l b a c k C h 2   =   H A L _ D A C E x _ C o n v H a l f C p l t C a l l b a c k C h 2 ;  
                 b r e a k ;  
             c a s e   H A L _ D A C _ C H 2 _ E R R O R _ I D   :  
                 h d a c - > E r r o r C a l l b a c k C h 2   =   H A L _ D A C E x _ E r r o r C a l l b a c k C h 2 ;  
                 b r e a k ;  
             c a s e   H A L _ D A C _ C H 2 _ U N D E R R U N _ C B _ I D   :  
                 h d a c - > D M A U n d e r r u n C a l l b a c k C h 2   =   H A L _ D A C E x _ D M A U n d e r r u n C a l l b a c k C h 2 ;  
                 b r e a k ;  
  
             c a s e   H A L _ D A C _ M S P I N I T _ C B _ I D   :  
                 h d a c - > M s p I n i t C a l l b a c k   =   H A L _ D A C _ M s p I n i t ;  
                 b r e a k ;  
             c a s e   H A L _ D A C _ M S P D E I N I T _ C B _ I D   :  
                 h d a c - > M s p D e I n i t C a l l b a c k   =   H A L _ D A C _ M s p D e I n i t ;  
                 b r e a k ;  
             c a s e   H A L _ D A C _ A L L _ C B _ I D   :  
                 h d a c - > C o n v C p l t C a l l b a c k C h 1   =   H A L _ D A C _ C o n v C p l t C a l l b a c k C h 1 ;  
                 h d a c - > C o n v H a l f C p l t C a l l b a c k C h 1   =   H A L _ D A C _ C o n v H a l f C p l t C a l l b a c k C h 1 ;  
                 h d a c - > E r r o r C a l l b a c k C h 1   =   H A L _ D A C _ E r r o r C a l l b a c k C h 1 ;  
                 h d a c - > D M A U n d e r r u n C a l l b a c k C h 1   =   H A L _ D A C _ D M A U n d e r r u n C a l l b a c k C h 1 ;  
  
                 h d a c - > C o n v C p l t C a l l b a c k C h 2   =   H A L _ D A C E x _ C o n v C p l t C a l l b a c k C h 2 ;  
                 h d a c - > C o n v H a l f C p l t C a l l b a c k C h 2   =   H A L _ D A C E x _ C o n v H a l f C p l t C a l l b a c k C h 2 ;  
                 h d a c - > E r r o r C a l l b a c k C h 2   =   H A L _ D A C E x _ E r r o r C a l l b a c k C h 2 ;  
                 h d a c - > D M A U n d e r r u n C a l l b a c k C h 2   =   H A L _ D A C E x _ D M A U n d e r r u n C a l l b a c k C h 2 ;  
  
                 h d a c - > M s p I n i t C a l l b a c k   =   H A L _ D A C _ M s p I n i t ;  
                 h d a c - > M s p D e I n i t C a l l b a c k   =   H A L _ D A C _ M s p D e I n i t ;  
                 b r e a k ;  
             d e f a u l t   :  
                 / *   U p d a t e   t h e   e r r o r   c o d e   * /  
                 h d a c - > E r r o r C o d e   | =   H A L _ D A C _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
                 / *   u p d a t e   r e t u r n   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e   i f   ( h d a c - > S t a t e   = =   H A L _ D A C _ S T A T E _ R E S E T )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ D A C _ M S P I N I T _ C B _ I D   :  
                 h d a c - > M s p I n i t C a l l b a c k   =   H A L _ D A C _ M s p I n i t ;  
                 b r e a k ;  
             c a s e   H A L _ D A C _ M S P D E I N I T _ C B _ I D   :  
                 h d a c - > M s p D e I n i t C a l l b a c k   =   H A L _ D A C _ M s p D e I n i t ;  
                 b r e a k ;  
             d e f a u l t   :  
                 / *   U p d a t e   t h e   e r r o r   c o d e   * /  
                 h d a c - > E r r o r C o d e   | =   H A L _ D A C _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
                 / *   u p d a t e   r e t u r n   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h d a c - > E r r o r C o d e   | =   H A L _ D A C _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
         / *   u p d a t e   r e t u r n   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h d a c ) ;  
     r e t u r n   s t a t u s ;  
 }  
 # e n d i f   / *   U S E _ H A L _ D A C _ R E G I S T E R _ C A L L B A C K S   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ a d d t o g r o u p   D A C _ P r i v a t e _ F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     D M A   c o n v e r s i o n   c o m p l e t e   c a l l b a c k .  
     *   @ p a r a m     h d m a   p o i n t e r   t o   a   D M A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D M A   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   D A C _ D M A C o n v C p l t C h 1 ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     D A C _ H a n d l e T y p e D e f   * h d a c   =   ( D A C _ H a n d l e T y p e D e f   * ) ( ( D M A _ H a n d l e T y p e D e f   * ) h d m a ) - > P a r e n t ;  
  
 # i f   ( U S E _ H A L _ D A C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     h d a c - > C o n v C p l t C a l l b a c k C h 1 ( h d a c ) ;  
 # e l s e  
     H A L _ D A C _ C o n v C p l t C a l l b a c k C h 1 ( h d a c ) ;  
 # e n d i f   / *   U S E _ H A L _ D A C _ R E G I S T E R _ C A L L B A C K S   * /  
  
     h d a c - > S t a t e   =   H A L _ D A C _ S T A T E _ R E A D Y ;  
 }  
  
 / * *  
     *   @ b r i e f     D M A   h a l f   t r a n s f e r   c o m p l e t e   c a l l b a c k .  
     *   @ p a r a m     h d m a   p o i n t e r   t o   a   D M A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D M A   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   D A C _ D M A H a l f C o n v C p l t C h 1 ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     D A C _ H a n d l e T y p e D e f   * h d a c   =   ( D A C _ H a n d l e T y p e D e f   * ) ( ( D M A _ H a n d l e T y p e D e f   * ) h d m a ) - > P a r e n t ;  
     / *   C o n v e r s i o n   c o m p l e t e   c a l l b a c k   * /  
 # i f   ( U S E _ H A L _ D A C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     h d a c - > C o n v H a l f C p l t C a l l b a c k C h 1 ( h d a c ) ;  
 # e l s e  
     H A L _ D A C _ C o n v H a l f C p l t C a l l b a c k C h 1 ( h d a c ) ;  
 # e n d i f     / *   U S E _ H A L _ D A C _ R E G I S T E R _ C A L L B A C K S   * /  
 }  
  
 / * *  
     *   @ b r i e f     D M A   e r r o r   c a l l b a c k  
     *   @ p a r a m     h d m a   p o i n t e r   t o   a   D M A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D M A   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   D A C _ D M A E r r o r C h 1 ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     D A C _ H a n d l e T y p e D e f   * h d a c   =   ( D A C _ H a n d l e T y p e D e f   * ) ( ( D M A _ H a n d l e T y p e D e f   * ) h d m a ) - > P a r e n t ;  
  
     / *   S e t   D A C   e r r o r   c o d e   t o   D M A   e r r o r   * /  
     h d a c - > E r r o r C o d e   | =   H A L _ D A C _ E R R O R _ D M A ;  
  
 # i f   ( U S E _ H A L _ D A C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     h d a c - > E r r o r C a l l b a c k C h 1 ( h d a c ) ;  
 # e l s e  
     H A L _ D A C _ E r r o r C a l l b a c k C h 1 ( h d a c ) ;  
 # e n d i f   / *   U S E _ H A L _ D A C _ R E G I S T E R _ C A L L B A C K S   * /  
  
     h d a c - > S t a t e   =   H A L _ D A C _ S T A T E _ R E A D Y ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   D A C   * /  
  
 # e n d i f   / *   H A L _ D A C _ M O D U L E _ E N A B L E D   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  